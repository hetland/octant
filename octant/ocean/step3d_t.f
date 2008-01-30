
      SUBROUTINE step3d_t (dt, rmask, pm, pn,                           &
     &                          z_w, Akt, u, v,                         &
     &                          told, tnew,                             &
     &                          L, M, N)
c***********************************************************************
c
c
c  Imported variable declarations.
c
      integer L, M, N
      real dt
      real rmask(0:L,0:M)
      real pm(0:L,0:M)
      real pn(0:L,0:M)
      real z_w(0:L,0:M,0:N)
      real Akt(0:L,0:M,0:N)
      real u(1:L,0:M,N)
      real v(0:L,1:M,N)
      real told(0:L,0:M,N)
      real tnew(0:L,0:M,N)

cf2py intent(out) tnew

c  Local variable declarations.
c
      integer :: Lm, Mm
      real :: cff, cff1, cff2
      
      real :: W(0:L,0:M,0:N)
      real :: Hz(0:L,0:M,N)
      real :: on_u(1:L,0:M)
      real :: om_v(0:L,1:M)
      real :: Huon(0:L,0:M,N)
      real :: Hvom(0:L,0:M,N)      
      real :: umask(1:L,0:M)
      real :: vmask(0:L,1:M)
      
      real :: CF(-3:L+3,0:N)
      real :: BC(-3:L+3,0:N)
      real :: DC(-3:L+3,0:N)
      real :: FC(-3:L+3,0:N)

      real :: FE(-3:L+3,-3:M+3)
      real :: FX(-3:L+3,-3:M+3)
      real :: curv(-3:L+3,-3:M+3)

      real :: oHz(-3:L+3,-3:M+3,N)

c
c-----------------------------------------------------------------------
c  Set grid size metrics
c-----------------------------------------------------------------------
c
      Lm=L-1
      Mm=M-1

c
c-----------------------------------------------------------------------
c  Compute Land/Sea mask of U- and V-points.
c-----------------------------------------------------------------------
c
      DO j=0,M
        DO i=1,L
          umask(i,j)=rmask(i-1,j)*rmask(i,j)
        END DO
      END DO
      DO j=1,M
        DO i=0,L
          vmask(i,j)=rmask(i,j-1)*rmask(i,j)
        END DO
      END DO
c
c-----------------------------------------------------------------------
c  Compute m/n, 1/m, and 1/n at horizontal U-points.
c-----------------------------------------------------------------------
c
      DO j=0,M
        DO i=1,L
          on_u(i,j)=2.0/(pn(i-1,j)+pn(i,j))
        END DO
      END DO
      DO j=1,M
        DO i=0,L
          om_v(i,j)=2.0/(pm(i,j-1)+pm(i,j))
        END DO
      END DO
c
c-----------------------------------------------------------------------
c  Compute vertical thicknesses and inverse thickness.
c-----------------------------------------------------------------------
c
      DO k=1,N
        DO j=0,M
          DO i=0,L
            Hz(i,j,k)=z_w(i,j,k)-z_w(i,j,k-1)
            oHz(i,j,k)=1.0/Hz(i,j,k)
          END DO
        END DO
      END DO
c
c-----------------------------------------------------------------------
c  Compute horizontal mass fluxes, Hz*u/n and Hz*v/m.
c-----------------------------------------------------------------------
c
      DO k=1,N
        DO j=0,M
          DO i=1,L
            Huon(i,j,k)=0.5*(Hz(i,j,k)+Hz(i-1,j,k))*u(i,j,k)*on_u(i,j)
          END DO
        END DO
        DO j=1,M
          DO i=0,L
            Hvom(i,j,k)=0.5*(Hz(i,j,k)+Hz(i,j-1,k))*v(i,j,k)*om_v(i,j)
          END DO
        END DO
      END DO
c
c------------------------------------------------------------------------
c  Vertically integrate horizontal mass flux divergence.
c------------------------------------------------------------------------
c
c  Starting with zero vertical velocity at the bottom, integrate
c  from the bottom (k=0) to the free-surface (k=N).  The w(:,:,N)
c  contains the vertical velocity at the free-surface, d(zeta)/d(t).
c  Notice that barotropic mass flux divergence is not used directly.
c
      DO j=1,Mm
        DO i=1,Lm
          W(i,j,0)=0.0
        END DO
      END DO
      DO k=1,N
        DO j=1,Mm
          DO i=1,Lm
              W(i,j,k)=W(i,j,k-1)-                                      &
     &                 (Huon(i+1,j,k)-Huon(i,j,k)+                      &
     &                  Hvom(i,j+1,k)-Hvom(i,j,k))
          END DO
        END DO
      END DO

c
c-----------------------------------------------------------------------
c  Time-step horizontal advection term.
c-----------------------------------------------------------------------
c
        DO k=1,N
          DO j=0,M
            DO i=0,L
                tnew(i,j,k) = told(i,j,k)
            END DO
          END DO
        END DO
c
        DO k=1,N
          DO j=0,M
            DO i=1,L
              FX(i,j)=told(i  ,j,k)-                                    &
     &                told(i-1,j,k)
              FX(i,j)=FX(i,j)*umask(i,j)
            END DO
          END DO
          DO j=0,M
            curv(0,j)=0.0
            curv(L,j)=0.0
            DO i=1,Lm
              curv(i,j)=FX(i+1,j)-FX(i,j)
            END DO
          END DO
c
          cff1=1.0/6.0
          cff2=1.0/3.0
          DO j=0,M
            DO i=1,L
              FX(i,j)=Huon(i,j,k)*0.5*                                  &
     &                (told(i-1,j,k)+                                   &
     &                 told(i  ,j,k))-                                  &
     &                cff1*(curv(i-1,j)*MAX(Huon(i,j,k),0.0)+           &
     &                      curv(i  ,j)*MIN(Huon(i,j,k),0.0))
            END DO
          END DO
c
          DO j=1,M
            DO i=0,L
              FE(i,j)=told(i,j  ,k)-                                    &
     &                told(i,j-1,k)
              FE(i,j)=FE(i,j)*vmask(i,j)
            END DO
          END DO
c
          DO i=0,L
            curv(i,0)=0.0
            curv(i,M)=0.0
            DO j=1,Mm
              curv(i,j)=FE(i,j+1)-FE(i,j)
            END DO
          END DO
c
          cff1=1.0/6.0
          cff2=1.0/3.0
          DO j=1,M
            DO i=0,L
              FE(i,j)=Hvom(i,j,k)*0.5*                                  &
     &                (told(i,j-1,k)+                                   &
     &                 told(i,j  ,k))-                                  &
     &                cff1*(curv(i,j-1)*MAX(Hvom(i,j,k),0.0)+           &
     &                      curv(i,j  )*MIN(Hvom(i,j,k),0.0))
            END DO
          END DO
c
c  Time-step horizontal advection term.
c
          DO j=1,Mm
            DO i=1,Lm
              cff=dt*pm(i,j)*pn(i,j)
              cff1=cff*(FX(i+1,j)-FX(i,j)+                              &
     &                  FE(i,j+1)-FE(i,j))
              tnew(i,j,k)=tnew(i,j,k)-cff1
            END DO
          END DO
        END DO
c
c-----------------------------------------------------------------------
c  Time-step vertical advection term.
c-----------------------------------------------------------------------
c
      DO j=1,Mm

c
c  Build conservative parabolic splines for the vertical derivatives
c  "FC" of the tracer.  Then, the interfacial "FC" values are
c  converted to vertical advective flux.
c
          DO i=1,Lm
            FC(i,0)=2.0*told(i,j,1)
            CF(i,1)=1.0
          END DO
          DO k=1,N-1
            DO i=1,Lm
              cff=1.0/(2.0*Hz(i,j,k)+                                   &
     &                    Hz(i,j,k+1)*(2.0-CF(i,k)))
              CF(i,k+1)=cff*Hz(i,j,k)
              FC(i,k)=cff*(3.0*(Hz(i,j,k  )*told(i,j,k+1)+              &
     &                             Hz(i,j,k+1)*told(i,j,k))-            &
     &                     Hz(i,j,k+1)*FC(i,k-1))
            END DO
          END DO
          DO i=1,Lm
            FC(i,N)=(2.0*told(i,j,N)-FC(i,N-1))/                        &
     &                  (1.0-CF(i,N))
          END DO
          DO k=N-1,0,-1
            DO i=1,Lm
              FC(i,k)=FC(i,k)-CF(i,k+1)*FC(i,k+1)
              FC(i,k+1)=W(i,j,k+1)*FC(i,k+1)
            END DO
          END DO
          DO i=1,Lm
            FC(i,N)=0.0
            FC(i,0)=0.0
          END DO
c
c  Time-step vertical advection term.
c
          DO i=1,Lm
            CF(i,0)=dt*pm(i,j)*pn(i,j)
          END DO
          DO k=1,N
            DO i=1,Lm
              cff1=CF(i,0)*(FC(i,k)-FC(i,k-1))
              tnew(i,j,k)=tnew(i,j,k)-cff1
c               tnew(i,j,k)=tnew(i,j,k)*oHz(i,j,k)
            END DO
          END DO
        END DO
c
c-----------------------------------------------------------------------
c  Time-step vertical diffusion term.
c-----------------------------------------------------------------------
c

c
c  Use conservative, parabolic spline reconstruction of vertical
c  diffusion derivatives.  Then, time step vertical diffusion term
c  implicitly.
c
        DO j=1,Mm
          cff1=1.0/6.0
          DO k=1,N-1
            DO i=1,Lm
              FC(i,k)=cff1*Hz(i,j,k  )-                                 &
     &                dt*Akt(i,j,k-1)*oHz(i,j,k  )
              CF(i,k)=cff1*Hz(i,j,k+1)-                                 &
     &                dt*Akt(i,j,k+1)*oHz(i,j,k+1)
            END DO
          END DO
          DO i=1,Lm
            CF(i,0)=0.0
            DC(i,0)=0.0
          END DO
c
c  LU decomposition and forward substitution.
c
          cff1=1.0/3.0
          DO k=1,N-1
            DO i=1,Lm
              BC(i,k)=cff1*(Hz(i,j,k)+Hz(i,j,k+1))+                     &
     &                dt*Akt(i,j,k)*(oHz(i,j,k)+oHz(i,j,k+1))
              cff=1.0/(BC(i,k)-FC(i,k)*CF(i,k-1))
              CF(i,k)=cff*CF(i,k)
              DC(i,k)=cff*(tnew(i,j,k+1)-tnew(i,j,k)-                   &
     &                     FC(i,k)*DC(i,k-1))
            END DO
          END DO
c
c  Backward substitution.
c
          DO i=1,Lm
            DC(i,N)=0.0
          END DO
          DO k=N-1,1,-1
            DO i=1,Lm
              DC(i,k)=DC(i,k)-CF(i,k)*DC(i,k+1)
            END DO
          END DO
c
          DO k=1,N
            DO i=1,Lm
              DC(i,k)=DC(i,k)*Akt(i,j,k)
              cff1=dt*oHz(i,j,k)*(DC(i,k)-DC(i,k-1))
              tnew(i,j,k)=tnew(i,j,k)+cff1
            END DO
          END DO
        END DO

      RETURN
      END SUBROUTINE step3d_t

