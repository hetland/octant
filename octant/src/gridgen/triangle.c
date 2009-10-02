# 1 "triangle.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "triangle.c"
# 344 "triangle.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 329 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 313 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 314 "/usr/include/sys/cdefs.h" 2 3 4
# 330 "/usr/include/features.h" 2 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 353 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 135 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4









typedef struct _IO_FILE FILE;





# 62 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 72 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 326 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef int wchar_t;
# 355 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 51 "/usr/include/wchar.h" 2 3 4
# 76 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/gconv.h" 2 3 4





enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
       __const unsigned char **, __const unsigned char *,
       unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
      struct __gconv_step_data *, void *,
      __const unsigned char *,
      __const unsigned char **,
      __const unsigned char *, unsigned char **,
      size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
       __const unsigned char *,
       unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
     size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  __const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 167 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 177 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 200 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 268 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 316 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 325 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 361 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 413 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern wint_t __wunderflow (_IO_FILE *);
extern wint_t __wuflow (_IO_FILE *);
extern wint_t __woverflow (_IO_FILE *, wint_t);
# 451 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 481 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 73 "/usr/include/stdio.h" 2 3 4
# 86 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 138 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 139 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));














extern FILE *tmpfile (void);
# 185 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__));





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__));
# 203 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 228 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 242 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes);




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream);
# 269 "/usr/include/stdio.h" 3 4

# 280 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__));
# 300 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 394 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));

# 436 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 460 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 471 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 504 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 585 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 638 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 674 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 693 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 716 "/usr/include/stdio.h" 3 4

# 725 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 755 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 774 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 814 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 844 "/usr/include/stdio.h" 3 4

# 345 "triangle.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;



# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 182 "/usr/include/stdlib.h" 3 4


extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 279 "/usr/include/stdlib.h" 3 4
extern double __strtod_internal (__const char *__restrict __nptr,
     char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern float __strtof_internal (__const char *__restrict __nptr,
    char **__restrict __endptr, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern long double __strtold_internal (__const char *__restrict __nptr,
           char **__restrict __endptr,
           int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long int __strtol_internal (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern unsigned long int __strtoul_internal (__const char *__restrict __nptr,
          char **__restrict __endptr,
          int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
      char **__restrict __endptr,
      int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



__extension__
extern unsigned long long int __strtoull_internal (__const char *
         __restrict __nptr,
         char **__restrict __endptr,
         int __base, int __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 429 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 93 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 23 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 121 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern __inline unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern __inline unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern __inline unsigned long long int gnu_dev_makedev (unsigned int __major,
       unsigned int __minor)
     __attribute__ ((__nothrow__));


__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __pad1;
    unsigned long int __pad2;
    unsigned long int __pad3;


    unsigned int __flags;
  } __data;
# 184 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 439 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;







extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 613 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

# 658 "/usr/include/stdlib.h" 3 4


extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 698 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 709 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 729 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;








extern int system (__const char *__command) ;

# 756 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);









extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));



extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;












extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 821 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 926 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) ;
# 961 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 977 "/usr/include/stdlib.h" 3 4

# 346 "triangle.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4




extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 82 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 130 "/usr/include/string.h" 3 4
extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 165 "/usr/include/string.h" 3 4


extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 181 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 240 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

# 254 "/usr/include/string.h" 3 4


extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 270 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 288 "/usr/include/string.h" 3 4
extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));



extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 325 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 348 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 426 "/usr/include/string.h" 3 4

# 347 "triangle.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4




# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 47 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__)); extern double __acos (double __x) __attribute__ ((__nothrow__));

extern double asin (double __x) __attribute__ ((__nothrow__)); extern double __asin (double __x) __attribute__ ((__nothrow__));

extern double atan (double __x) __attribute__ ((__nothrow__)); extern double __atan (double __x) __attribute__ ((__nothrow__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__));


extern double cos (double __x) __attribute__ ((__nothrow__)); extern double __cos (double __x) __attribute__ ((__nothrow__));

extern double sin (double __x) __attribute__ ((__nothrow__)); extern double __sin (double __x) __attribute__ ((__nothrow__));

extern double tan (double __x) __attribute__ ((__nothrow__)); extern double __tan (double __x) __attribute__ ((__nothrow__));




extern double cosh (double __x) __attribute__ ((__nothrow__)); extern double __cosh (double __x) __attribute__ ((__nothrow__));

extern double sinh (double __x) __attribute__ ((__nothrow__)); extern double __sinh (double __x) __attribute__ ((__nothrow__));

extern double tanh (double __x) __attribute__ ((__nothrow__)); extern double __tanh (double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__)); extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__)); extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__)); extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__)); extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__)); extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__)); extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__)); extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__)); extern double __logb (double __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern double pow (double __x, double __y) __attribute__ ((__nothrow__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__));


extern double sqrt (double __x) __attribute__ ((__nothrow__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__));






extern double cbrt (double __x) __attribute__ ((__nothrow__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__));








extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__));




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__));



extern double significand (double __x) __attribute__ ((__nothrow__)); extern double __significand (double __x) __attribute__ ((__nothrow__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__)); extern double __j0 (double) __attribute__ ((__nothrow__));
extern double j1 (double) __attribute__ ((__nothrow__)); extern double __j1 (double) __attribute__ ((__nothrow__));
extern double jn (int, double) __attribute__ ((__nothrow__)); extern double __jn (int, double) __attribute__ ((__nothrow__));
extern double y0 (double) __attribute__ ((__nothrow__)); extern double __y0 (double) __attribute__ ((__nothrow__));
extern double y1 (double) __attribute__ ((__nothrow__)); extern double __y1 (double) __attribute__ ((__nothrow__));
extern double yn (int, double) __attribute__ ((__nothrow__)); extern double __yn (int, double) __attribute__ ((__nothrow__));






extern double erf (double) __attribute__ ((__nothrow__)); extern double __erf (double) __attribute__ ((__nothrow__));
extern double erfc (double) __attribute__ ((__nothrow__)); extern double __erfc (double) __attribute__ ((__nothrow__));
extern double lgamma (double) __attribute__ ((__nothrow__)); extern double __lgamma (double) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern double gamma (double) __attribute__ ((__nothrow__)); extern double __gamma (double) __attribute__ ((__nothrow__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));







extern double rint (double __x) __attribute__ ((__nothrow__)); extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern double remainder (double __x, double __y) __attribute__ ((__nothrow__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern double scalb (double __x, double __n) __attribute__ ((__nothrow__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__));
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__)); extern float __acosf (float __x) __attribute__ ((__nothrow__));

extern float asinf (float __x) __attribute__ ((__nothrow__)); extern float __asinf (float __x) __attribute__ ((__nothrow__));

extern float atanf (float __x) __attribute__ ((__nothrow__)); extern float __atanf (float __x) __attribute__ ((__nothrow__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__));


extern float cosf (float __x) __attribute__ ((__nothrow__)); extern float __cosf (float __x) __attribute__ ((__nothrow__));

extern float sinf (float __x) __attribute__ ((__nothrow__)); extern float __sinf (float __x) __attribute__ ((__nothrow__));

extern float tanf (float __x) __attribute__ ((__nothrow__)); extern float __tanf (float __x) __attribute__ ((__nothrow__));




extern float coshf (float __x) __attribute__ ((__nothrow__)); extern float __coshf (float __x) __attribute__ ((__nothrow__));

extern float sinhf (float __x) __attribute__ ((__nothrow__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__));

extern float tanhf (float __x) __attribute__ ((__nothrow__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__)); extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__)); extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__)); extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__)); extern float __logbf (float __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern float powf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__));








extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__));




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__));



extern float significandf (float __x) __attribute__ ((__nothrow__)); extern float __significandf (float __x) __attribute__ ((__nothrow__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__)); extern float __j0f (float) __attribute__ ((__nothrow__));
extern float j1f (float) __attribute__ ((__nothrow__)); extern float __j1f (float) __attribute__ ((__nothrow__));
extern float jnf (int, float) __attribute__ ((__nothrow__)); extern float __jnf (int, float) __attribute__ ((__nothrow__));
extern float y0f (float) __attribute__ ((__nothrow__)); extern float __y0f (float) __attribute__ ((__nothrow__));
extern float y1f (float) __attribute__ ((__nothrow__)); extern float __y1f (float) __attribute__ ((__nothrow__));
extern float ynf (int, float) __attribute__ ((__nothrow__)); extern float __ynf (int, float) __attribute__ ((__nothrow__));






extern float erff (float) __attribute__ ((__nothrow__)); extern float __erff (float) __attribute__ ((__nothrow__));
extern float erfcf (float) __attribute__ ((__nothrow__)); extern float __erfcf (float) __attribute__ ((__nothrow__));
extern float lgammaf (float) __attribute__ ((__nothrow__)); extern float __lgammaf (float) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern float gammaf (float) __attribute__ ((__nothrow__)); extern float __gammaf (float) __attribute__ ((__nothrow__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));







extern float rintf (float __x) __attribute__ ((__nothrow__)); extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__));
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__));

# 152 "/usr/include/bits/mathcalls.h" 3 4


extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

# 231 "/usr/include/bits/mathcalls.h" 3 4
extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__)); extern long double __j0l (long double) __attribute__ ((__nothrow__));
extern long double j1l (long double) __attribute__ ((__nothrow__)); extern long double __j1l (long double) __attribute__ ((__nothrow__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__));
extern long double y0l (long double) __attribute__ ((__nothrow__)); extern long double __y0l (long double) __attribute__ ((__nothrow__));
extern long double y1l (long double) __attribute__ ((__nothrow__)); extern long double __y1l (long double) __attribute__ ((__nothrow__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__));






extern long double erfl (long double) __attribute__ ((__nothrow__)); extern long double __erfl (long double) __attribute__ ((__nothrow__));
extern long double erfcl (long double) __attribute__ ((__nothrow__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__));
extern long double lgammal (long double) __attribute__ ((__nothrow__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__));

# 265 "/usr/include/bits/mathcalls.h" 3 4
extern long double gammal (long double) __attribute__ ((__nothrow__)); extern long double __gammal (long double) __attribute__ ((__nothrow__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));
# 359 "/usr/include/bits/mathcalls.h" 3 4





extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 284 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 309 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 465 "/usr/include/math.h" 3 4

# 348 "triangle.c" 2
# 1 "config.h" 1
# 349 "triangle.c" 2

# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/sys/time.h" 2 3 4
# 39 "/usr/include/sys/time.h" 3 4

# 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));
# 191 "/usr/include/sys/time.h" 3 4

# 351 "triangle.c" 2
# 359 "triangle.c"
# 1 "triangle.h" 1
# 252 "triangle.h"
struct triangulateio {
  double *pointlist;
  double *pointattributelist;
  int *pointmarkerlist;
  int numberofpoints;
  int numberofpointattributes;

  int *trianglelist;
  double *triangleattributelist;
  double *trianglearealist;
  int *neighborlist;
  int numberoftriangles;
  int numberofcorners;
  int numberoftriangleattributes;

  int *segmentlist;
  int *segmentmarkerlist;
  int numberofsegments;

  double *holelist;
  int numberofholes;

  double *regionlist;
  int numberofregions;

  int *edgelist;
  int *edgemarkerlist;
  double *normlist;
  int numberofedges;
};





void triangulate();
# 360 "triangle.c" 2
# 372 "triangle.c"
enum wordtype {POINTER, FLOATINGPOINT};





enum locateresult {INTRIANGLE, ONEDGE, ONVERTEX, OUTSIDE};







enum insertvertexresult {SUCCESSFULVERTEX, ENCROACHINGVERTEX, VIOLATINGVERTEX,
                         DUPLICATEVERTEX};






enum finddirectionresult {WITHIN, LEFTCOLLINEAR, RIGHTCOLLINEAR};
# 512 "triangle.c"
typedef double **triangle;






struct otri {
  triangle *tri;
  int orient;
};





typedef double **subseg;






struct osub {
  subseg *ss;
  int ssorient;
};






typedef double *vertex;




struct badsubseg {
  subseg encsubseg;
  vertex subsegorg, subsegdest;
};





struct badtriang {
  triangle poortri;
  double key;
  vertex triangorg, triangdest, triangapex;
  struct badtriang *nexttriang;
};





struct flipstacker {
  triangle flippedtri;
  struct flipstacker *prevflip;
};
# 585 "triangle.c"
struct event {
  double xkey, ykey;
  int *eventptr;
  int heapposition;
};
# 602 "triangle.c"
struct splaynode {
  struct otri keyedge;
  vertex keydest;
  struct splaynode *lchild, *rchild;
};
# 632 "triangle.c"
struct memorypool {
  int **firstblock, **nowblock;
  int *nextitem;
  int *deaditemstack;
  int **pathblock;
  int *pathitem;
  enum wordtype itemwordtype;
  int alignbytes;
  int itembytes, itemwords;
  int itemsperblock;
  long items, maxitems;
  int unallocateditems;
  int pathitemsleft;
};




double splitter;
double epsilon;
double resulterrbound;
double ccwerrboundA, ccwerrboundB, ccwerrboundC;
double iccerrboundA, iccerrboundB, iccerrboundC;
double o3derrboundA, o3derrboundB, o3derrboundC;



unsigned long randomseed;





struct mesh {





  struct memorypool triangles;
  struct memorypool subsegs;
  struct memorypool vertices;
  struct memorypool viri;
  struct memorypool badsubsegs;
  struct memorypool badtriangles;
  struct memorypool flipstackers;
  struct memorypool splaynodes;




  struct badtriang *queuefront[64];
  struct badtriang *queuetail[64];
  int nextnonemptyq[64];
  int firstnonemptyq;



  struct flipstacker *lastflip;



  double xmin, xmax, ymin, ymax;
  double xminextreme;
  int invertices;
  int inelements;
  int insegments;
  int holes;
  int regions;
  int undeads;
  long edges;
  int mesh_dim;
  int nextras;
  int eextras;
  long hullsize;
  int steinerleft;
  int vertexmarkindex;
  int vertex2triindex;
  int highorderindex;
  int elemattribindex;
  int areaboundindex;
  int checksegments;
  int checkquality;
  int readnodefile;
  long samples;

  long incirclecount;
  long counterclockcount;
  long orient3dcount;
  long hyperbolacount;
  long circumcentercount;
  long circletopcount;



  vertex infvertex1, infvertex2, infvertex3;



  triangle *dummytri;
  triangle *dummytribase;





  subseg *dummysub;
  subseg *dummysubbase;




  struct otri recenttri;

};





struct behavior {
# 786 "triangle.c"
  int poly, refine, quality, vararea, fixedarea, usertest;
  int regionattrib, convex, weighted, jettison;
  int firstnumber;
  int edgesout, voronoi, neighbors, geomview;
  int nobound, nopolywritten, nonodewritten, noelewritten, noiterationnum;
  int noholes, noexact, nolenses;
  int incremental, sweepline, dwyer;
  int splitseg;
  int docheck;
  int quiet, verbose;
  int usesegments;
  int order;
  int nobisect;
  int steiner;
  double minangle, goodangle;
  double maxarea;
# 820 "triangle.c"
};
# 935 "triangle.c"
int plus1mod3[3] = {1, 2, 0};
int minus1mod3[3] = {2, 0, 1};
# 1364 "triangle.c"
int triunsuitable(triorg, tridest, triapex, area)
vertex triorg;
vertex tridest;
vertex triapex;
double area;


{
  double dxoa, dxda, dxod;
  double dyoa, dyda, dyod;
  double oalen, dalen, odlen;
  double maxlen;

  dxoa = triorg[0] - triapex[0];
  dyoa = triorg[1] - triapex[1];
  dxda = tridest[0] - triapex[0];
  dyda = tridest[1] - triapex[1];
  dxod = triorg[0] - tridest[0];
  dyod = triorg[1] - tridest[1];

  oalen = dxoa * dxoa + dyoa * dyoa;
  dalen = dxda * dxda + dyda * dyda;
  odlen = dxod * dxod + dyod * dyod;

  maxlen = (dalen > oalen) ? dalen : oalen;
  maxlen = (odlen > maxlen) ? odlen : maxlen;

  if (maxlen > 0.05 * (triorg[0] * triorg[0] + triorg[1] * triorg[1]) + 0.02) {
    return 1;
  } else {
    return 0;
  }
}
# 1411 "triangle.c"
int *trimalloc(size)
int size;


{
  int *memptr;

  memptr = malloc(size);
  if (memptr == (int *) ((void *)0)) {
    fprintf(stderr, "Error:  Out of memory.\n");
    exit(1);
  }
  return(memptr);
}




void trifree(memptr)
int *memptr;


{
  free(memptr);
}
# 3135 "triangle.c"
void internalerror()
{
  fflush(stdout);
  fprintf(stderr, "  Please report this bug to jrs@cs.berkeley.edu\n");
  fprintf(stderr, "  Include the message above, your input data set, and the exact\n");
  fprintf(stderr, "    command line you used to run Triangle.\n");
  exit(1);
}
# 3154 "triangle.c"
void parsecommandline(argc, argv, b)
int argc;
char **argv;
struct behavior *b;


{







  int i, j, k;
  char workstring[512];

  b->poly = b->refine = b->quality = 0;
  b->vararea = b->fixedarea = b->usertest = 0;
  b->regionattrib = b->convex = b->weighted = b->jettison = 0;
  b->firstnumber = 1;
  b->edgesout = b->voronoi = b->neighbors = b->geomview = 0;
  b->nobound = b->nopolywritten = b->nonodewritten = b->noelewritten = 0;
  b->noiterationnum = 0;
  b->noholes = b->noexact = 0;
  b->incremental = b->sweepline = 0;
  b->dwyer = 1;
  b->splitseg = 0;
  b->docheck = 0;
  b->nobisect = 0;
  b->nolenses = 0;
  b->steiner = -1;
  b->order = 1;
  b->minangle = 0.0;
  b->maxarea = -1.0;
  b->quiet = b->verbose = 0;




  for (i = 0; i < argc; i++) {



      for (j = 0; argv[i][j] != '\0'; j++) {
        if (argv[i][j] == 'p') {
          b->poly = 1;
 }

        if (argv[i][j] == 'r') {
          b->refine = 1;
 }
        if (argv[i][j] == 'q') {
          b->quality = 1;
          if (((argv[i][j + 1] >= '0') && (argv[i][j + 1] <= '9')) ||
              (argv[i][j + 1] == '.')) {
            k = 0;
            while (((argv[i][j + 1] >= '0') && (argv[i][j + 1] <= '9')) ||
                   (argv[i][j + 1] == '.')) {
              j++;
              workstring[k] = argv[i][j];
              k++;
            }
            workstring[k] = '\0';
            b->minangle = (double) strtod(workstring, (char **) ((void *)0));
   } else {
            b->minangle = 20.0;
   }
 }
        if (argv[i][j] == 'a') {
          b->quality = 1;
          if (((argv[i][j + 1] >= '0') && (argv[i][j + 1] <= '9')) ||
              (argv[i][j + 1] == '.')) {
            b->fixedarea = 1;
            k = 0;
            while (((argv[i][j + 1] >= '0') && (argv[i][j + 1] <= '9')) ||
                   (argv[i][j + 1] == '.')) {
              j++;
              workstring[k] = argv[i][j];
              k++;
            }
            workstring[k] = '\0';
            b->maxarea = (double) strtod(workstring, (char **) ((void *)0));
            if (b->maxarea <= 0.0) {
              fprintf(stderr, "Error:  Maximum area must be greater than zero.\n");
              exit(1);
     }
   } else {
            b->vararea = 1;
   }
 }
        if (argv[i][j] == 'u') {
          b->quality = 1;
          b->usertest = 1;
        }

        if (argv[i][j] == 'A') {
          b->regionattrib = 1;
        }
        if (argv[i][j] == 'c') {
          b->convex = 1;
        }
        if (argv[i][j] == 'w') {
          b->weighted = 1;
        }
        if (argv[i][j] == 'W') {
          b->weighted = 2;
        }
        if (argv[i][j] == 'j') {
          b->jettison = 1;
        }
        if (argv[i][j] == 'z') {
          b->firstnumber = 0;
        }
        if (argv[i][j] == 'e') {
          b->edgesout = 1;
 }
        if (argv[i][j] == 'v') {
          b->voronoi = 1;
 }
        if (argv[i][j] == 'n') {
          b->neighbors = 1;
 }
        if (argv[i][j] == 'g') {
          b->geomview = 1;
 }
        if (argv[i][j] == 'B') {
          b->nobound = 1;
 }
        if (argv[i][j] == 'P') {
          b->nopolywritten = 1;
 }
        if (argv[i][j] == 'N') {
          b->nonodewritten = 1;
 }
        if (argv[i][j] == 'E') {
          b->noelewritten = 1;
 }





        if (argv[i][j] == 'O') {
          b->noholes = 1;
 }
        if (argv[i][j] == 'X') {
          b->noexact = 1;
 }
        if (argv[i][j] == 'o') {
          if (argv[i][j + 1] == '2') {
            j++;
            b->order = 2;
          }
 }

        if (argv[i][j] == 'Y') {
          b->nobisect++;
 }
        if (argv[i][j] == 'S') {
          b->steiner = 0;
          while ((argv[i][j + 1] >= '0') && (argv[i][j + 1] <= '9')) {
            j++;
            b->steiner = b->steiner * 10 + (int) (argv[i][j] - '0');
          }
        }


        if (argv[i][j] == 'i') {
          b->incremental = 1;
        }
        if (argv[i][j] == 'F') {
          b->sweepline = 1;
        }

        if (argv[i][j] == 'l') {
          b->dwyer = 0;
        }


        if (argv[i][j] == 's') {
          b->splitseg = 1;
        }
        if (argv[i][j] == 'L') {
          b->nolenses = 1;
        }

        if (argv[i][j] == 'C') {
          b->docheck = 1;
        }

        if (argv[i][j] == 'Q') {
          b->quiet = 1;
        }
        if (argv[i][j] == 'V') {
          b->verbose++;
        }






      }






  }
# 3389 "triangle.c"
  b->usesegments = b->poly || b->refine || b->quality || b->convex;
  b->goodangle = cos(b->minangle * 3.141592653589793238462643383279502884197169399375105820974944592308 / 180.0);
  b->goodangle *= b->goodangle;
  if (b->refine && b->noiterationnum) {
    fprintf(stderr,
      "Error:  You cannot use the -I switch when refining a triangulation.\n");
    exit(1);
  }


  if (!b->refine && !b->poly) {
    b->vararea = 0;
  }


  if (b->refine || !b->poly) {
    b->regionattrib = 0;
  }


  if (b->weighted && (b->poly || b->quality)) {
    b->weighted = 0;
    if (!b->quiet) {
      fprintf(stderr, "Warning:  weighted triangulations (-w, -W) are incompatible\n");
      fprintf(stderr, "  with PSLGs (-p) and meshing (-q, -a, -u).  Weights ignored.\n"
             );
    }
  }
  if (b->jettison && b->nonodewritten && !b->quiet) {
    fprintf(stderr, "Warning:  -j and -N switches are somewhat incompatible.\n");
    fprintf(stderr, "  If any vertices are jettisoned, you will need the output\n");
    fprintf(stderr, "  .node file to reconstruct the new node indices.");
  }
# 3506 "triangle.c"
}
# 3530 "triangle.c"
void printtriangle(m, b, t)
struct mesh *m;
struct behavior *b;
struct otri *t;


{
  struct otri printtri;
  struct osub printsh;
  vertex printvertex;

  fprintf(stderr, "triangle x%lx with orientation %d:\n", (unsigned long) t->tri,
         t->orient);
  (printtri).orient = (int) ((unsigned long) (t->tri[0]) & (unsigned long) 3l); (printtri).tri = (triangle *) ((unsigned long) (t->tri[0]) ^ (unsigned long) (printtri).orient);
  if (printtri.tri == m->dummytri) {
    fprintf(stderr, "    [0] = Outer space\n");
  } else {
    fprintf(stderr, "    [0] = x%lx  %d\n", (unsigned long) printtri.tri,
           printtri.orient);
  }
  (printtri).orient = (int) ((unsigned long) (t->tri[1]) & (unsigned long) 3l); (printtri).tri = (triangle *) ((unsigned long) (t->tri[1]) ^ (unsigned long) (printtri).orient);
  if (printtri.tri == m->dummytri) {
    fprintf(stderr, "    [1] = Outer space\n");
  } else {
    fprintf(stderr, "    [1] = x%lx  %d\n", (unsigned long) printtri.tri,
           printtri.orient);
  }
  (printtri).orient = (int) ((unsigned long) (t->tri[2]) & (unsigned long) 3l); (printtri).tri = (triangle *) ((unsigned long) (t->tri[2]) ^ (unsigned long) (printtri).orient);
  if (printtri.tri == m->dummytri) {
    fprintf(stderr, "    [2] = Outer space\n");
  } else {
    fprintf(stderr, "    [2] = x%lx  %d\n", (unsigned long) printtri.tri,
           printtri.orient);
  }

  printvertex = (vertex) (*t).tri[plus1mod3[(*t).orient] + 3];
  if (printvertex == (vertex) ((void *)0))
    fprintf(stderr, "    Origin[%d] = NULL\n", (t->orient + 1) % 3 + 3);
  else
    fprintf(stderr, "    Origin[%d] = x%lx  (%.12g, %.12g)\n",
           (t->orient + 1) % 3 + 3, (unsigned long) printvertex,
           printvertex[0], printvertex[1]);
  printvertex = (vertex) (*t).tri[minus1mod3[(*t).orient] + 3];
  if (printvertex == (vertex) ((void *)0))
    fprintf(stderr, "    Dest  [%d] = NULL\n", (t->orient + 2) % 3 + 3);
  else
    fprintf(stderr, "    Dest  [%d] = x%lx  (%.12g, %.12g)\n",
           (t->orient + 2) % 3 + 3, (unsigned long) printvertex,
           printvertex[0], printvertex[1]);
  printvertex = (vertex) (*t).tri[(*t).orient + 3];
  if (printvertex == (vertex) ((void *)0))
    fprintf(stderr, "    Apex  [%d] = NULL\n", t->orient + 3);
  else
    fprintf(stderr, "    Apex  [%d] = x%lx  (%.12g, %.12g)\n",
           t->orient + 3, (unsigned long) printvertex,
           printvertex[0], printvertex[1]);

  if (b->usesegments) {
    (printsh).ssorient = (int) ((unsigned long) (t->tri[6]) & (unsigned long) 1l); (printsh).ss = (subseg *) ((unsigned long) (t->tri[6]) & ~ (unsigned long) 3l);
    if (printsh.ss != m->dummysub) {
      fprintf(stderr, "    [6] = x%lx  %d\n", (unsigned long) printsh.ss,
             printsh.ssorient);
    }
    (printsh).ssorient = (int) ((unsigned long) (t->tri[7]) & (unsigned long) 1l); (printsh).ss = (subseg *) ((unsigned long) (t->tri[7]) & ~ (unsigned long) 3l);
    if (printsh.ss != m->dummysub) {
      fprintf(stderr, "    [7] = x%lx  %d\n", (unsigned long) printsh.ss,
             printsh.ssorient);
    }
    (printsh).ssorient = (int) ((unsigned long) (t->tri[8]) & (unsigned long) 1l); (printsh).ss = (subseg *) ((unsigned long) (t->tri[8]) & ~ (unsigned long) 3l);
    if (printsh.ss != m->dummysub) {
      fprintf(stderr, "    [8] = x%lx  %d\n", (unsigned long) printsh.ss,
             printsh.ssorient);
    }
  }

  if (b->vararea) {
    fprintf(stderr, "    Area constraint:  %.4g\n", ((double *) (*t).tri)[m->areaboundindex]);
  }
}
# 3624 "triangle.c"
void printsubseg(m, b, s)
struct mesh *m;
struct behavior *b;
struct osub *s;


{
  struct osub printsh;
  struct otri printtri;
  vertex printvertex;

  fprintf(stderr, "subsegment x%lx with orientation %d and mark %d:\n",
         (unsigned long) s->ss, s->ssorient, (* (int *) ((*s).ss + 6)));
  (printsh).ssorient = (int) ((unsigned long) (s->ss[0]) & (unsigned long) 1l); (printsh).ss = (subseg *) ((unsigned long) (s->ss[0]) & ~ (unsigned long) 3l);
  if (printsh.ss == m->dummysub) {
    fprintf(stderr, "    [0] = No subsegment\n");
  } else {
    fprintf(stderr, "    [0] = x%lx  %d\n", (unsigned long) printsh.ss,
           printsh.ssorient);
  }
  (printsh).ssorient = (int) ((unsigned long) (s->ss[1]) & (unsigned long) 1l); (printsh).ss = (subseg *) ((unsigned long) (s->ss[1]) & ~ (unsigned long) 3l);
  if (printsh.ss == m->dummysub) {
    fprintf(stderr, "    [1] = No subsegment\n");
  } else {
    fprintf(stderr, "    [1] = x%lx  %d\n", (unsigned long) printsh.ss,
           printsh.ssorient);
  }

  printvertex = (vertex) (*s).ss[2 + (*s).ssorient];
  if (printvertex == (vertex) ((void *)0))
    fprintf(stderr, "    Origin[%d] = NULL\n", 2 + s->ssorient);
  else
    fprintf(stderr, "    Origin[%d] = x%lx  (%.12g, %.12g)\n",
           2 + s->ssorient, (unsigned long) printvertex,
           printvertex[0], printvertex[1]);
  printvertex = (vertex) (*s).ss[3 - (*s).ssorient];
  if (printvertex == (vertex) ((void *)0))
    fprintf(stderr, "    Dest  [%d] = NULL\n", 3 - s->ssorient);
  else
    fprintf(stderr, "    Dest  [%d] = x%lx  (%.12g, %.12g)\n",
           3 - s->ssorient, (unsigned long) printvertex,
           printvertex[0], printvertex[1]);

  (printtri).orient = (int) ((unsigned long) (s->ss[4]) & (unsigned long) 3l); (printtri).tri = (triangle *) ((unsigned long) (s->ss[4]) ^ (unsigned long) (printtri).orient);
  if (printtri.tri == m->dummytri) {
    fprintf(stderr, "    [4] = Outer space\n");
  } else {
    fprintf(stderr, "    [4] = x%lx  %d\n", (unsigned long) printtri.tri,
           printtri.orient);
  }
  (printtri).orient = (int) ((unsigned long) (s->ss[5]) & (unsigned long) 3l); (printtri).tri = (triangle *) ((unsigned long) (s->ss[5]) ^ (unsigned long) (printtri).orient);
  if (printtri.tri == m->dummytri) {
    fprintf(stderr, "    [5] = Outer space\n");
  } else {
    fprintf(stderr, "    [5] = x%lx  %d\n", (unsigned long) printtri.tri,
           printtri.orient);
  }
}
# 3704 "triangle.c"
void poolrestart(pool)
struct memorypool *pool;


{
  unsigned long alignptr;

  pool->items = 0;
  pool->maxitems = 0;


  pool->nowblock = pool->firstblock;

  alignptr = (unsigned long) (pool->nowblock + 1);

  pool->nextitem = (int *)
    (alignptr + (unsigned long) pool->alignbytes -
     (alignptr % (unsigned long) pool->alignbytes));

  pool->unallocateditems = pool->itemsperblock;

  pool->deaditemstack = (int *) ((void *)0);
}
# 3751 "triangle.c"
void poolinit(pool, bytecount, itemcount, wtype, alignment)
struct memorypool *pool;
int bytecount;
int itemcount;
enum wordtype wtype;
int alignment;


{
  int wordsize;


  pool->itemwordtype = wtype;
  wordsize = (pool->itemwordtype == POINTER) ? sizeof(int *) : sizeof(double);





  if (alignment > wordsize) {
    pool->alignbytes = alignment;
  } else {
    pool->alignbytes = wordsize;
  }
  if (sizeof(int *) > pool->alignbytes) {
    pool->alignbytes = sizeof(int *);
  }
  pool->itemwords = ((bytecount + pool->alignbytes - 1) / pool->alignbytes)
                  * (pool->alignbytes / wordsize);
  pool->itembytes = pool->itemwords * wordsize;
  pool->itemsperblock = itemcount;




  pool->firstblock = (int **) trimalloc(pool->itemsperblock * pool->itembytes
                                         + sizeof(int *) + pool->alignbytes);

  *(pool->firstblock) = (int *) ((void *)0);
  poolrestart(pool);
}
# 3802 "triangle.c"
void pooldeinit(pool)
struct memorypool *pool;


{
  while (pool->firstblock != (int **) ((void *)0)) {
    pool->nowblock = (int **) *(pool->firstblock);
    trifree((int *) pool->firstblock);
    pool->firstblock = pool->nowblock;
  }
}
# 3823 "triangle.c"
int *poolalloc(pool)
struct memorypool *pool;


{
  int *newitem;
  int **newblock;
  unsigned long alignptr;



  if (pool->deaditemstack != (int *) ((void *)0)) {
    newitem = pool->deaditemstack;
    pool->deaditemstack = * (int **) pool->deaditemstack;
  } else {

    if (pool->unallocateditems == 0) {

      if (*(pool->nowblock) == (int *) ((void *)0)) {

        newblock = (int **) trimalloc(pool->itemsperblock * pool->itembytes +
                                       sizeof(int *) + pool->alignbytes);
        *(pool->nowblock) = (int *) newblock;

        *newblock = (int *) ((void *)0);
      }

      pool->nowblock = (int **) *(pool->nowblock);


      alignptr = (unsigned long) (pool->nowblock + 1);

      pool->nextitem = (int *)
        (alignptr + (unsigned long) pool->alignbytes -
         (alignptr % (unsigned long) pool->alignbytes));

      pool->unallocateditems = pool->itemsperblock;
    }

    newitem = pool->nextitem;

    if (pool->itemwordtype == POINTER) {
      pool->nextitem = (int *) ((int **) pool->nextitem + pool->itemwords);
    } else {
      pool->nextitem = (int *) ((double *) pool->nextitem + pool->itemwords);
    }
    pool->unallocateditems--;
    pool->maxitems++;
  }
  pool->items++;
  return newitem;
}
# 3887 "triangle.c"
void pooldealloc(pool, dyingitem)
struct memorypool *pool;
int *dyingitem;


{

  *((int **) dyingitem) = pool->deaditemstack;
  pool->deaditemstack = dyingitem;
  pool->items--;
}
# 3910 "triangle.c"
void traversalinit(pool)
struct memorypool *pool;


{
  unsigned long alignptr;


  pool->pathblock = pool->firstblock;

  alignptr = (unsigned long) (pool->pathblock + 1);

  pool->pathitem = (int *)
    (alignptr + (unsigned long) pool->alignbytes -
     (alignptr % (unsigned long) pool->alignbytes));

  pool->pathitemsleft = pool->itemsperblock;
}
# 3946 "triangle.c"
int *traverse(pool)
struct memorypool *pool;


{
  int *newitem;
  unsigned long alignptr;


  if (pool->pathitem == pool->nextitem) {
    return (int *) ((void *)0);
  }

  if (pool->pathitemsleft == 0) {

    pool->pathblock = (int **) *(pool->pathblock);

    alignptr = (unsigned long) (pool->pathblock + 1);

    pool->pathitem = (int *)
      (alignptr + (unsigned long) pool->alignbytes -
       (alignptr % (unsigned long) pool->alignbytes));

    pool->pathitemsleft = pool->itemsperblock;
  }
  newitem = pool->pathitem;

  if (pool->itemwordtype == POINTER) {
    pool->pathitem = (int *) ((int **) pool->pathitem + pool->itemwords);
  } else {
    pool->pathitem = (int *) ((double *) pool->pathitem + pool->itemwords);
  }
  pool->pathitemsleft--;
  return newitem;
}
# 4014 "triangle.c"
void dummyinit(m, b, trianglewords, subsegwords)
struct mesh *m;
struct behavior *b;
int trianglewords;
int subsegwords;


{
  unsigned long alignptr;


  m->dummytribase = (triangle *) trimalloc(trianglewords * sizeof(triangle) +
                                           m->triangles.alignbytes);

  alignptr = (unsigned long) m->dummytribase;
  m->dummytri = (triangle *)
    (alignptr + (unsigned long) m->triangles.alignbytes -
     (alignptr % (unsigned long) m->triangles.alignbytes));




  m->dummytri[0] = (triangle) m->dummytri;
  m->dummytri[1] = (triangle) m->dummytri;
  m->dummytri[2] = (triangle) m->dummytri;

  m->dummytri[3] = (triangle) ((void *)0);
  m->dummytri[4] = (triangle) ((void *)0);
  m->dummytri[5] = (triangle) ((void *)0);

  if (b->usesegments) {



    m->dummysubbase = (subseg *) trimalloc(subsegwords * sizeof(subseg) +
                                           m->subsegs.alignbytes);

    alignptr = (unsigned long) m->dummysubbase;
    m->dummysub = (subseg *)
      (alignptr + (unsigned long) m->subsegs.alignbytes -
       (alignptr % (unsigned long) m->subsegs.alignbytes));




    m->dummysub[0] = (subseg) m->dummysub;
    m->dummysub[1] = (subseg) m->dummysub;

    m->dummysub[2] = (subseg) ((void *)0);
    m->dummysub[3] = (subseg) ((void *)0);

    m->dummysub[4] = (subseg) m->dummytri;
    m->dummysub[5] = (subseg) m->dummytri;

    * (int *) (m->dummysub + 6) = 0;



    m->dummytri[6] = (triangle) m->dummysub;
    m->dummytri[7] = (triangle) m->dummysub;
    m->dummytri[8] = (triangle) m->dummysub;
  }
}
# 4091 "triangle.c"
void initializevertexpool(m, b)
struct mesh *m;
struct behavior *b;


{
  int vertexsize;




  m->vertexmarkindex = ((m->mesh_dim + m->nextras) * sizeof(double) +
                        sizeof(int) - 1) /
                       sizeof(int);
  vertexsize = (m->vertexmarkindex + 2) * sizeof(int);
  if (b->poly) {


    m->vertex2triindex = (vertexsize + sizeof(triangle) - 1) /
                         sizeof(triangle);
    vertexsize = (m->vertex2triindex + 1) * sizeof(triangle);
  }

  poolinit(&m->vertices, vertexsize, 4092,
           (sizeof(double) >= sizeof(triangle)) ? FLOATINGPOINT : POINTER, 0);
}
# 4132 "triangle.c"
void initializetrisubpools(m, b)
struct mesh *m;
struct behavior *b;


{
  int trisize;





  m->highorderindex = 6 + (b->usesegments * 3);

  trisize = ((b->order + 1) * (b->order + 2) / 2 + (m->highorderindex - 3)) *
            sizeof(triangle);


  m->elemattribindex = (trisize + sizeof(double) - 1) / sizeof(double);



  m->areaboundindex = m->elemattribindex + m->eextras + b->regionattrib;


  if (b->vararea) {
    trisize = (m->areaboundindex + 1) * sizeof(double);
  } else if (m->eextras + b->regionattrib > 0) {
    trisize = m->areaboundindex * sizeof(double);
  }




  if ((b->voronoi || b->neighbors) &&
      (trisize < 6 * sizeof(triangle) + sizeof(int))) {
    trisize = 6 * sizeof(triangle) + sizeof(int);
  }

  poolinit(&m->triangles, trisize, 4092, POINTER, 4);

  if (b->usesegments) {


    poolinit(&m->subsegs, 6 * sizeof(triangle) + sizeof(int), 508,
             POINTER, 4);


    dummyinit(m, b, m->triangles.itemwords, m->subsegs.itemwords);
  } else {

    dummyinit(m, b, m->triangles.itemwords, 0);
  }
}
# 4196 "triangle.c"
void triangledealloc(m, dyingtriangle)
struct mesh *m;
triangle *dyingtriangle;


{


  (dyingtriangle)[1] = (triangle) ((void *)0); (dyingtriangle)[3] = (triangle) ((void *)0);
  pooldealloc(&m->triangles, (int *) dyingtriangle);
}
# 4217 "triangle.c"
triangle *triangletraverse(m)
struct mesh *m;


{
  triangle *newtriangle;

  do {
    newtriangle = (triangle *) traverse(&m->triangles);
    if (newtriangle == (triangle *) ((void *)0)) {
      return (triangle *) ((void *)0);
    }
  } while (((newtriangle)[1] == (triangle) ((void *)0)));
  return newtriangle;
}
# 4242 "triangle.c"
void subsegdealloc(m, dyingsubseg)
struct mesh *m;
subseg *dyingsubseg;


{


  (dyingsubseg)[1] = (subseg) ((void *)0); (dyingsubseg)[2] = (subseg) ((void *)0);
  pooldealloc(&m->subsegs, (int *) dyingsubseg);
}
# 4263 "triangle.c"
subseg *subsegtraverse(m)
struct mesh *m;


{
  subseg *newsubseg;

  do {
    newsubseg = (subseg *) traverse(&m->subsegs);
    if (newsubseg == (subseg *) ((void *)0)) {
      return (subseg *) ((void *)0);
    }
  } while (((newsubseg)[1] == (subseg) ((void *)0)));
  return newsubseg;
}
# 4288 "triangle.c"
void vertexdealloc(m, dyingvertex)
struct mesh *m;
vertex dyingvertex;


{


  ((int *) (dyingvertex))[m->vertexmarkindex + 1] = -32768;
  pooldealloc(&m->vertices, (int *) dyingvertex);
}
# 4309 "triangle.c"
vertex vertextraverse(m)
struct mesh *m;


{
  vertex newvertex;

  do {
    newvertex = (vertex) traverse(&m->vertices);
    if (newvertex == (vertex) ((void *)0)) {
      return (vertex) ((void *)0);
    }
  } while (((int *) (newvertex))[m->vertexmarkindex + 1] == -32768);
  return newvertex;
}
# 4337 "triangle.c"
void badsubsegdealloc(m, dyingseg)
struct mesh *m;
struct badsubseg *dyingseg;


{


  dyingseg->subsegorg = (vertex) ((void *)0);
  pooldealloc(&m->badsubsegs, (int *) dyingseg);
}
# 4362 "triangle.c"
struct badsubseg *badsubsegtraverse(m)
struct mesh *m;


{
  struct badsubseg *newseg;

  do {
    newseg = (struct badsubseg *) traverse(&m->badsubsegs);
    if (newseg == (struct badsubseg *) ((void *)0)) {
      return (struct badsubseg *) ((void *)0);
    }
  } while (newseg->subsegorg == (vertex) ((void *)0));
  return newseg;
}
# 4395 "triangle.c"
vertex getvertex(m, b, number)
struct mesh *m;
struct behavior *b;
int number;


{
  int **getblock;
  vertex foundvertex;
  unsigned long alignptr;
  int current;

  getblock = m->vertices.firstblock;
  current = b->firstnumber;

  while (current + m->vertices.itemsperblock <= number) {
    getblock = (int **) *getblock;
    current += m->vertices.itemsperblock;
  }

  alignptr = (unsigned long) (getblock + 1);
  foundvertex = (vertex) (alignptr + (unsigned long) m->vertices.alignbytes -
                          (alignptr % (unsigned long) m->vertices.alignbytes));
  while (current < number) {
    foundvertex += m->vertices.itemwords;
    current++;
  }
  return foundvertex;
}
# 4434 "triangle.c"
void triangledeinit(m, b)
struct mesh *m;
struct behavior *b;


{
  pooldeinit(&m->triangles);
  trifree((int *) m->dummytribase);
  if (b->usesegments) {
    pooldeinit(&m->subsegs);
    trifree((int *) m->dummysubbase);
  }
  pooldeinit(&m->vertices);

  if (b->quality) {
    pooldeinit(&m->badsubsegs);
    if ((b->minangle > 0.0) || b->vararea || b->fixedarea || b->usertest) {
      pooldeinit(&m->badtriangles);
      pooldeinit(&m->flipstackers);
    }
  }

}
# 4475 "triangle.c"
void maketriangle(m, b, newotri)
struct mesh *m;
struct behavior *b;
struct otri *newotri;


{
  int i;

  newotri->tri = (triangle *) poolalloc(&m->triangles);

  newotri->tri[0] = (triangle) m->dummytri;
  newotri->tri[1] = (triangle) m->dummytri;
  newotri->tri[2] = (triangle) m->dummytri;

  newotri->tri[3] = (triangle) ((void *)0);
  newotri->tri[4] = (triangle) ((void *)0);
  newotri->tri[5] = (triangle) ((void *)0);
  if (b->usesegments) {


    newotri->tri[6] = (triangle) m->dummysub;
    newotri->tri[7] = (triangle) m->dummysub;
    newotri->tri[8] = (triangle) m->dummysub;
  }
  for (i = 0; i < m->eextras; i++) {
    ((double *) (*newotri).tri)[m->elemattribindex + (i)] = 0.0;
  }
  if (b->vararea) {
    ((double *) (*newotri).tri)[m->areaboundindex] = -1.0;
  }

  newotri->orient = 0;
}
# 4519 "triangle.c"
void makesubseg(m, newsubseg)
struct mesh *m;
struct osub *newsubseg;


{
  newsubseg->ss = (subseg *) poolalloc(&m->subsegs);


  newsubseg->ss[0] = (subseg) m->dummysub;
  newsubseg->ss[1] = (subseg) m->dummysub;

  newsubseg->ss[2] = (subseg) ((void *)0);
  newsubseg->ss[3] = (subseg) ((void *)0);

  newsubseg->ss[4] = (subseg) m->dummytri;
  newsubseg->ss[5] = (subseg) m->dummytri;

  * (int *) ((*newsubseg).ss + 6) = 0;

  newsubseg->ssorient = 0;
}
# 4697 "triangle.c"
void exactinit()
{
  double half;
  double check, lastcheck;
  int every_other;
# 4724 "triangle.c"
  every_other = 1;
  half = 0.5;
  epsilon = 1.0;
  splitter = 1.0;
  check = 1.0;




  do {
    lastcheck = check;
    epsilon *= half;
    if (every_other) {
      splitter *= 2.0;
    }
    every_other = !every_other;
    check = 1.0 + epsilon;
  } while ((check != 1.0) && (check != lastcheck));
  splitter += 1.0;

  resulterrbound = (3.0 + 8.0 * epsilon) * epsilon;
  ccwerrboundA = (3.0 + 16.0 * epsilon) * epsilon;
  ccwerrboundB = (2.0 + 12.0 * epsilon) * epsilon;
  ccwerrboundC = (9.0 + 64.0 * epsilon) * epsilon * epsilon;
  iccerrboundA = (10.0 + 96.0 * epsilon) * epsilon;
  iccerrboundB = (4.0 + 48.0 * epsilon) * epsilon;
  iccerrboundC = (44.0 + 576.0 * epsilon) * epsilon * epsilon;
  o3derrboundA = (7.0 + 56.0 * epsilon) * epsilon;
  o3derrboundB = (3.0 + 28.0 * epsilon) * epsilon;
  o3derrboundC = (26.0 + 288.0 * epsilon) * epsilon * epsilon;
}
# 4773 "triangle.c"
int fast_expansion_sum_zeroelim(elen, e, flen, f, h)
int elen;
double *e;
int flen;
double *f;
double *h;


{
  double Q;
  double Qnew;
  double hh;
  double bvirt;
  double avirt, bround, around;
  int eindex, findex, hindex;
  double enow, fnow;

  enow = e[0];
  fnow = f[0];
  eindex = findex = 0;
  if ((fnow > enow) == (fnow > -enow)) {
    Q = enow;
    enow = e[++eindex];
  } else {
    Q = fnow;
    fnow = f[++findex];
  }
  hindex = 0;
  if ((eindex < elen) && (findex < flen)) {
    if ((fnow > enow) == (fnow > -enow)) {
      Qnew = (double) (enow + Q); bvirt = Qnew - enow; hh = Q - bvirt;
      enow = e[++eindex];
    } else {
      Qnew = (double) (fnow + Q); bvirt = Qnew - fnow; hh = Q - bvirt;
      fnow = f[++findex];
    }
    Q = Qnew;
    if (hh != 0.0) {
      h[hindex++] = hh;
    }
    while ((eindex < elen) && (findex < flen)) {
      if ((fnow > enow) == (fnow > -enow)) {
        Qnew = (double) (Q + enow); bvirt = (double) (Qnew - Q); avirt = Qnew - bvirt; bround = enow - bvirt; around = Q - avirt; hh = around + bround;
        enow = e[++eindex];
      } else {
        Qnew = (double) (Q + fnow); bvirt = (double) (Qnew - Q); avirt = Qnew - bvirt; bround = fnow - bvirt; around = Q - avirt; hh = around + bround;
        fnow = f[++findex];
      }
      Q = Qnew;
      if (hh != 0.0) {
        h[hindex++] = hh;
      }
    }
  }
  while (eindex < elen) {
    Qnew = (double) (Q + enow); bvirt = (double) (Qnew - Q); avirt = Qnew - bvirt; bround = enow - bvirt; around = Q - avirt; hh = around + bround;
    enow = e[++eindex];
    Q = Qnew;
    if (hh != 0.0) {
      h[hindex++] = hh;
    }
  }
  while (findex < flen) {
    Qnew = (double) (Q + fnow); bvirt = (double) (Qnew - Q); avirt = Qnew - bvirt; bround = fnow - bvirt; around = Q - avirt; hh = around + bround;
    fnow = f[++findex];
    Q = Qnew;
    if (hh != 0.0) {
      h[hindex++] = hh;
    }
  }
  if ((Q != 0.0) || (hindex == 0)) {
    h[hindex++] = Q;
  }
  return hindex;
}
# 4867 "triangle.c"
int scale_expansion_zeroelim(elen, e, b, h)
int elen;
double *e;
double b;
double *h;


{
  double Q, sum;
  double hh;
  double product1;
  double product0;
  int eindex, hindex;
  double enow;
  double bvirt;
  double avirt, bround, around;
  double c;
  double abig;
  double ahi, alo, bhi, blo;
  double err1, err2, err3;

  c = (double) (splitter * b); abig = (double) (c - b); bhi = c - abig; blo = b - bhi;
  Q = (double) (e[0] * b); c = (double) (splitter * e[0]); abig = (double) (c - e[0]); ahi = c - abig; alo = e[0] - ahi; err1 = Q - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); hh = (alo * blo) - err3;
  hindex = 0;
  if (hh != 0) {
    h[hindex++] = hh;
  }
  for (eindex = 1; eindex < elen; eindex++) {
    enow = e[eindex];
    product1 = (double) (enow * b); c = (double) (splitter * enow); abig = (double) (c - enow); ahi = c - abig; alo = enow - ahi; err1 = product1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); product0 = (alo * blo) - err3;
    sum = (double) (Q + product0); bvirt = (double) (sum - Q); avirt = sum - bvirt; bround = product0 - bvirt; around = Q - avirt; hh = around + bround;
    if (hh != 0) {
      h[hindex++] = hh;
    }
    Q = (double) (product1 + sum); bvirt = Q - product1; hh = sum - bvirt;
    if (hh != 0) {
      h[hindex++] = hh;
    }
  }
  if ((Q != 0.0) || (hindex == 0)) {
    h[hindex++] = Q;
  }
  return hindex;
}
# 4923 "triangle.c"
double estimate(elen, e)
int elen;
double *e;


{
  double Q;
  int eindex;

  Q = e[0];
  for (eindex = 1; eindex < elen; eindex++) {
    Q += e[eindex];
  }
  return Q;
}
# 4962 "triangle.c"
double counterclockwiseadapt(pa, pb, pc, detsum)
vertex pa;
vertex pb;
vertex pc;
double detsum;


{
  double acx, acy, bcx, bcy;
  double acxtail, acytail, bcxtail, bcytail;
  double detleft, detright;
  double detlefttail, detrighttail;
  double det, errbound;
  double B[4], C1[8], C2[12], D[16];
  double B3;
  int C1length, C2length, Dlength;
  double u[4];
  double u3;
  double s1, t1;
  double s0, t0;

  double bvirt;
  double avirt, bround, around;
  double c;
  double abig;
  double ahi, alo, bhi, blo;
  double err1, err2, err3;
  double _i, _j;
  double _0;

  acx = (double) (pa[0] - pc[0]);
  bcx = (double) (pb[0] - pc[0]);
  acy = (double) (pa[1] - pc[1]);
  bcy = (double) (pb[1] - pc[1]);

  detleft = (double) (acx * bcy); c = (double) (splitter * acx); abig = (double) (c - acx); ahi = c - abig; alo = acx - ahi; c = (double) (splitter * bcy); abig = (double) (c - bcy); bhi = c - abig; blo = bcy - bhi; err1 = detleft - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); detlefttail = (alo * blo) - err3;
  detright = (double) (acy * bcx); c = (double) (splitter * acy); abig = (double) (c - acy); ahi = c - abig; alo = acy - ahi; c = (double) (splitter * bcx); abig = (double) (c - bcx); bhi = c - abig; blo = bcx - bhi; err1 = detright - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); detrighttail = (alo * blo) - err3;

  _i = (double) (detlefttail - detrighttail); bvirt = (double) (detlefttail - _i); avirt = _i + bvirt; bround = bvirt - detrighttail; around = detlefttail - avirt; B[0] = around + bround; _j = (double) (detleft + _i); bvirt = (double) (_j - detleft); avirt = _j - bvirt; bround = _i - bvirt; around = detleft - avirt; _0 = around + bround; _i = (double) (_0 - detright); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - detright; around = _0 - avirt; B[1] = around + bround; B3 = (double) (_j + _i); bvirt = (double) (B3 - _j); avirt = B3 - bvirt; bround = _i - bvirt; around = _j - avirt; B[2] = around + bround;

  B[3] = B3;

  det = estimate(4, B);
  errbound = ccwerrboundB * detsum;
  if ((det >= errbound) || (-det >= errbound)) {
    return det;
  }

  bvirt = (double) (pa[0] - acx); avirt = acx + bvirt; bround = bvirt - pc[0]; around = pa[0] - avirt; acxtail = around + bround;
  bvirt = (double) (pb[0] - bcx); avirt = bcx + bvirt; bround = bvirt - pc[0]; around = pb[0] - avirt; bcxtail = around + bround;
  bvirt = (double) (pa[1] - acy); avirt = acy + bvirt; bround = bvirt - pc[1]; around = pa[1] - avirt; acytail = around + bround;
  bvirt = (double) (pb[1] - bcy); avirt = bcy + bvirt; bround = bvirt - pc[1]; around = pb[1] - avirt; bcytail = around + bround;

  if ((acxtail == 0.0) && (acytail == 0.0)
      && (bcxtail == 0.0) && (bcytail == 0.0)) {
    return det;
  }

  errbound = ccwerrboundC * detsum + resulterrbound * ((det) >= 0.0 ? (det) : -(det));
  det += (acx * bcytail + bcy * acxtail)
       - (acy * bcxtail + bcx * acytail);
  if ((det >= errbound) || (-det >= errbound)) {
    return det;
  }

  s1 = (double) (acxtail * bcy); c = (double) (splitter * acxtail); abig = (double) (c - acxtail); ahi = c - abig; alo = acxtail - ahi; c = (double) (splitter * bcy); abig = (double) (c - bcy); bhi = c - abig; blo = bcy - bhi; err1 = s1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); s0 = (alo * blo) - err3;
  t1 = (double) (acytail * bcx); c = (double) (splitter * acytail); abig = (double) (c - acytail); ahi = c - abig; alo = acytail - ahi; c = (double) (splitter * bcx); abig = (double) (c - bcx); bhi = c - abig; blo = bcx - bhi; err1 = t1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); t0 = (alo * blo) - err3;
  _i = (double) (s0 - t0); bvirt = (double) (s0 - _i); avirt = _i + bvirt; bround = bvirt - t0; around = s0 - avirt; u[0] = around + bround; _j = (double) (s1 + _i); bvirt = (double) (_j - s1); avirt = _j - bvirt; bround = _i - bvirt; around = s1 - avirt; _0 = around + bround; _i = (double) (_0 - t1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - t1; around = _0 - avirt; u[1] = around + bround; u3 = (double) (_j + _i); bvirt = (double) (u3 - _j); avirt = u3 - bvirt; bround = _i - bvirt; around = _j - avirt; u[2] = around + bround;
  u[3] = u3;
  C1length = fast_expansion_sum_zeroelim(4, B, 4, u, C1);

  s1 = (double) (acx * bcytail); c = (double) (splitter * acx); abig = (double) (c - acx); ahi = c - abig; alo = acx - ahi; c = (double) (splitter * bcytail); abig = (double) (c - bcytail); bhi = c - abig; blo = bcytail - bhi; err1 = s1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); s0 = (alo * blo) - err3;
  t1 = (double) (acy * bcxtail); c = (double) (splitter * acy); abig = (double) (c - acy); ahi = c - abig; alo = acy - ahi; c = (double) (splitter * bcxtail); abig = (double) (c - bcxtail); bhi = c - abig; blo = bcxtail - bhi; err1 = t1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); t0 = (alo * blo) - err3;
  _i = (double) (s0 - t0); bvirt = (double) (s0 - _i); avirt = _i + bvirt; bround = bvirt - t0; around = s0 - avirt; u[0] = around + bround; _j = (double) (s1 + _i); bvirt = (double) (_j - s1); avirt = _j - bvirt; bround = _i - bvirt; around = s1 - avirt; _0 = around + bround; _i = (double) (_0 - t1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - t1; around = _0 - avirt; u[1] = around + bround; u3 = (double) (_j + _i); bvirt = (double) (u3 - _j); avirt = u3 - bvirt; bround = _i - bvirt; around = _j - avirt; u[2] = around + bround;
  u[3] = u3;
  C2length = fast_expansion_sum_zeroelim(C1length, C1, 4, u, C2);

  s1 = (double) (acxtail * bcytail); c = (double) (splitter * acxtail); abig = (double) (c - acxtail); ahi = c - abig; alo = acxtail - ahi; c = (double) (splitter * bcytail); abig = (double) (c - bcytail); bhi = c - abig; blo = bcytail - bhi; err1 = s1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); s0 = (alo * blo) - err3;
  t1 = (double) (acytail * bcxtail); c = (double) (splitter * acytail); abig = (double) (c - acytail); ahi = c - abig; alo = acytail - ahi; c = (double) (splitter * bcxtail); abig = (double) (c - bcxtail); bhi = c - abig; blo = bcxtail - bhi; err1 = t1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); t0 = (alo * blo) - err3;
  _i = (double) (s0 - t0); bvirt = (double) (s0 - _i); avirt = _i + bvirt; bround = bvirt - t0; around = s0 - avirt; u[0] = around + bround; _j = (double) (s1 + _i); bvirt = (double) (_j - s1); avirt = _j - bvirt; bround = _i - bvirt; around = s1 - avirt; _0 = around + bround; _i = (double) (_0 - t1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - t1; around = _0 - avirt; u[1] = around + bround; u3 = (double) (_j + _i); bvirt = (double) (u3 - _j); avirt = u3 - bvirt; bround = _i - bvirt; around = _j - avirt; u[2] = around + bround;
  u[3] = u3;
  Dlength = fast_expansion_sum_zeroelim(C2length, C2, 4, u, D);

  return(D[Dlength - 1]);
}





double counterclockwise(m, b, pa, pb, pc)
struct mesh *m;
struct behavior *b;
vertex pa;
vertex pb;
vertex pc;


{
  double detleft, detright, det;
  double detsum, errbound;

  m->counterclockcount++;

  detleft = (pa[0] - pc[0]) * (pb[1] - pc[1]);
  detright = (pa[1] - pc[1]) * (pb[0] - pc[0]);
  det = detleft - detright;

  if (b->noexact) {
    return det;
  }

  if (detleft > 0.0) {
    if (detright <= 0.0) {
      return det;
    } else {
      detsum = detleft + detright;
    }
  } else if (detleft < 0.0) {
    if (detright >= 0.0) {
      return det;
    } else {
      detsum = -detleft - detright;
    }
  } else {
    return det;
  }

  errbound = ccwerrboundA * detsum;
  if ((det >= errbound) || (-det >= errbound)) {
    return det;
  }

  return counterclockwiseadapt(pa, pb, pc, detsum);
}
# 5120 "triangle.c"
double incircleadapt(pa, pb, pc, pd, permanent)
vertex pa;
vertex pb;
vertex pc;
vertex pd;
double permanent;


{
  double adx, bdx, cdx, ady, bdy, cdy;
  double det, errbound;

  double bdxcdy1, cdxbdy1, cdxady1, adxcdy1, adxbdy1, bdxady1;
  double bdxcdy0, cdxbdy0, cdxady0, adxcdy0, adxbdy0, bdxady0;
  double bc[4], ca[4], ab[4];
  double bc3, ca3, ab3;
  double axbc[8], axxbc[16], aybc[8], ayybc[16], adet[32];
  int axbclen, axxbclen, aybclen, ayybclen, alen;
  double bxca[8], bxxca[16], byca[8], byyca[16], bdet[32];
  int bxcalen, bxxcalen, bycalen, byycalen, blen;
  double cxab[8], cxxab[16], cyab[8], cyyab[16], cdet[32];
  int cxablen, cxxablen, cyablen, cyyablen, clen;
  double abdet[64];
  int ablen;
  double fin1[1152], fin2[1152];
  double *finnow, *finother, *finswap;
  int finlength;

  double adxtail, bdxtail, cdxtail, adytail, bdytail, cdytail;
  double adxadx1, adyady1, bdxbdx1, bdybdy1, cdxcdx1, cdycdy1;
  double adxadx0, adyady0, bdxbdx0, bdybdy0, cdxcdx0, cdycdy0;
  double aa[4], bb[4], cc[4];
  double aa3, bb3, cc3;
  double ti1, tj1;
  double ti0, tj0;
  double u[4], v[4];
  double u3, v3;
  double temp8[8], temp16a[16], temp16b[16], temp16c[16];
  double temp32a[32], temp32b[32], temp48[48], temp64[64];
  int temp8len, temp16alen, temp16blen, temp16clen;
  int temp32alen, temp32blen, temp48len, temp64len;
  double axtbb[8], axtcc[8], aytbb[8], aytcc[8];
  int axtbblen, axtcclen, aytbblen, aytcclen;
  double bxtaa[8], bxtcc[8], bytaa[8], bytcc[8];
  int bxtaalen, bxtcclen, bytaalen, bytcclen;
  double cxtaa[8], cxtbb[8], cytaa[8], cytbb[8];
  int cxtaalen, cxtbblen, cytaalen, cytbblen;
  double axtbc[8], aytbc[8], bxtca[8], bytca[8], cxtab[8], cytab[8];
  int axtbclen, aytbclen, bxtcalen, bytcalen, cxtablen, cytablen;
  double axtbct[16], aytbct[16], bxtcat[16], bytcat[16], cxtabt[16], cytabt[16];
  int axtbctlen, aytbctlen, bxtcatlen, bytcatlen, cxtabtlen, cytabtlen;
  double axtbctt[8], aytbctt[8], bxtcatt[8];
  double bytcatt[8], cxtabtt[8], cytabtt[8];
  int axtbcttlen, aytbcttlen, bxtcattlen, bytcattlen, cxtabttlen, cytabttlen;
  double abt[8], bct[8], cat[8];
  int abtlen, bctlen, catlen;
  double abtt[4], bctt[4], catt[4];
  int abttlen, bcttlen, cattlen;
  double abtt3, bctt3, catt3;
  double negate;

  double bvirt;
  double avirt, bround, around;
  double c;
  double abig;
  double ahi, alo, bhi, blo;
  double err1, err2, err3;
  double _i, _j;
  double _0;

  adx = (double) (pa[0] - pd[0]);
  bdx = (double) (pb[0] - pd[0]);
  cdx = (double) (pc[0] - pd[0]);
  ady = (double) (pa[1] - pd[1]);
  bdy = (double) (pb[1] - pd[1]);
  cdy = (double) (pc[1] - pd[1]);

  bdxcdy1 = (double) (bdx * cdy); c = (double) (splitter * bdx); abig = (double) (c - bdx); ahi = c - abig; alo = bdx - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = bdxcdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdxcdy0 = (alo * blo) - err3;
  cdxbdy1 = (double) (cdx * bdy); c = (double) (splitter * cdx); abig = (double) (c - cdx); ahi = c - abig; alo = cdx - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = cdxbdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdxbdy0 = (alo * blo) - err3;
  _i = (double) (bdxcdy0 - cdxbdy0); bvirt = (double) (bdxcdy0 - _i); avirt = _i + bvirt; bround = bvirt - cdxbdy0; around = bdxcdy0 - avirt; bc[0] = around + bround; _j = (double) (bdxcdy1 + _i); bvirt = (double) (_j - bdxcdy1); avirt = _j - bvirt; bround = _i - bvirt; around = bdxcdy1 - avirt; _0 = around + bround; _i = (double) (_0 - cdxbdy1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - cdxbdy1; around = _0 - avirt; bc[1] = around + bround; bc3 = (double) (_j + _i); bvirt = (double) (bc3 - _j); avirt = bc3 - bvirt; bround = _i - bvirt; around = _j - avirt; bc[2] = around + bround;
  bc[3] = bc3;
  axbclen = scale_expansion_zeroelim(4, bc, adx, axbc);
  axxbclen = scale_expansion_zeroelim(axbclen, axbc, adx, axxbc);
  aybclen = scale_expansion_zeroelim(4, bc, ady, aybc);
  ayybclen = scale_expansion_zeroelim(aybclen, aybc, ady, ayybc);
  alen = fast_expansion_sum_zeroelim(axxbclen, axxbc, ayybclen, ayybc, adet);

  cdxady1 = (double) (cdx * ady); c = (double) (splitter * cdx); abig = (double) (c - cdx); ahi = c - abig; alo = cdx - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = cdxady1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdxady0 = (alo * blo) - err3;
  adxcdy1 = (double) (adx * cdy); c = (double) (splitter * adx); abig = (double) (c - adx); ahi = c - abig; alo = adx - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = adxcdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adxcdy0 = (alo * blo) - err3;
  _i = (double) (cdxady0 - adxcdy0); bvirt = (double) (cdxady0 - _i); avirt = _i + bvirt; bround = bvirt - adxcdy0; around = cdxady0 - avirt; ca[0] = around + bround; _j = (double) (cdxady1 + _i); bvirt = (double) (_j - cdxady1); avirt = _j - bvirt; bround = _i - bvirt; around = cdxady1 - avirt; _0 = around + bround; _i = (double) (_0 - adxcdy1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - adxcdy1; around = _0 - avirt; ca[1] = around + bround; ca3 = (double) (_j + _i); bvirt = (double) (ca3 - _j); avirt = ca3 - bvirt; bround = _i - bvirt; around = _j - avirt; ca[2] = around + bround;
  ca[3] = ca3;
  bxcalen = scale_expansion_zeroelim(4, ca, bdx, bxca);
  bxxcalen = scale_expansion_zeroelim(bxcalen, bxca, bdx, bxxca);
  bycalen = scale_expansion_zeroelim(4, ca, bdy, byca);
  byycalen = scale_expansion_zeroelim(bycalen, byca, bdy, byyca);
  blen = fast_expansion_sum_zeroelim(bxxcalen, bxxca, byycalen, byyca, bdet);

  adxbdy1 = (double) (adx * bdy); c = (double) (splitter * adx); abig = (double) (c - adx); ahi = c - abig; alo = adx - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = adxbdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adxbdy0 = (alo * blo) - err3;
  bdxady1 = (double) (bdx * ady); c = (double) (splitter * bdx); abig = (double) (c - bdx); ahi = c - abig; alo = bdx - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = bdxady1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdxady0 = (alo * blo) - err3;
  _i = (double) (adxbdy0 - bdxady0); bvirt = (double) (adxbdy0 - _i); avirt = _i + bvirt; bround = bvirt - bdxady0; around = adxbdy0 - avirt; ab[0] = around + bround; _j = (double) (adxbdy1 + _i); bvirt = (double) (_j - adxbdy1); avirt = _j - bvirt; bround = _i - bvirt; around = adxbdy1 - avirt; _0 = around + bround; _i = (double) (_0 - bdxady1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - bdxady1; around = _0 - avirt; ab[1] = around + bround; ab3 = (double) (_j + _i); bvirt = (double) (ab3 - _j); avirt = ab3 - bvirt; bround = _i - bvirt; around = _j - avirt; ab[2] = around + bround;
  ab[3] = ab3;
  cxablen = scale_expansion_zeroelim(4, ab, cdx, cxab);
  cxxablen = scale_expansion_zeroelim(cxablen, cxab, cdx, cxxab);
  cyablen = scale_expansion_zeroelim(4, ab, cdy, cyab);
  cyyablen = scale_expansion_zeroelim(cyablen, cyab, cdy, cyyab);
  clen = fast_expansion_sum_zeroelim(cxxablen, cxxab, cyyablen, cyyab, cdet);

  ablen = fast_expansion_sum_zeroelim(alen, adet, blen, bdet, abdet);
  finlength = fast_expansion_sum_zeroelim(ablen, abdet, clen, cdet, fin1);

  det = estimate(finlength, fin1);
  errbound = iccerrboundB * permanent;
  if ((det >= errbound) || (-det >= errbound)) {
    return det;
  }

  bvirt = (double) (pa[0] - adx); avirt = adx + bvirt; bround = bvirt - pd[0]; around = pa[0] - avirt; adxtail = around + bround;
  bvirt = (double) (pa[1] - ady); avirt = ady + bvirt; bround = bvirt - pd[1]; around = pa[1] - avirt; adytail = around + bround;
  bvirt = (double) (pb[0] - bdx); avirt = bdx + bvirt; bround = bvirt - pd[0]; around = pb[0] - avirt; bdxtail = around + bround;
  bvirt = (double) (pb[1] - bdy); avirt = bdy + bvirt; bround = bvirt - pd[1]; around = pb[1] - avirt; bdytail = around + bround;
  bvirt = (double) (pc[0] - cdx); avirt = cdx + bvirt; bround = bvirt - pd[0]; around = pc[0] - avirt; cdxtail = around + bround;
  bvirt = (double) (pc[1] - cdy); avirt = cdy + bvirt; bround = bvirt - pd[1]; around = pc[1] - avirt; cdytail = around + bround;
  if ((adxtail == 0.0) && (bdxtail == 0.0) && (cdxtail == 0.0)
      && (adytail == 0.0) && (bdytail == 0.0) && (cdytail == 0.0)) {
    return det;
  }

  errbound = iccerrboundC * permanent + resulterrbound * ((det) >= 0.0 ? (det) : -(det));
  det += ((adx * adx + ady * ady) * ((bdx * cdytail + cdy * bdxtail)
                                     - (bdy * cdxtail + cdx * bdytail))
          + 2.0 * (adx * adxtail + ady * adytail) * (bdx * cdy - bdy * cdx))
       + ((bdx * bdx + bdy * bdy) * ((cdx * adytail + ady * cdxtail)
                                     - (cdy * adxtail + adx * cdytail))
          + 2.0 * (bdx * bdxtail + bdy * bdytail) * (cdx * ady - cdy * adx))
       + ((cdx * cdx + cdy * cdy) * ((adx * bdytail + bdy * adxtail)
                                     - (ady * bdxtail + bdx * adytail))
          + 2.0 * (cdx * cdxtail + cdy * cdytail) * (adx * bdy - ady * bdx));
  if ((det >= errbound) || (-det >= errbound)) {
    return det;
  }

  finnow = fin1;
  finother = fin2;

  if ((bdxtail != 0.0) || (bdytail != 0.0)
      || (cdxtail != 0.0) || (cdytail != 0.0)) {
    adxadx1 = (double) (adx * adx); c = (double) (splitter * adx); abig = (double) (c - adx); ahi = c - abig; alo = adx - ahi; err1 = adxadx1 - (ahi * ahi); err3 = err1 - ((ahi + ahi) * alo); adxadx0 = (alo * alo) - err3;
    adyady1 = (double) (ady * ady); c = (double) (splitter * ady); abig = (double) (c - ady); ahi = c - abig; alo = ady - ahi; err1 = adyady1 - (ahi * ahi); err3 = err1 - ((ahi + ahi) * alo); adyady0 = (alo * alo) - err3;
    _i = (double) (adxadx0 + adyady0); bvirt = (double) (_i - adxadx0); avirt = _i - bvirt; bround = adyady0 - bvirt; around = adxadx0 - avirt; aa[0] = around + bround; _j = (double) (adxadx1 + _i); bvirt = (double) (_j - adxadx1); avirt = _j - bvirt; bround = _i - bvirt; around = adxadx1 - avirt; _0 = around + bround; _i = (double) (_0 + adyady1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = adyady1 - bvirt; around = _0 - avirt; aa[1] = around + bround; aa3 = (double) (_j + _i); bvirt = (double) (aa3 - _j); avirt = aa3 - bvirt; bround = _i - bvirt; around = _j - avirt; aa[2] = around + bround;
    aa[3] = aa3;
  }
  if ((cdxtail != 0.0) || (cdytail != 0.0)
      || (adxtail != 0.0) || (adytail != 0.0)) {
    bdxbdx1 = (double) (bdx * bdx); c = (double) (splitter * bdx); abig = (double) (c - bdx); ahi = c - abig; alo = bdx - ahi; err1 = bdxbdx1 - (ahi * ahi); err3 = err1 - ((ahi + ahi) * alo); bdxbdx0 = (alo * alo) - err3;
    bdybdy1 = (double) (bdy * bdy); c = (double) (splitter * bdy); abig = (double) (c - bdy); ahi = c - abig; alo = bdy - ahi; err1 = bdybdy1 - (ahi * ahi); err3 = err1 - ((ahi + ahi) * alo); bdybdy0 = (alo * alo) - err3;
    _i = (double) (bdxbdx0 + bdybdy0); bvirt = (double) (_i - bdxbdx0); avirt = _i - bvirt; bround = bdybdy0 - bvirt; around = bdxbdx0 - avirt; bb[0] = around + bround; _j = (double) (bdxbdx1 + _i); bvirt = (double) (_j - bdxbdx1); avirt = _j - bvirt; bround = _i - bvirt; around = bdxbdx1 - avirt; _0 = around + bround; _i = (double) (_0 + bdybdy1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = bdybdy1 - bvirt; around = _0 - avirt; bb[1] = around + bround; bb3 = (double) (_j + _i); bvirt = (double) (bb3 - _j); avirt = bb3 - bvirt; bround = _i - bvirt; around = _j - avirt; bb[2] = around + bround;
    bb[3] = bb3;
  }
  if ((adxtail != 0.0) || (adytail != 0.0)
      || (bdxtail != 0.0) || (bdytail != 0.0)) {
    cdxcdx1 = (double) (cdx * cdx); c = (double) (splitter * cdx); abig = (double) (c - cdx); ahi = c - abig; alo = cdx - ahi; err1 = cdxcdx1 - (ahi * ahi); err3 = err1 - ((ahi + ahi) * alo); cdxcdx0 = (alo * alo) - err3;
    cdycdy1 = (double) (cdy * cdy); c = (double) (splitter * cdy); abig = (double) (c - cdy); ahi = c - abig; alo = cdy - ahi; err1 = cdycdy1 - (ahi * ahi); err3 = err1 - ((ahi + ahi) * alo); cdycdy0 = (alo * alo) - err3;
    _i = (double) (cdxcdx0 + cdycdy0); bvirt = (double) (_i - cdxcdx0); avirt = _i - bvirt; bround = cdycdy0 - bvirt; around = cdxcdx0 - avirt; cc[0] = around + bround; _j = (double) (cdxcdx1 + _i); bvirt = (double) (_j - cdxcdx1); avirt = _j - bvirt; bround = _i - bvirt; around = cdxcdx1 - avirt; _0 = around + bround; _i = (double) (_0 + cdycdy1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = cdycdy1 - bvirt; around = _0 - avirt; cc[1] = around + bround; cc3 = (double) (_j + _i); bvirt = (double) (cc3 - _j); avirt = cc3 - bvirt; bround = _i - bvirt; around = _j - avirt; cc[2] = around + bround;
    cc[3] = cc3;
  }

  if (adxtail != 0.0) {
    axtbclen = scale_expansion_zeroelim(4, bc, adxtail, axtbc);
    temp16alen = scale_expansion_zeroelim(axtbclen, axtbc, 2.0 * adx,
                                          temp16a);

    axtcclen = scale_expansion_zeroelim(4, cc, adxtail, axtcc);
    temp16blen = scale_expansion_zeroelim(axtcclen, axtcc, bdy, temp16b);

    axtbblen = scale_expansion_zeroelim(4, bb, adxtail, axtbb);
    temp16clen = scale_expansion_zeroelim(axtbblen, axtbb, -cdy, temp16c);

    temp32alen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                            temp16blen, temp16b, temp32a);
    temp48len = fast_expansion_sum_zeroelim(temp16clen, temp16c,
                                            temp32alen, temp32a, temp48);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                            temp48, finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (adytail != 0.0) {
    aytbclen = scale_expansion_zeroelim(4, bc, adytail, aytbc);
    temp16alen = scale_expansion_zeroelim(aytbclen, aytbc, 2.0 * ady,
                                          temp16a);

    aytbblen = scale_expansion_zeroelim(4, bb, adytail, aytbb);
    temp16blen = scale_expansion_zeroelim(aytbblen, aytbb, cdx, temp16b);

    aytcclen = scale_expansion_zeroelim(4, cc, adytail, aytcc);
    temp16clen = scale_expansion_zeroelim(aytcclen, aytcc, -bdx, temp16c);

    temp32alen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                            temp16blen, temp16b, temp32a);
    temp48len = fast_expansion_sum_zeroelim(temp16clen, temp16c,
                                            temp32alen, temp32a, temp48);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                            temp48, finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (bdxtail != 0.0) {
    bxtcalen = scale_expansion_zeroelim(4, ca, bdxtail, bxtca);
    temp16alen = scale_expansion_zeroelim(bxtcalen, bxtca, 2.0 * bdx,
                                          temp16a);

    bxtaalen = scale_expansion_zeroelim(4, aa, bdxtail, bxtaa);
    temp16blen = scale_expansion_zeroelim(bxtaalen, bxtaa, cdy, temp16b);

    bxtcclen = scale_expansion_zeroelim(4, cc, bdxtail, bxtcc);
    temp16clen = scale_expansion_zeroelim(bxtcclen, bxtcc, -ady, temp16c);

    temp32alen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                            temp16blen, temp16b, temp32a);
    temp48len = fast_expansion_sum_zeroelim(temp16clen, temp16c,
                                            temp32alen, temp32a, temp48);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                            temp48, finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (bdytail != 0.0) {
    bytcalen = scale_expansion_zeroelim(4, ca, bdytail, bytca);
    temp16alen = scale_expansion_zeroelim(bytcalen, bytca, 2.0 * bdy,
                                          temp16a);

    bytcclen = scale_expansion_zeroelim(4, cc, bdytail, bytcc);
    temp16blen = scale_expansion_zeroelim(bytcclen, bytcc, adx, temp16b);

    bytaalen = scale_expansion_zeroelim(4, aa, bdytail, bytaa);
    temp16clen = scale_expansion_zeroelim(bytaalen, bytaa, -cdx, temp16c);

    temp32alen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                            temp16blen, temp16b, temp32a);
    temp48len = fast_expansion_sum_zeroelim(temp16clen, temp16c,
                                            temp32alen, temp32a, temp48);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                            temp48, finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (cdxtail != 0.0) {
    cxtablen = scale_expansion_zeroelim(4, ab, cdxtail, cxtab);
    temp16alen = scale_expansion_zeroelim(cxtablen, cxtab, 2.0 * cdx,
                                          temp16a);

    cxtbblen = scale_expansion_zeroelim(4, bb, cdxtail, cxtbb);
    temp16blen = scale_expansion_zeroelim(cxtbblen, cxtbb, ady, temp16b);

    cxtaalen = scale_expansion_zeroelim(4, aa, cdxtail, cxtaa);
    temp16clen = scale_expansion_zeroelim(cxtaalen, cxtaa, -bdy, temp16c);

    temp32alen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                            temp16blen, temp16b, temp32a);
    temp48len = fast_expansion_sum_zeroelim(temp16clen, temp16c,
                                            temp32alen, temp32a, temp48);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                            temp48, finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (cdytail != 0.0) {
    cytablen = scale_expansion_zeroelim(4, ab, cdytail, cytab);
    temp16alen = scale_expansion_zeroelim(cytablen, cytab, 2.0 * cdy,
                                          temp16a);

    cytaalen = scale_expansion_zeroelim(4, aa, cdytail, cytaa);
    temp16blen = scale_expansion_zeroelim(cytaalen, cytaa, bdx, temp16b);

    cytbblen = scale_expansion_zeroelim(4, bb, cdytail, cytbb);
    temp16clen = scale_expansion_zeroelim(cytbblen, cytbb, -adx, temp16c);

    temp32alen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                            temp16blen, temp16b, temp32a);
    temp48len = fast_expansion_sum_zeroelim(temp16clen, temp16c,
                                            temp32alen, temp32a, temp48);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                            temp48, finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }

  if ((adxtail != 0.0) || (adytail != 0.0)) {
    if ((bdxtail != 0.0) || (bdytail != 0.0)
        || (cdxtail != 0.0) || (cdytail != 0.0)) {
      ti1 = (double) (bdxtail * cdy); c = (double) (splitter * bdxtail); abig = (double) (c - bdxtail); ahi = c - abig; alo = bdxtail - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      tj1 = (double) (bdx * cdytail); c = (double) (splitter * bdx); abig = (double) (c - bdx); ahi = c - abig; alo = bdx - ahi; c = (double) (splitter * cdytail); abig = (double) (c - cdytail); bhi = c - abig; blo = cdytail - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 + tj0); bvirt = (double) (_i - ti0); avirt = _i - bvirt; bround = tj0 - bvirt; around = ti0 - avirt; u[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 + tj1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = tj1 - bvirt; around = _0 - avirt; u[1] = around + bround; u3 = (double) (_j + _i); bvirt = (double) (u3 - _j); avirt = u3 - bvirt; bround = _i - bvirt; around = _j - avirt; u[2] = around + bround;
      u[3] = u3;
      negate = -bdy;
      ti1 = (double) (cdxtail * negate); c = (double) (splitter * cdxtail); abig = (double) (c - cdxtail); ahi = c - abig; alo = cdxtail - ahi; c = (double) (splitter * negate); abig = (double) (c - negate); bhi = c - abig; blo = negate - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      negate = -bdytail;
      tj1 = (double) (cdx * negate); c = (double) (splitter * cdx); abig = (double) (c - cdx); ahi = c - abig; alo = cdx - ahi; c = (double) (splitter * negate); abig = (double) (c - negate); bhi = c - abig; blo = negate - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 + tj0); bvirt = (double) (_i - ti0); avirt = _i - bvirt; bround = tj0 - bvirt; around = ti0 - avirt; v[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 + tj1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = tj1 - bvirt; around = _0 - avirt; v[1] = around + bround; v3 = (double) (_j + _i); bvirt = (double) (v3 - _j); avirt = v3 - bvirt; bround = _i - bvirt; around = _j - avirt; v[2] = around + bround;
      v[3] = v3;
      bctlen = fast_expansion_sum_zeroelim(4, u, 4, v, bct);

      ti1 = (double) (bdxtail * cdytail); c = (double) (splitter * bdxtail); abig = (double) (c - bdxtail); ahi = c - abig; alo = bdxtail - ahi; c = (double) (splitter * cdytail); abig = (double) (c - cdytail); bhi = c - abig; blo = cdytail - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      tj1 = (double) (cdxtail * bdytail); c = (double) (splitter * cdxtail); abig = (double) (c - cdxtail); ahi = c - abig; alo = cdxtail - ahi; c = (double) (splitter * bdytail); abig = (double) (c - bdytail); bhi = c - abig; blo = bdytail - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 - tj0); bvirt = (double) (ti0 - _i); avirt = _i + bvirt; bround = bvirt - tj0; around = ti0 - avirt; bctt[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 - tj1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - tj1; around = _0 - avirt; bctt[1] = around + bround; bctt3 = (double) (_j + _i); bvirt = (double) (bctt3 - _j); avirt = bctt3 - bvirt; bround = _i - bvirt; around = _j - avirt; bctt[2] = around + bround;
      bctt[3] = bctt3;
      bcttlen = 4;
    } else {
      bct[0] = 0.0;
      bctlen = 1;
      bctt[0] = 0.0;
      bcttlen = 1;
    }

    if (adxtail != 0.0) {
      temp16alen = scale_expansion_zeroelim(axtbclen, axtbc, adxtail, temp16a);
      axtbctlen = scale_expansion_zeroelim(bctlen, bct, adxtail, axtbct);
      temp32alen = scale_expansion_zeroelim(axtbctlen, axtbct, 2.0 * adx,
                                            temp32a);
      temp48len = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp32alen, temp32a, temp48);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                              temp48, finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (bdytail != 0.0) {
        temp8len = scale_expansion_zeroelim(4, cc, adxtail, temp8);
        temp16alen = scale_expansion_zeroelim(temp8len, temp8, bdytail,
                                              temp16a);
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp16alen,
                                                temp16a, finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
      if (cdytail != 0.0) {
        temp8len = scale_expansion_zeroelim(4, bb, -adxtail, temp8);
        temp16alen = scale_expansion_zeroelim(temp8len, temp8, cdytail,
                                              temp16a);
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp16alen,
                                                temp16a, finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }

      temp32alen = scale_expansion_zeroelim(axtbctlen, axtbct, adxtail,
                                            temp32a);
      axtbcttlen = scale_expansion_zeroelim(bcttlen, bctt, adxtail, axtbctt);
      temp16alen = scale_expansion_zeroelim(axtbcttlen, axtbctt, 2.0 * adx,
                                            temp16a);
      temp16blen = scale_expansion_zeroelim(axtbcttlen, axtbctt, adxtail,
                                            temp16b);
      temp32blen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp16blen, temp16b, temp32b);
      temp64len = fast_expansion_sum_zeroelim(temp32alen, temp32a,
                                              temp32blen, temp32b, temp64);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp64len,
                                              temp64, finother);
      finswap = finnow; finnow = finother; finother = finswap;
    }
    if (adytail != 0.0) {
      temp16alen = scale_expansion_zeroelim(aytbclen, aytbc, adytail, temp16a);
      aytbctlen = scale_expansion_zeroelim(bctlen, bct, adytail, aytbct);
      temp32alen = scale_expansion_zeroelim(aytbctlen, aytbct, 2.0 * ady,
                                            temp32a);
      temp48len = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp32alen, temp32a, temp48);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                              temp48, finother);
      finswap = finnow; finnow = finother; finother = finswap;


      temp32alen = scale_expansion_zeroelim(aytbctlen, aytbct, adytail,
                                            temp32a);
      aytbcttlen = scale_expansion_zeroelim(bcttlen, bctt, adytail, aytbctt);
      temp16alen = scale_expansion_zeroelim(aytbcttlen, aytbctt, 2.0 * ady,
                                            temp16a);
      temp16blen = scale_expansion_zeroelim(aytbcttlen, aytbctt, adytail,
                                            temp16b);
      temp32blen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp16blen, temp16b, temp32b);
      temp64len = fast_expansion_sum_zeroelim(temp32alen, temp32a,
                                              temp32blen, temp32b, temp64);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp64len,
                                              temp64, finother);
      finswap = finnow; finnow = finother; finother = finswap;
    }
  }
  if ((bdxtail != 0.0) || (bdytail != 0.0)) {
    if ((cdxtail != 0.0) || (cdytail != 0.0)
        || (adxtail != 0.0) || (adytail != 0.0)) {
      ti1 = (double) (cdxtail * ady); c = (double) (splitter * cdxtail); abig = (double) (c - cdxtail); ahi = c - abig; alo = cdxtail - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      tj1 = (double) (cdx * adytail); c = (double) (splitter * cdx); abig = (double) (c - cdx); ahi = c - abig; alo = cdx - ahi; c = (double) (splitter * adytail); abig = (double) (c - adytail); bhi = c - abig; blo = adytail - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 + tj0); bvirt = (double) (_i - ti0); avirt = _i - bvirt; bround = tj0 - bvirt; around = ti0 - avirt; u[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 + tj1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = tj1 - bvirt; around = _0 - avirt; u[1] = around + bround; u3 = (double) (_j + _i); bvirt = (double) (u3 - _j); avirt = u3 - bvirt; bround = _i - bvirt; around = _j - avirt; u[2] = around + bround;
      u[3] = u3;
      negate = -cdy;
      ti1 = (double) (adxtail * negate); c = (double) (splitter * adxtail); abig = (double) (c - adxtail); ahi = c - abig; alo = adxtail - ahi; c = (double) (splitter * negate); abig = (double) (c - negate); bhi = c - abig; blo = negate - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      negate = -cdytail;
      tj1 = (double) (adx * negate); c = (double) (splitter * adx); abig = (double) (c - adx); ahi = c - abig; alo = adx - ahi; c = (double) (splitter * negate); abig = (double) (c - negate); bhi = c - abig; blo = negate - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 + tj0); bvirt = (double) (_i - ti0); avirt = _i - bvirt; bround = tj0 - bvirt; around = ti0 - avirt; v[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 + tj1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = tj1 - bvirt; around = _0 - avirt; v[1] = around + bround; v3 = (double) (_j + _i); bvirt = (double) (v3 - _j); avirt = v3 - bvirt; bround = _i - bvirt; around = _j - avirt; v[2] = around + bround;
      v[3] = v3;
      catlen = fast_expansion_sum_zeroelim(4, u, 4, v, cat);

      ti1 = (double) (cdxtail * adytail); c = (double) (splitter * cdxtail); abig = (double) (c - cdxtail); ahi = c - abig; alo = cdxtail - ahi; c = (double) (splitter * adytail); abig = (double) (c - adytail); bhi = c - abig; blo = adytail - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      tj1 = (double) (adxtail * cdytail); c = (double) (splitter * adxtail); abig = (double) (c - adxtail); ahi = c - abig; alo = adxtail - ahi; c = (double) (splitter * cdytail); abig = (double) (c - cdytail); bhi = c - abig; blo = cdytail - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 - tj0); bvirt = (double) (ti0 - _i); avirt = _i + bvirt; bround = bvirt - tj0; around = ti0 - avirt; catt[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 - tj1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - tj1; around = _0 - avirt; catt[1] = around + bround; catt3 = (double) (_j + _i); bvirt = (double) (catt3 - _j); avirt = catt3 - bvirt; bround = _i - bvirt; around = _j - avirt; catt[2] = around + bround;
      catt[3] = catt3;
      cattlen = 4;
    } else {
      cat[0] = 0.0;
      catlen = 1;
      catt[0] = 0.0;
      cattlen = 1;
    }

    if (bdxtail != 0.0) {
      temp16alen = scale_expansion_zeroelim(bxtcalen, bxtca, bdxtail, temp16a);
      bxtcatlen = scale_expansion_zeroelim(catlen, cat, bdxtail, bxtcat);
      temp32alen = scale_expansion_zeroelim(bxtcatlen, bxtcat, 2.0 * bdx,
                                            temp32a);
      temp48len = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp32alen, temp32a, temp48);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                              temp48, finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (cdytail != 0.0) {
        temp8len = scale_expansion_zeroelim(4, aa, bdxtail, temp8);
        temp16alen = scale_expansion_zeroelim(temp8len, temp8, cdytail,
                                              temp16a);
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp16alen,
                                                temp16a, finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
      if (adytail != 0.0) {
        temp8len = scale_expansion_zeroelim(4, cc, -bdxtail, temp8);
        temp16alen = scale_expansion_zeroelim(temp8len, temp8, adytail,
                                              temp16a);
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp16alen,
                                                temp16a, finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }

      temp32alen = scale_expansion_zeroelim(bxtcatlen, bxtcat, bdxtail,
                                            temp32a);
      bxtcattlen = scale_expansion_zeroelim(cattlen, catt, bdxtail, bxtcatt);
      temp16alen = scale_expansion_zeroelim(bxtcattlen, bxtcatt, 2.0 * bdx,
                                            temp16a);
      temp16blen = scale_expansion_zeroelim(bxtcattlen, bxtcatt, bdxtail,
                                            temp16b);
      temp32blen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp16blen, temp16b, temp32b);
      temp64len = fast_expansion_sum_zeroelim(temp32alen, temp32a,
                                              temp32blen, temp32b, temp64);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp64len,
                                              temp64, finother);
      finswap = finnow; finnow = finother; finother = finswap;
    }
    if (bdytail != 0.0) {
      temp16alen = scale_expansion_zeroelim(bytcalen, bytca, bdytail, temp16a);
      bytcatlen = scale_expansion_zeroelim(catlen, cat, bdytail, bytcat);
      temp32alen = scale_expansion_zeroelim(bytcatlen, bytcat, 2.0 * bdy,
                                            temp32a);
      temp48len = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp32alen, temp32a, temp48);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                              temp48, finother);
      finswap = finnow; finnow = finother; finother = finswap;


      temp32alen = scale_expansion_zeroelim(bytcatlen, bytcat, bdytail,
                                            temp32a);
      bytcattlen = scale_expansion_zeroelim(cattlen, catt, bdytail, bytcatt);
      temp16alen = scale_expansion_zeroelim(bytcattlen, bytcatt, 2.0 * bdy,
                                            temp16a);
      temp16blen = scale_expansion_zeroelim(bytcattlen, bytcatt, bdytail,
                                            temp16b);
      temp32blen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp16blen, temp16b, temp32b);
      temp64len = fast_expansion_sum_zeroelim(temp32alen, temp32a,
                                              temp32blen, temp32b, temp64);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp64len,
                                              temp64, finother);
      finswap = finnow; finnow = finother; finother = finswap;
    }
  }
  if ((cdxtail != 0.0) || (cdytail != 0.0)) {
    if ((adxtail != 0.0) || (adytail != 0.0)
        || (bdxtail != 0.0) || (bdytail != 0.0)) {
      ti1 = (double) (adxtail * bdy); c = (double) (splitter * adxtail); abig = (double) (c - adxtail); ahi = c - abig; alo = adxtail - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      tj1 = (double) (adx * bdytail); c = (double) (splitter * adx); abig = (double) (c - adx); ahi = c - abig; alo = adx - ahi; c = (double) (splitter * bdytail); abig = (double) (c - bdytail); bhi = c - abig; blo = bdytail - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 + tj0); bvirt = (double) (_i - ti0); avirt = _i - bvirt; bround = tj0 - bvirt; around = ti0 - avirt; u[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 + tj1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = tj1 - bvirt; around = _0 - avirt; u[1] = around + bround; u3 = (double) (_j + _i); bvirt = (double) (u3 - _j); avirt = u3 - bvirt; bround = _i - bvirt; around = _j - avirt; u[2] = around + bround;
      u[3] = u3;
      negate = -ady;
      ti1 = (double) (bdxtail * negate); c = (double) (splitter * bdxtail); abig = (double) (c - bdxtail); ahi = c - abig; alo = bdxtail - ahi; c = (double) (splitter * negate); abig = (double) (c - negate); bhi = c - abig; blo = negate - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      negate = -adytail;
      tj1 = (double) (bdx * negate); c = (double) (splitter * bdx); abig = (double) (c - bdx); ahi = c - abig; alo = bdx - ahi; c = (double) (splitter * negate); abig = (double) (c - negate); bhi = c - abig; blo = negate - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 + tj0); bvirt = (double) (_i - ti0); avirt = _i - bvirt; bround = tj0 - bvirt; around = ti0 - avirt; v[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 + tj1); bvirt = (double) (_i - _0); avirt = _i - bvirt; bround = tj1 - bvirt; around = _0 - avirt; v[1] = around + bround; v3 = (double) (_j + _i); bvirt = (double) (v3 - _j); avirt = v3 - bvirt; bround = _i - bvirt; around = _j - avirt; v[2] = around + bround;
      v[3] = v3;
      abtlen = fast_expansion_sum_zeroelim(4, u, 4, v, abt);

      ti1 = (double) (adxtail * bdytail); c = (double) (splitter * adxtail); abig = (double) (c - adxtail); ahi = c - abig; alo = adxtail - ahi; c = (double) (splitter * bdytail); abig = (double) (c - bdytail); bhi = c - abig; blo = bdytail - bhi; err1 = ti1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ti0 = (alo * blo) - err3;
      tj1 = (double) (bdxtail * adytail); c = (double) (splitter * bdxtail); abig = (double) (c - bdxtail); ahi = c - abig; alo = bdxtail - ahi; c = (double) (splitter * adytail); abig = (double) (c - adytail); bhi = c - abig; blo = adytail - bhi; err1 = tj1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); tj0 = (alo * blo) - err3;
      _i = (double) (ti0 - tj0); bvirt = (double) (ti0 - _i); avirt = _i + bvirt; bround = bvirt - tj0; around = ti0 - avirt; abtt[0] = around + bround; _j = (double) (ti1 + _i); bvirt = (double) (_j - ti1); avirt = _j - bvirt; bround = _i - bvirt; around = ti1 - avirt; _0 = around + bround; _i = (double) (_0 - tj1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - tj1; around = _0 - avirt; abtt[1] = around + bround; abtt3 = (double) (_j + _i); bvirt = (double) (abtt3 - _j); avirt = abtt3 - bvirt; bround = _i - bvirt; around = _j - avirt; abtt[2] = around + bround;
      abtt[3] = abtt3;
      abttlen = 4;
    } else {
      abt[0] = 0.0;
      abtlen = 1;
      abtt[0] = 0.0;
      abttlen = 1;
    }

    if (cdxtail != 0.0) {
      temp16alen = scale_expansion_zeroelim(cxtablen, cxtab, cdxtail, temp16a);
      cxtabtlen = scale_expansion_zeroelim(abtlen, abt, cdxtail, cxtabt);
      temp32alen = scale_expansion_zeroelim(cxtabtlen, cxtabt, 2.0 * cdx,
                                            temp32a);
      temp48len = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp32alen, temp32a, temp48);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                              temp48, finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (adytail != 0.0) {
        temp8len = scale_expansion_zeroelim(4, bb, cdxtail, temp8);
        temp16alen = scale_expansion_zeroelim(temp8len, temp8, adytail,
                                              temp16a);
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp16alen,
                                                temp16a, finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
      if (bdytail != 0.0) {
        temp8len = scale_expansion_zeroelim(4, aa, -cdxtail, temp8);
        temp16alen = scale_expansion_zeroelim(temp8len, temp8, bdytail,
                                              temp16a);
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp16alen,
                                                temp16a, finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }

      temp32alen = scale_expansion_zeroelim(cxtabtlen, cxtabt, cdxtail,
                                            temp32a);
      cxtabttlen = scale_expansion_zeroelim(abttlen, abtt, cdxtail, cxtabtt);
      temp16alen = scale_expansion_zeroelim(cxtabttlen, cxtabtt, 2.0 * cdx,
                                            temp16a);
      temp16blen = scale_expansion_zeroelim(cxtabttlen, cxtabtt, cdxtail,
                                            temp16b);
      temp32blen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp16blen, temp16b, temp32b);
      temp64len = fast_expansion_sum_zeroelim(temp32alen, temp32a,
                                              temp32blen, temp32b, temp64);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp64len,
                                              temp64, finother);
      finswap = finnow; finnow = finother; finother = finswap;
    }
    if (cdytail != 0.0) {
      temp16alen = scale_expansion_zeroelim(cytablen, cytab, cdytail, temp16a);
      cytabtlen = scale_expansion_zeroelim(abtlen, abt, cdytail, cytabt);
      temp32alen = scale_expansion_zeroelim(cytabtlen, cytabt, 2.0 * cdy,
                                            temp32a);
      temp48len = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp32alen, temp32a, temp48);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp48len,
                                              temp48, finother);
      finswap = finnow; finnow = finother; finother = finswap;


      temp32alen = scale_expansion_zeroelim(cytabtlen, cytabt, cdytail,
                                            temp32a);
      cytabttlen = scale_expansion_zeroelim(abttlen, abtt, cdytail, cytabtt);
      temp16alen = scale_expansion_zeroelim(cytabttlen, cytabtt, 2.0 * cdy,
                                            temp16a);
      temp16blen = scale_expansion_zeroelim(cytabttlen, cytabtt, cdytail,
                                            temp16b);
      temp32blen = fast_expansion_sum_zeroelim(temp16alen, temp16a,
                                              temp16blen, temp16b, temp32b);
      temp64len = fast_expansion_sum_zeroelim(temp32alen, temp32a,
                                              temp32blen, temp32b, temp64);
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, temp64len,
                                              temp64, finother);
      finswap = finnow; finnow = finother; finother = finswap;
    }
  }

  return finnow[finlength - 1];
}





double incircle(m, b, pa, pb, pc, pd)
struct mesh *m;
struct behavior *b;
vertex pa;
vertex pb;
vertex pc;
vertex pd;


{
  double adx, bdx, cdx, ady, bdy, cdy;
  double bdxcdy, cdxbdy, cdxady, adxcdy, adxbdy, bdxady;
  double alift, blift, clift;
  double det;
  double permanent, errbound;

  m->incirclecount++;

  adx = pa[0] - pd[0];
  bdx = pb[0] - pd[0];
  cdx = pc[0] - pd[0];
  ady = pa[1] - pd[1];
  bdy = pb[1] - pd[1];
  cdy = pc[1] - pd[1];

  bdxcdy = bdx * cdy;
  cdxbdy = cdx * bdy;
  alift = adx * adx + ady * ady;

  cdxady = cdx * ady;
  adxcdy = adx * cdy;
  blift = bdx * bdx + bdy * bdy;

  adxbdy = adx * bdy;
  bdxady = bdx * ady;
  clift = cdx * cdx + cdy * cdy;

  det = alift * (bdxcdy - cdxbdy)
      + blift * (cdxady - adxcdy)
      + clift * (adxbdy - bdxady);

  if (b->noexact) {
    return det;
  }

  permanent = (((bdxcdy) >= 0.0 ? (bdxcdy) : -(bdxcdy)) + ((cdxbdy) >= 0.0 ? (cdxbdy) : -(cdxbdy))) * alift
            + (((cdxady) >= 0.0 ? (cdxady) : -(cdxady)) + ((adxcdy) >= 0.0 ? (adxcdy) : -(adxcdy))) * blift
            + (((adxbdy) >= 0.0 ? (adxbdy) : -(adxbdy)) + ((bdxady) >= 0.0 ? (bdxady) : -(bdxady))) * clift;
  errbound = iccerrboundA * permanent;
  if ((det > errbound) || (-det > errbound)) {
    return det;
  }

  return incircleadapt(pa, pb, pc, pd, permanent);
}
# 5783 "triangle.c"
double orient3dadapt(pa, pb, pc, pd,
                   aheight, bheight, cheight, dheight, permanent)
vertex pa;
vertex pb;
vertex pc;
vertex pd;
double aheight;
double bheight;
double cheight;
double dheight;
double permanent;


{
  double adx, bdx, cdx, ady, bdy, cdy, adheight, bdheight, cdheight;
  double det, errbound;

  double bdxcdy1, cdxbdy1, cdxady1, adxcdy1, adxbdy1, bdxady1;
  double bdxcdy0, cdxbdy0, cdxady0, adxcdy0, adxbdy0, bdxady0;
  double bc[4], ca[4], ab[4];
  double bc3, ca3, ab3;
  double adet[8], bdet[8], cdet[8];
  int alen, blen, clen;
  double abdet[16];
  int ablen;
  double *finnow, *finother, *finswap;
  double fin1[192], fin2[192];
  int finlength;

  double adxtail, bdxtail, cdxtail;
  double adytail, bdytail, cdytail;
  double adheighttail, bdheighttail, cdheighttail;
  double at_blarge, at_clarge;
  double bt_clarge, bt_alarge;
  double ct_alarge, ct_blarge;
  double at_b[4], at_c[4], bt_c[4], bt_a[4], ct_a[4], ct_b[4];
  int at_blen, at_clen, bt_clen, bt_alen, ct_alen, ct_blen;
  double bdxt_cdy1, cdxt_bdy1, cdxt_ady1;
  double adxt_cdy1, adxt_bdy1, bdxt_ady1;
  double bdxt_cdy0, cdxt_bdy0, cdxt_ady0;
  double adxt_cdy0, adxt_bdy0, bdxt_ady0;
  double bdyt_cdx1, cdyt_bdx1, cdyt_adx1;
  double adyt_cdx1, adyt_bdx1, bdyt_adx1;
  double bdyt_cdx0, cdyt_bdx0, cdyt_adx0;
  double adyt_cdx0, adyt_bdx0, bdyt_adx0;
  double bct[8], cat[8], abt[8];
  int bctlen, catlen, abtlen;
  double bdxt_cdyt1, cdxt_bdyt1, cdxt_adyt1;
  double adxt_cdyt1, adxt_bdyt1, bdxt_adyt1;
  double bdxt_cdyt0, cdxt_bdyt0, cdxt_adyt0;
  double adxt_cdyt0, adxt_bdyt0, bdxt_adyt0;
  double u[4], v[12], w[16];
  double u3;
  int vlength, wlength;
  double negate;

  double bvirt;
  double avirt, bround, around;
  double c;
  double abig;
  double ahi, alo, bhi, blo;
  double err1, err2, err3;
  double _i, _j, _k;
  double _0;

  adx = (double) (pa[0] - pd[0]);
  bdx = (double) (pb[0] - pd[0]);
  cdx = (double) (pc[0] - pd[0]);
  ady = (double) (pa[1] - pd[1]);
  bdy = (double) (pb[1] - pd[1]);
  cdy = (double) (pc[1] - pd[1]);
  adheight = (double) (aheight - dheight);
  bdheight = (double) (bheight - dheight);
  cdheight = (double) (cheight - dheight);

  bdxcdy1 = (double) (bdx * cdy); c = (double) (splitter * bdx); abig = (double) (c - bdx); ahi = c - abig; alo = bdx - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = bdxcdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdxcdy0 = (alo * blo) - err3;
  cdxbdy1 = (double) (cdx * bdy); c = (double) (splitter * cdx); abig = (double) (c - cdx); ahi = c - abig; alo = cdx - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = cdxbdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdxbdy0 = (alo * blo) - err3;
  _i = (double) (bdxcdy0 - cdxbdy0); bvirt = (double) (bdxcdy0 - _i); avirt = _i + bvirt; bround = bvirt - cdxbdy0; around = bdxcdy0 - avirt; bc[0] = around + bround; _j = (double) (bdxcdy1 + _i); bvirt = (double) (_j - bdxcdy1); avirt = _j - bvirt; bround = _i - bvirt; around = bdxcdy1 - avirt; _0 = around + bround; _i = (double) (_0 - cdxbdy1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - cdxbdy1; around = _0 - avirt; bc[1] = around + bround; bc3 = (double) (_j + _i); bvirt = (double) (bc3 - _j); avirt = bc3 - bvirt; bround = _i - bvirt; around = _j - avirt; bc[2] = around + bround;
  bc[3] = bc3;
  alen = scale_expansion_zeroelim(4, bc, adheight, adet);

  cdxady1 = (double) (cdx * ady); c = (double) (splitter * cdx); abig = (double) (c - cdx); ahi = c - abig; alo = cdx - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = cdxady1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdxady0 = (alo * blo) - err3;
  adxcdy1 = (double) (adx * cdy); c = (double) (splitter * adx); abig = (double) (c - adx); ahi = c - abig; alo = adx - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = adxcdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adxcdy0 = (alo * blo) - err3;
  _i = (double) (cdxady0 - adxcdy0); bvirt = (double) (cdxady0 - _i); avirt = _i + bvirt; bround = bvirt - adxcdy0; around = cdxady0 - avirt; ca[0] = around + bround; _j = (double) (cdxady1 + _i); bvirt = (double) (_j - cdxady1); avirt = _j - bvirt; bround = _i - bvirt; around = cdxady1 - avirt; _0 = around + bround; _i = (double) (_0 - adxcdy1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - adxcdy1; around = _0 - avirt; ca[1] = around + bround; ca3 = (double) (_j + _i); bvirt = (double) (ca3 - _j); avirt = ca3 - bvirt; bround = _i - bvirt; around = _j - avirt; ca[2] = around + bround;
  ca[3] = ca3;
  blen = scale_expansion_zeroelim(4, ca, bdheight, bdet);

  adxbdy1 = (double) (adx * bdy); c = (double) (splitter * adx); abig = (double) (c - adx); ahi = c - abig; alo = adx - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = adxbdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adxbdy0 = (alo * blo) - err3;
  bdxady1 = (double) (bdx * ady); c = (double) (splitter * bdx); abig = (double) (c - bdx); ahi = c - abig; alo = bdx - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = bdxady1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdxady0 = (alo * blo) - err3;
  _i = (double) (adxbdy0 - bdxady0); bvirt = (double) (adxbdy0 - _i); avirt = _i + bvirt; bround = bvirt - bdxady0; around = adxbdy0 - avirt; ab[0] = around + bround; _j = (double) (adxbdy1 + _i); bvirt = (double) (_j - adxbdy1); avirt = _j - bvirt; bround = _i - bvirt; around = adxbdy1 - avirt; _0 = around + bround; _i = (double) (_0 - bdxady1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - bdxady1; around = _0 - avirt; ab[1] = around + bround; ab3 = (double) (_j + _i); bvirt = (double) (ab3 - _j); avirt = ab3 - bvirt; bround = _i - bvirt; around = _j - avirt; ab[2] = around + bround;
  ab[3] = ab3;
  clen = scale_expansion_zeroelim(4, ab, cdheight, cdet);

  ablen = fast_expansion_sum_zeroelim(alen, adet, blen, bdet, abdet);
  finlength = fast_expansion_sum_zeroelim(ablen, abdet, clen, cdet, fin1);

  det = estimate(finlength, fin1);
  errbound = o3derrboundB * permanent;
  if ((det >= errbound) || (-det >= errbound)) {
    return det;
  }

  bvirt = (double) (pa[0] - adx); avirt = adx + bvirt; bround = bvirt - pd[0]; around = pa[0] - avirt; adxtail = around + bround;
  bvirt = (double) (pb[0] - bdx); avirt = bdx + bvirt; bround = bvirt - pd[0]; around = pb[0] - avirt; bdxtail = around + bround;
  bvirt = (double) (pc[0] - cdx); avirt = cdx + bvirt; bround = bvirt - pd[0]; around = pc[0] - avirt; cdxtail = around + bround;
  bvirt = (double) (pa[1] - ady); avirt = ady + bvirt; bround = bvirt - pd[1]; around = pa[1] - avirt; adytail = around + bround;
  bvirt = (double) (pb[1] - bdy); avirt = bdy + bvirt; bround = bvirt - pd[1]; around = pb[1] - avirt; bdytail = around + bround;
  bvirt = (double) (pc[1] - cdy); avirt = cdy + bvirt; bround = bvirt - pd[1]; around = pc[1] - avirt; cdytail = around + bround;
  bvirt = (double) (aheight - adheight); avirt = adheight + bvirt; bround = bvirt - dheight; around = aheight - avirt; adheighttail = around + bround;
  bvirt = (double) (bheight - bdheight); avirt = bdheight + bvirt; bround = bvirt - dheight; around = bheight - avirt; bdheighttail = around + bround;
  bvirt = (double) (cheight - cdheight); avirt = cdheight + bvirt; bround = bvirt - dheight; around = cheight - avirt; cdheighttail = around + bround;

  if ((adxtail == 0.0) && (bdxtail == 0.0) && (cdxtail == 0.0) &&
      (adytail == 0.0) && (bdytail == 0.0) && (cdytail == 0.0) &&
      (adheighttail == 0.0) &&
      (bdheighttail == 0.0) &&
      (cdheighttail == 0.0)) {
    return det;
  }

  errbound = o3derrboundC * permanent + resulterrbound * ((det) >= 0.0 ? (det) : -(det));
  det += (adheight * ((bdx * cdytail + cdy * bdxtail) -
                      (bdy * cdxtail + cdx * bdytail)) +
          adheighttail * (bdx * cdy - bdy * cdx)) +
         (bdheight * ((cdx * adytail + ady * cdxtail) -
                      (cdy * adxtail + adx * cdytail)) +
          bdheighttail * (cdx * ady - cdy * adx)) +
         (cdheight * ((adx * bdytail + bdy * adxtail) -
                      (ady * bdxtail + bdx * adytail)) +
          cdheighttail * (adx * bdy - ady * bdx));
  if ((det >= errbound) || (-det >= errbound)) {
    return det;
  }

  finnow = fin1;
  finother = fin2;

  if (adxtail == 0.0) {
    if (adytail == 0.0) {
      at_b[0] = 0.0;
      at_blen = 1;
      at_c[0] = 0.0;
      at_clen = 1;
    } else {
      negate = -adytail;
      at_blarge = (double) (negate * bdx); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * bdx); abig = (double) (c - bdx); bhi = c - abig; blo = bdx - bhi; err1 = at_blarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); at_b[0] = (alo * blo) - err3;
      at_b[1] = at_blarge;
      at_blen = 2;
      at_clarge = (double) (adytail * cdx); c = (double) (splitter * adytail); abig = (double) (c - adytail); ahi = c - abig; alo = adytail - ahi; c = (double) (splitter * cdx); abig = (double) (c - cdx); bhi = c - abig; blo = cdx - bhi; err1 = at_clarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); at_c[0] = (alo * blo) - err3;
      at_c[1] = at_clarge;
      at_clen = 2;
    }
  } else {
    if (adytail == 0.0) {
      at_blarge = (double) (adxtail * bdy); c = (double) (splitter * adxtail); abig = (double) (c - adxtail); ahi = c - abig; alo = adxtail - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = at_blarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); at_b[0] = (alo * blo) - err3;
      at_b[1] = at_blarge;
      at_blen = 2;
      negate = -adxtail;
      at_clarge = (double) (negate * cdy); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = at_clarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); at_c[0] = (alo * blo) - err3;
      at_c[1] = at_clarge;
      at_clen = 2;
    } else {
      adxt_bdy1 = (double) (adxtail * bdy); c = (double) (splitter * adxtail); abig = (double) (c - adxtail); ahi = c - abig; alo = adxtail - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = adxt_bdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adxt_bdy0 = (alo * blo) - err3;
      adyt_bdx1 = (double) (adytail * bdx); c = (double) (splitter * adytail); abig = (double) (c - adytail); ahi = c - abig; alo = adytail - ahi; c = (double) (splitter * bdx); abig = (double) (c - bdx); bhi = c - abig; blo = bdx - bhi; err1 = adyt_bdx1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adyt_bdx0 = (alo * blo) - err3;
      _i = (double) (adxt_bdy0 - adyt_bdx0); bvirt = (double) (adxt_bdy0 - _i); avirt = _i + bvirt; bround = bvirt - adyt_bdx0; around = adxt_bdy0 - avirt; at_b[0] = around + bround; _j = (double) (adxt_bdy1 + _i); bvirt = (double) (_j - adxt_bdy1); avirt = _j - bvirt; bround = _i - bvirt; around = adxt_bdy1 - avirt; _0 = around + bround; _i = (double) (_0 - adyt_bdx1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - adyt_bdx1; around = _0 - avirt; at_b[1] = around + bround; at_blarge = (double) (_j + _i); bvirt = (double) (at_blarge - _j); avirt = at_blarge - bvirt; bround = _i - bvirt; around = _j - avirt; at_b[2] = around + bround;

      at_b[3] = at_blarge;
      at_blen = 4;
      adyt_cdx1 = (double) (adytail * cdx); c = (double) (splitter * adytail); abig = (double) (c - adytail); ahi = c - abig; alo = adytail - ahi; c = (double) (splitter * cdx); abig = (double) (c - cdx); bhi = c - abig; blo = cdx - bhi; err1 = adyt_cdx1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adyt_cdx0 = (alo * blo) - err3;
      adxt_cdy1 = (double) (adxtail * cdy); c = (double) (splitter * adxtail); abig = (double) (c - adxtail); ahi = c - abig; alo = adxtail - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = adxt_cdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adxt_cdy0 = (alo * blo) - err3;
      _i = (double) (adyt_cdx0 - adxt_cdy0); bvirt = (double) (adyt_cdx0 - _i); avirt = _i + bvirt; bround = bvirt - adxt_cdy0; around = adyt_cdx0 - avirt; at_c[0] = around + bround; _j = (double) (adyt_cdx1 + _i); bvirt = (double) (_j - adyt_cdx1); avirt = _j - bvirt; bround = _i - bvirt; around = adyt_cdx1 - avirt; _0 = around + bround; _i = (double) (_0 - adxt_cdy1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - adxt_cdy1; around = _0 - avirt; at_c[1] = around + bround; at_clarge = (double) (_j + _i); bvirt = (double) (at_clarge - _j); avirt = at_clarge - bvirt; bround = _i - bvirt; around = _j - avirt; at_c[2] = around + bround;

      at_c[3] = at_clarge;
      at_clen = 4;
    }
  }
  if (bdxtail == 0.0) {
    if (bdytail == 0.0) {
      bt_c[0] = 0.0;
      bt_clen = 1;
      bt_a[0] = 0.0;
      bt_alen = 1;
    } else {
      negate = -bdytail;
      bt_clarge = (double) (negate * cdx); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * cdx); abig = (double) (c - cdx); bhi = c - abig; blo = cdx - bhi; err1 = bt_clarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bt_c[0] = (alo * blo) - err3;
      bt_c[1] = bt_clarge;
      bt_clen = 2;
      bt_alarge = (double) (bdytail * adx); c = (double) (splitter * bdytail); abig = (double) (c - bdytail); ahi = c - abig; alo = bdytail - ahi; c = (double) (splitter * adx); abig = (double) (c - adx); bhi = c - abig; blo = adx - bhi; err1 = bt_alarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bt_a[0] = (alo * blo) - err3;
      bt_a[1] = bt_alarge;
      bt_alen = 2;
    }
  } else {
    if (bdytail == 0.0) {
      bt_clarge = (double) (bdxtail * cdy); c = (double) (splitter * bdxtail); abig = (double) (c - bdxtail); ahi = c - abig; alo = bdxtail - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = bt_clarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bt_c[0] = (alo * blo) - err3;
      bt_c[1] = bt_clarge;
      bt_clen = 2;
      negate = -bdxtail;
      bt_alarge = (double) (negate * ady); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = bt_alarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bt_a[0] = (alo * blo) - err3;
      bt_a[1] = bt_alarge;
      bt_alen = 2;
    } else {
      bdxt_cdy1 = (double) (bdxtail * cdy); c = (double) (splitter * bdxtail); abig = (double) (c - bdxtail); ahi = c - abig; alo = bdxtail - ahi; c = (double) (splitter * cdy); abig = (double) (c - cdy); bhi = c - abig; blo = cdy - bhi; err1 = bdxt_cdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdxt_cdy0 = (alo * blo) - err3;
      bdyt_cdx1 = (double) (bdytail * cdx); c = (double) (splitter * bdytail); abig = (double) (c - bdytail); ahi = c - abig; alo = bdytail - ahi; c = (double) (splitter * cdx); abig = (double) (c - cdx); bhi = c - abig; blo = cdx - bhi; err1 = bdyt_cdx1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdyt_cdx0 = (alo * blo) - err3;
      _i = (double) (bdxt_cdy0 - bdyt_cdx0); bvirt = (double) (bdxt_cdy0 - _i); avirt = _i + bvirt; bround = bvirt - bdyt_cdx0; around = bdxt_cdy0 - avirt; bt_c[0] = around + bround; _j = (double) (bdxt_cdy1 + _i); bvirt = (double) (_j - bdxt_cdy1); avirt = _j - bvirt; bround = _i - bvirt; around = bdxt_cdy1 - avirt; _0 = around + bround; _i = (double) (_0 - bdyt_cdx1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - bdyt_cdx1; around = _0 - avirt; bt_c[1] = around + bround; bt_clarge = (double) (_j + _i); bvirt = (double) (bt_clarge - _j); avirt = bt_clarge - bvirt; bround = _i - bvirt; around = _j - avirt; bt_c[2] = around + bround;

      bt_c[3] = bt_clarge;
      bt_clen = 4;
      bdyt_adx1 = (double) (bdytail * adx); c = (double) (splitter * bdytail); abig = (double) (c - bdytail); ahi = c - abig; alo = bdytail - ahi; c = (double) (splitter * adx); abig = (double) (c - adx); bhi = c - abig; blo = adx - bhi; err1 = bdyt_adx1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdyt_adx0 = (alo * blo) - err3;
      bdxt_ady1 = (double) (bdxtail * ady); c = (double) (splitter * bdxtail); abig = (double) (c - bdxtail); ahi = c - abig; alo = bdxtail - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = bdxt_ady1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdxt_ady0 = (alo * blo) - err3;
      _i = (double) (bdyt_adx0 - bdxt_ady0); bvirt = (double) (bdyt_adx0 - _i); avirt = _i + bvirt; bround = bvirt - bdxt_ady0; around = bdyt_adx0 - avirt; bt_a[0] = around + bround; _j = (double) (bdyt_adx1 + _i); bvirt = (double) (_j - bdyt_adx1); avirt = _j - bvirt; bround = _i - bvirt; around = bdyt_adx1 - avirt; _0 = around + bround; _i = (double) (_0 - bdxt_ady1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - bdxt_ady1; around = _0 - avirt; bt_a[1] = around + bround; bt_alarge = (double) (_j + _i); bvirt = (double) (bt_alarge - _j); avirt = bt_alarge - bvirt; bround = _i - bvirt; around = _j - avirt; bt_a[2] = around + bround;

      bt_a[3] = bt_alarge;
      bt_alen = 4;
    }
  }
  if (cdxtail == 0.0) {
    if (cdytail == 0.0) {
      ct_a[0] = 0.0;
      ct_alen = 1;
      ct_b[0] = 0.0;
      ct_blen = 1;
    } else {
      negate = -cdytail;
      ct_alarge = (double) (negate * adx); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * adx); abig = (double) (c - adx); bhi = c - abig; blo = adx - bhi; err1 = ct_alarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ct_a[0] = (alo * blo) - err3;
      ct_a[1] = ct_alarge;
      ct_alen = 2;
      ct_blarge = (double) (cdytail * bdx); c = (double) (splitter * cdytail); abig = (double) (c - cdytail); ahi = c - abig; alo = cdytail - ahi; c = (double) (splitter * bdx); abig = (double) (c - bdx); bhi = c - abig; blo = bdx - bhi; err1 = ct_blarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ct_b[0] = (alo * blo) - err3;
      ct_b[1] = ct_blarge;
      ct_blen = 2;
    }
  } else {
    if (cdytail == 0.0) {
      ct_alarge = (double) (cdxtail * ady); c = (double) (splitter * cdxtail); abig = (double) (c - cdxtail); ahi = c - abig; alo = cdxtail - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = ct_alarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ct_a[0] = (alo * blo) - err3;
      ct_a[1] = ct_alarge;
      ct_alen = 2;
      negate = -cdxtail;
      ct_blarge = (double) (negate * bdy); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = ct_blarge - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); ct_b[0] = (alo * blo) - err3;
      ct_b[1] = ct_blarge;
      ct_blen = 2;
    } else {
      cdxt_ady1 = (double) (cdxtail * ady); c = (double) (splitter * cdxtail); abig = (double) (c - cdxtail); ahi = c - abig; alo = cdxtail - ahi; c = (double) (splitter * ady); abig = (double) (c - ady); bhi = c - abig; blo = ady - bhi; err1 = cdxt_ady1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdxt_ady0 = (alo * blo) - err3;
      cdyt_adx1 = (double) (cdytail * adx); c = (double) (splitter * cdytail); abig = (double) (c - cdytail); ahi = c - abig; alo = cdytail - ahi; c = (double) (splitter * adx); abig = (double) (c - adx); bhi = c - abig; blo = adx - bhi; err1 = cdyt_adx1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdyt_adx0 = (alo * blo) - err3;
      _i = (double) (cdxt_ady0 - cdyt_adx0); bvirt = (double) (cdxt_ady0 - _i); avirt = _i + bvirt; bround = bvirt - cdyt_adx0; around = cdxt_ady0 - avirt; ct_a[0] = around + bround; _j = (double) (cdxt_ady1 + _i); bvirt = (double) (_j - cdxt_ady1); avirt = _j - bvirt; bround = _i - bvirt; around = cdxt_ady1 - avirt; _0 = around + bround; _i = (double) (_0 - cdyt_adx1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - cdyt_adx1; around = _0 - avirt; ct_a[1] = around + bround; ct_alarge = (double) (_j + _i); bvirt = (double) (ct_alarge - _j); avirt = ct_alarge - bvirt; bround = _i - bvirt; around = _j - avirt; ct_a[2] = around + bround;

      ct_a[3] = ct_alarge;
      ct_alen = 4;
      cdyt_bdx1 = (double) (cdytail * bdx); c = (double) (splitter * cdytail); abig = (double) (c - cdytail); ahi = c - abig; alo = cdytail - ahi; c = (double) (splitter * bdx); abig = (double) (c - bdx); bhi = c - abig; blo = bdx - bhi; err1 = cdyt_bdx1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdyt_bdx0 = (alo * blo) - err3;
      cdxt_bdy1 = (double) (cdxtail * bdy); c = (double) (splitter * cdxtail); abig = (double) (c - cdxtail); ahi = c - abig; alo = cdxtail - ahi; c = (double) (splitter * bdy); abig = (double) (c - bdy); bhi = c - abig; blo = bdy - bhi; err1 = cdxt_bdy1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdxt_bdy0 = (alo * blo) - err3;
      _i = (double) (cdyt_bdx0 - cdxt_bdy0); bvirt = (double) (cdyt_bdx0 - _i); avirt = _i + bvirt; bround = bvirt - cdxt_bdy0; around = cdyt_bdx0 - avirt; ct_b[0] = around + bround; _j = (double) (cdyt_bdx1 + _i); bvirt = (double) (_j - cdyt_bdx1); avirt = _j - bvirt; bround = _i - bvirt; around = cdyt_bdx1 - avirt; _0 = around + bround; _i = (double) (_0 - cdxt_bdy1); bvirt = (double) (_0 - _i); avirt = _i + bvirt; bround = bvirt - cdxt_bdy1; around = _0 - avirt; ct_b[1] = around + bround; ct_blarge = (double) (_j + _i); bvirt = (double) (ct_blarge - _j); avirt = ct_blarge - bvirt; bround = _i - bvirt; around = _j - avirt; ct_b[2] = around + bround;

      ct_b[3] = ct_blarge;
      ct_blen = 4;
    }
  }

  bctlen = fast_expansion_sum_zeroelim(bt_clen, bt_c, ct_blen, ct_b, bct);
  wlength = scale_expansion_zeroelim(bctlen, bct, adheight, w);
  finlength = fast_expansion_sum_zeroelim(finlength, finnow, wlength, w,
                                          finother);
  finswap = finnow; finnow = finother; finother = finswap;

  catlen = fast_expansion_sum_zeroelim(ct_alen, ct_a, at_clen, at_c, cat);
  wlength = scale_expansion_zeroelim(catlen, cat, bdheight, w);
  finlength = fast_expansion_sum_zeroelim(finlength, finnow, wlength, w,
                                          finother);
  finswap = finnow; finnow = finother; finother = finswap;

  abtlen = fast_expansion_sum_zeroelim(at_blen, at_b, bt_alen, bt_a, abt);
  wlength = scale_expansion_zeroelim(abtlen, abt, cdheight, w);
  finlength = fast_expansion_sum_zeroelim(finlength, finnow, wlength, w,
                                          finother);
  finswap = finnow; finnow = finother; finother = finswap;

  if (adheighttail != 0.0) {
    vlength = scale_expansion_zeroelim(4, bc, adheighttail, v);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, vlength, v,
                                            finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (bdheighttail != 0.0) {
    vlength = scale_expansion_zeroelim(4, ca, bdheighttail, v);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, vlength, v,
                                            finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (cdheighttail != 0.0) {
    vlength = scale_expansion_zeroelim(4, ab, cdheighttail, v);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, vlength, v,
                                            finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }

  if (adxtail != 0.0) {
    if (bdytail != 0.0) {
      adxt_bdyt1 = (double) (adxtail * bdytail); c = (double) (splitter * adxtail); abig = (double) (c - adxtail); ahi = c - abig; alo = adxtail - ahi; c = (double) (splitter * bdytail); abig = (double) (c - bdytail); bhi = c - abig; blo = bdytail - bhi; err1 = adxt_bdyt1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adxt_bdyt0 = (alo * blo) - err3;
      c = (double) (splitter * cdheight); abig = (double) (c - cdheight); bhi = c - abig; blo = cdheight - bhi; _i = (double) (adxt_bdyt0 * cdheight); c = (double) (splitter * adxt_bdyt0); abig = (double) (c - adxt_bdyt0); ahi = c - abig; alo = adxt_bdyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (adxt_bdyt1 * cdheight); c = (double) (splitter * adxt_bdyt1); abig = (double) (c - adxt_bdyt1); ahi = c - abig; alo = adxt_bdyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;
      u[3] = u3;
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                              finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (cdheighttail != 0.0) {
        c = (double) (splitter * cdheighttail); abig = (double) (c - cdheighttail); bhi = c - abig; blo = cdheighttail - bhi; _i = (double) (adxt_bdyt0 * cdheighttail); c = (double) (splitter * adxt_bdyt0); abig = (double) (c - adxt_bdyt0); ahi = c - abig; alo = adxt_bdyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (adxt_bdyt1 * cdheighttail); c = (double) (splitter * adxt_bdyt1); abig = (double) (c - adxt_bdyt1); ahi = c - abig; alo = adxt_bdyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;

        u[3] = u3;
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                                finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
    }
    if (cdytail != 0.0) {
      negate = -adxtail;
      adxt_cdyt1 = (double) (negate * cdytail); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * cdytail); abig = (double) (c - cdytail); bhi = c - abig; blo = cdytail - bhi; err1 = adxt_cdyt1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); adxt_cdyt0 = (alo * blo) - err3;
      c = (double) (splitter * bdheight); abig = (double) (c - bdheight); bhi = c - abig; blo = bdheight - bhi; _i = (double) (adxt_cdyt0 * bdheight); c = (double) (splitter * adxt_cdyt0); abig = (double) (c - adxt_cdyt0); ahi = c - abig; alo = adxt_cdyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (adxt_cdyt1 * bdheight); c = (double) (splitter * adxt_cdyt1); abig = (double) (c - adxt_cdyt1); ahi = c - abig; alo = adxt_cdyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;
      u[3] = u3;
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                              finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (bdheighttail != 0.0) {
        c = (double) (splitter * bdheighttail); abig = (double) (c - bdheighttail); bhi = c - abig; blo = bdheighttail - bhi; _i = (double) (adxt_cdyt0 * bdheighttail); c = (double) (splitter * adxt_cdyt0); abig = (double) (c - adxt_cdyt0); ahi = c - abig; alo = adxt_cdyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (adxt_cdyt1 * bdheighttail); c = (double) (splitter * adxt_cdyt1); abig = (double) (c - adxt_cdyt1); ahi = c - abig; alo = adxt_cdyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;

        u[3] = u3;
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                                finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
    }
  }
  if (bdxtail != 0.0) {
    if (cdytail != 0.0) {
      bdxt_cdyt1 = (double) (bdxtail * cdytail); c = (double) (splitter * bdxtail); abig = (double) (c - bdxtail); ahi = c - abig; alo = bdxtail - ahi; c = (double) (splitter * cdytail); abig = (double) (c - cdytail); bhi = c - abig; blo = cdytail - bhi; err1 = bdxt_cdyt1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdxt_cdyt0 = (alo * blo) - err3;
      c = (double) (splitter * adheight); abig = (double) (c - adheight); bhi = c - abig; blo = adheight - bhi; _i = (double) (bdxt_cdyt0 * adheight); c = (double) (splitter * bdxt_cdyt0); abig = (double) (c - bdxt_cdyt0); ahi = c - abig; alo = bdxt_cdyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (bdxt_cdyt1 * adheight); c = (double) (splitter * bdxt_cdyt1); abig = (double) (c - bdxt_cdyt1); ahi = c - abig; alo = bdxt_cdyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;
      u[3] = u3;
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                              finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (adheighttail != 0.0) {
        c = (double) (splitter * adheighttail); abig = (double) (c - adheighttail); bhi = c - abig; blo = adheighttail - bhi; _i = (double) (bdxt_cdyt0 * adheighttail); c = (double) (splitter * bdxt_cdyt0); abig = (double) (c - bdxt_cdyt0); ahi = c - abig; alo = bdxt_cdyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (bdxt_cdyt1 * adheighttail); c = (double) (splitter * bdxt_cdyt1); abig = (double) (c - bdxt_cdyt1); ahi = c - abig; alo = bdxt_cdyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;

        u[3] = u3;
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                                finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
    }
    if (adytail != 0.0) {
      negate = -bdxtail;
      bdxt_adyt1 = (double) (negate * adytail); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * adytail); abig = (double) (c - adytail); bhi = c - abig; blo = adytail - bhi; err1 = bdxt_adyt1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); bdxt_adyt0 = (alo * blo) - err3;
      c = (double) (splitter * cdheight); abig = (double) (c - cdheight); bhi = c - abig; blo = cdheight - bhi; _i = (double) (bdxt_adyt0 * cdheight); c = (double) (splitter * bdxt_adyt0); abig = (double) (c - bdxt_adyt0); ahi = c - abig; alo = bdxt_adyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (bdxt_adyt1 * cdheight); c = (double) (splitter * bdxt_adyt1); abig = (double) (c - bdxt_adyt1); ahi = c - abig; alo = bdxt_adyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;
      u[3] = u3;
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                              finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (cdheighttail != 0.0) {
        c = (double) (splitter * cdheighttail); abig = (double) (c - cdheighttail); bhi = c - abig; blo = cdheighttail - bhi; _i = (double) (bdxt_adyt0 * cdheighttail); c = (double) (splitter * bdxt_adyt0); abig = (double) (c - bdxt_adyt0); ahi = c - abig; alo = bdxt_adyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (bdxt_adyt1 * cdheighttail); c = (double) (splitter * bdxt_adyt1); abig = (double) (c - bdxt_adyt1); ahi = c - abig; alo = bdxt_adyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;

        u[3] = u3;
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                                finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
    }
  }
  if (cdxtail != 0.0) {
    if (adytail != 0.0) {
      cdxt_adyt1 = (double) (cdxtail * adytail); c = (double) (splitter * cdxtail); abig = (double) (c - cdxtail); ahi = c - abig; alo = cdxtail - ahi; c = (double) (splitter * adytail); abig = (double) (c - adytail); bhi = c - abig; blo = adytail - bhi; err1 = cdxt_adyt1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdxt_adyt0 = (alo * blo) - err3;
      c = (double) (splitter * bdheight); abig = (double) (c - bdheight); bhi = c - abig; blo = bdheight - bhi; _i = (double) (cdxt_adyt0 * bdheight); c = (double) (splitter * cdxt_adyt0); abig = (double) (c - cdxt_adyt0); ahi = c - abig; alo = cdxt_adyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (cdxt_adyt1 * bdheight); c = (double) (splitter * cdxt_adyt1); abig = (double) (c - cdxt_adyt1); ahi = c - abig; alo = cdxt_adyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;
      u[3] = u3;
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                              finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (bdheighttail != 0.0) {
        c = (double) (splitter * bdheighttail); abig = (double) (c - bdheighttail); bhi = c - abig; blo = bdheighttail - bhi; _i = (double) (cdxt_adyt0 * bdheighttail); c = (double) (splitter * cdxt_adyt0); abig = (double) (c - cdxt_adyt0); ahi = c - abig; alo = cdxt_adyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (cdxt_adyt1 * bdheighttail); c = (double) (splitter * cdxt_adyt1); abig = (double) (c - cdxt_adyt1); ahi = c - abig; alo = cdxt_adyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;

        u[3] = u3;
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                                finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
    }
    if (bdytail != 0.0) {
      negate = -cdxtail;
      cdxt_bdyt1 = (double) (negate * bdytail); c = (double) (splitter * negate); abig = (double) (c - negate); ahi = c - abig; alo = negate - ahi; c = (double) (splitter * bdytail); abig = (double) (c - bdytail); bhi = c - abig; blo = bdytail - bhi; err1 = cdxt_bdyt1 - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); cdxt_bdyt0 = (alo * blo) - err3;
      c = (double) (splitter * adheight); abig = (double) (c - adheight); bhi = c - abig; blo = adheight - bhi; _i = (double) (cdxt_bdyt0 * adheight); c = (double) (splitter * cdxt_bdyt0); abig = (double) (c - cdxt_bdyt0); ahi = c - abig; alo = cdxt_bdyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (cdxt_bdyt1 * adheight); c = (double) (splitter * cdxt_bdyt1); abig = (double) (c - cdxt_bdyt1); ahi = c - abig; alo = cdxt_bdyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;
      u[3] = u3;
      finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                              finother);
      finswap = finnow; finnow = finother; finother = finswap;
      if (adheighttail != 0.0) {
        c = (double) (splitter * adheighttail); abig = (double) (c - adheighttail); bhi = c - abig; blo = adheighttail - bhi; _i = (double) (cdxt_bdyt0 * adheighttail); c = (double) (splitter * cdxt_bdyt0); abig = (double) (c - cdxt_bdyt0); ahi = c - abig; alo = cdxt_bdyt0 - ahi; err1 = _i - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); u[0] = (alo * blo) - err3; _j = (double) (cdxt_bdyt1 * adheighttail); c = (double) (splitter * cdxt_bdyt1); abig = (double) (c - cdxt_bdyt1); ahi = c - abig; alo = cdxt_bdyt1 - ahi; err1 = _j - (ahi * bhi); err2 = err1 - (alo * bhi); err3 = err2 - (ahi * blo); _0 = (alo * blo) - err3; _k = (double) (_i + _0); bvirt = (double) (_k - _i); avirt = _k - bvirt; bround = _0 - bvirt; around = _i - avirt; u[1] = around + bround; u3 = (double) (_j + _k); bvirt = u3 - _j; u[2] = _k - bvirt;

        u[3] = u3;
        finlength = fast_expansion_sum_zeroelim(finlength, finnow, 4, u,
                                                finother);
        finswap = finnow; finnow = finother; finother = finswap;
      }
    }
  }

  if (adheighttail != 0.0) {
    wlength = scale_expansion_zeroelim(bctlen, bct, adheighttail, w);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, wlength, w,
                                            finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (bdheighttail != 0.0) {
    wlength = scale_expansion_zeroelim(catlen, cat, bdheighttail, w);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, wlength, w,
                                            finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }
  if (cdheighttail != 0.0) {
    wlength = scale_expansion_zeroelim(abtlen, abt, cdheighttail, w);
    finlength = fast_expansion_sum_zeroelim(finlength, finnow, wlength, w,
                                            finother);
    finswap = finnow; finnow = finother; finother = finswap;
  }

  return finnow[finlength - 1];
}






double orient3d(m, b, pa, pb, pc, pd, aheight, bheight, cheight, dheight)
struct mesh *m;
struct behavior *b;
vertex pa;
vertex pb;
vertex pc;
vertex pd;
double aheight;
double bheight;
double cheight;
double dheight;


{
  double adx, bdx, cdx, ady, bdy, cdy, adheight, bdheight, cdheight;
  double bdxcdy, cdxbdy, cdxady, adxcdy, adxbdy, bdxady;
  double det;
  double permanent, errbound;

  m->orient3dcount++;

  adx = pa[0] - pd[0];
  bdx = pb[0] - pd[0];
  cdx = pc[0] - pd[0];
  ady = pa[1] - pd[1];
  bdy = pb[1] - pd[1];
  cdy = pc[1] - pd[1];
  adheight = aheight - dheight;
  bdheight = bheight - dheight;
  cdheight = cheight - dheight;

  bdxcdy = bdx * cdy;
  cdxbdy = cdx * bdy;

  cdxady = cdx * ady;
  adxcdy = adx * cdy;

  adxbdy = adx * bdy;
  bdxady = bdx * ady;

  det = adheight * (bdxcdy - cdxbdy)
      + bdheight * (cdxady - adxcdy)
      + cdheight * (adxbdy - bdxady);

  if (b->noexact) {
    return det;
  }

  permanent = (((bdxcdy) >= 0.0 ? (bdxcdy) : -(bdxcdy)) + ((cdxbdy) >= 0.0 ? (cdxbdy) : -(cdxbdy))) * ((adheight) >= 0.0 ? (adheight) : -(adheight))
            + (((cdxady) >= 0.0 ? (cdxady) : -(cdxady)) + ((adxcdy) >= 0.0 ? (adxcdy) : -(adxcdy))) * ((bdheight) >= 0.0 ? (bdheight) : -(bdheight))
            + (((adxbdy) >= 0.0 ? (adxbdy) : -(adxbdy)) + ((bdxady) >= 0.0 ? (bdxady) : -(bdxady))) * ((cdheight) >= 0.0 ? (cdheight) : -(cdheight));
  errbound = o3derrboundA * permanent;
  if ((det > errbound) || (-det > errbound)) {
    return det;
  }

  return orient3dadapt(pa, pb, pc, pd, aheight, bheight, cheight, dheight,
                       permanent);
}
# 6290 "triangle.c"
double nonregular(m, b, pa, pb, pc, pd)
struct mesh *m;
struct behavior *b;
vertex pa;
vertex pb;
vertex pc;
vertex pd;


{
  if (b->weighted == 0) {
    return incircle(m, b, pa, pb, pc, pd);
  } else if (b->weighted == 1) {
    return orient3d(m, b, pa, pb, pc, pd,
                    pa[0] * pa[0] + pa[1] * pa[1] - pa[2],
                    pb[0] * pb[0] + pb[1] * pb[1] - pb[2],
                    pc[0] * pc[0] + pc[1] * pc[1] - pc[2],
                    pd[0] * pd[0] + pd[1] * pd[1] - pd[2]);
  } else {
    return orient3d(m, b, pa, pb, pc, pd, pa[2], pb[2], pc[2], pd[2]);
  }
}
# 6332 "triangle.c"
void findcircumcenter(m, b, torg, tdest, tapex, circumcenter, xi, eta, minedge)
struct mesh *m;
struct behavior *b;
vertex torg;
vertex tdest;
vertex tapex;
vertex circumcenter;
double *xi;
double *eta;
double *minedge;


{
  double xdo, ydo, xao, yao;
  double dodist, aodist, dadist;
  double denominator;
  double dx, dy;

  m->circumcentercount++;


  xdo = tdest[0] - torg[0];
  ydo = tdest[1] - torg[1];
  xao = tapex[0] - torg[0];
  yao = tapex[1] - torg[1];
  dodist = xdo * xdo + ydo * ydo;
  aodist = xao * xao + yao * yao;
  dadist = (tdest[0] - tapex[0]) * (tdest[0] - tapex[0]) +
           (tdest[1] - tapex[1]) * (tdest[1] - tapex[1]);
  if (b->noexact) {
    denominator = 0.5 / (xdo * yao - xao * ydo);
  } else {



    denominator = 0.5 / counterclockwise(m, b, tdest, tapex, torg);

    m->counterclockcount--;
  }
  circumcenter[0] = torg[0] - (ydo * aodist - yao * dodist) * denominator;
  circumcenter[1] = torg[1] + (xdo * aodist - xao * dodist) * denominator;






  dx = circumcenter[0] - torg[0];
  dy = circumcenter[1] - torg[1];
  *xi = (dx * yao - xao * dy) * (2.0 * denominator);
  *eta = (xdo * dy - dx * ydo) * (2.0 * denominator);






  *minedge = ((dodist < aodist) && (dodist < dadist)) ? dodist :
             (aodist < dadist) ? aodist : dadist;
}
# 6406 "triangle.c"
void triangleinit(m)
struct mesh *m;


{
  m->vertices.maxitems = m->triangles.maxitems = m->subsegs.maxitems =
    m->viri.maxitems = m->badsubsegs.maxitems = m->badtriangles.maxitems =
    m->flipstackers.maxitems = m->splaynodes.maxitems = 0l;
  m->vertices.itembytes = m->triangles.itembytes = m->subsegs.itembytes =
    m->viri.itembytes = m->badsubsegs.itembytes = m->badtriangles.itembytes =
    m->flipstackers.itembytes = m->splaynodes.itembytes = 0;
  m->recenttri.tri = (triangle *) ((void *)0);
  m->undeads = 0;
  m->samples = 1;
  m->checksegments = 0;
  m->checkquality = 0;
  m->incirclecount = m->counterclockcount = m->orient3dcount = 0;
  m->hyperbolacount = m->circletopcount = m->circumcentercount = 0;
  randomseed = 1;

  exactinit();
}
# 6442 "triangle.c"
unsigned long randomnation(choices)
unsigned int choices;


{
  randomseed = (randomseed * 1366l + 150889l) % 714025l;
  return randomseed / (714025l / choices + 1);
}
# 6466 "triangle.c"
void checkmesh(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri triangleloop;
  struct otri oppotri, oppooppotri;
  vertex triorg, tridest, triapex;
  vertex oppoorg, oppodest;
  int horrors;
  int saveexact;
  triangle ptr;


  saveexact = b->noexact;
  b->noexact = 0;
  if (!b->quiet) {
    fprintf(stderr, "  Checking consistency of mesh...\n");
  }
  horrors = 0;

  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  while (triangleloop.tri != (triangle *) ((void *)0)) {

    for (triangleloop.orient = 0; triangleloop.orient < 3;
         triangleloop.orient++) {
      triorg = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
      tridest = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];
      if (triangleloop.orient == 0) {

        triapex = (vertex) (triangleloop).tri[(triangleloop).orient + 3];
        if (counterclockwise(m, b, triorg, tridest, triapex) <= 0.0) {
          fprintf(stderr, "  !! !! Inverted ");
          printtriangle(m, b, &triangleloop);
          horrors++;
        }
      }

      ptr = (triangleloop).tri[(triangleloop).orient]; (oppotri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (oppotri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (oppotri).orient);;
      if (oppotri.tri != m->dummytri) {

        ptr = (oppotri).tri[(oppotri).orient]; (oppooppotri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (oppooppotri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (oppooppotri).orient);;
        if ((triangleloop.tri != oppooppotri.tri)
            || (triangleloop.orient != oppooppotri.orient)) {
          fprintf(stderr, "  !! !! Asymmetric triangle-triangle bond:\n");
          if (triangleloop.tri == oppooppotri.tri) {
            fprintf(stderr, "   (Right triangle, wrong orientation)\n");
          }
          fprintf(stderr, "    First ");
          printtriangle(m, b, &triangleloop);
          fprintf(stderr, "    Second (nonreciprocating) ");
          printtriangle(m, b, &oppotri);
          horrors++;
        }


        oppoorg = (vertex) (oppotri).tri[plus1mod3[(oppotri).orient] + 3];
        oppodest = (vertex) (oppotri).tri[minus1mod3[(oppotri).orient] + 3];
        if ((triorg != oppodest) || (tridest != oppoorg)) {
          fprintf(stderr, "  !! !! Mismatched edge coordinates between two triangles:\n"
                 );
          fprintf(stderr, "    First mismatched ");
          printtriangle(m, b, &triangleloop);
          fprintf(stderr, "    Second mismatched ");
          printtriangle(m, b, &oppotri);
          horrors++;
        }
      }
    }
    triangleloop.tri = triangletraverse(m);
  }
  if (horrors == 0) {
    if (!b->quiet) {
      fprintf(stderr, "  In my studied opinion, the mesh appears to be consistent.\n");
    }
  } else if (horrors == 1) {
    fprintf(stderr, "  !! !! !! !! Precisely one festering wound discovered.\n");
  } else {
    fprintf(stderr, "  !! !! !! !! %d abominations witnessed.\n", horrors);
  }

  b->noexact = saveexact;
}
# 6565 "triangle.c"
void checkdelaunay(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri triangleloop;
  struct otri oppotri;
  struct osub opposubseg;
  vertex triorg, tridest, triapex;
  vertex oppoapex;
  int shouldbedelaunay;
  int horrors;
  int saveexact;
  triangle ptr;
  subseg sptr;


  saveexact = b->noexact;
  b->noexact = 0;
  if (!b->quiet) {
    fprintf(stderr, "  Checking Delaunay property of mesh...\n");
  }
  horrors = 0;

  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  while (triangleloop.tri != (triangle *) ((void *)0)) {

    for (triangleloop.orient = 0; triangleloop.orient < 3;
         triangleloop.orient++) {
      triorg = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
      tridest = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];
      triapex = (vertex) (triangleloop).tri[(triangleloop).orient + 3];
      ptr = (triangleloop).tri[(triangleloop).orient]; (oppotri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (oppotri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (oppotri).orient);;
      oppoapex = (vertex) (oppotri).tri[(oppotri).orient + 3];



      shouldbedelaunay = (oppotri.tri != m->dummytri) &&
            !((oppotri.tri)[1] == (triangle) ((void *)0)) && (triangleloop.tri < oppotri.tri) &&
            (triorg != m->infvertex1) && (triorg != m->infvertex2) &&
            (triorg != m->infvertex3) &&
            (tridest != m->infvertex1) && (tridest != m->infvertex2) &&
            (tridest != m->infvertex3) &&
            (triapex != m->infvertex1) && (triapex != m->infvertex2) &&
            (triapex != m->infvertex3) &&
            (oppoapex != m->infvertex1) && (oppoapex != m->infvertex2) &&
            (oppoapex != m->infvertex3);
      if (m->checksegments && shouldbedelaunay) {


        sptr = (subseg) (triangleloop).tri[6 + (triangleloop).orient]; (opposubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (opposubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
        if (opposubseg.ss != m->dummysub){
          shouldbedelaunay = 0;
        }
      }
      if (shouldbedelaunay) {
        if (nonregular(m, b, triorg, tridest, triapex, oppoapex) > 0.0) {
          if (!b->weighted) {
            fprintf(stderr, "  !! !! Non-Delaunay pair of triangles:\n");
            fprintf(stderr, "    First non-Delaunay ");
            printtriangle(m, b, &triangleloop);
            fprintf(stderr, "    Second non-Delaunay ");
          } else {
            fprintf(stderr, "  !! !! Non-regular pair of triangles:\n");
            fprintf(stderr, "    First non-regular ");
            printtriangle(m, b, &triangleloop);
            fprintf(stderr, "    Second non-regular ");
          }
          printtriangle(m, b, &oppotri);
          horrors++;
        }
      }
    }
    triangleloop.tri = triangletraverse(m);
  }
  if (horrors == 0) {
    if (!b->quiet) {
      fprintf(stderr,
  "  By virtue of my perceptive intelligence, I declare the mesh Delaunay.\n");
    }
  } else if (horrors == 1) {
    fprintf(stderr,
         "  !! !! !! !! Precisely one terrifying transgression identified.\n");
  } else {
    fprintf(stderr, "  !! !! !! !! %d obscenities viewed with horror.\n", horrors);
  }

  b->noexact = saveexact;
}
# 6676 "triangle.c"
void enqueuebadtriang(m, b, badtri)
struct mesh *m;
struct behavior *b;
struct badtriang *badtri;


{
  int queuenumber;
  int i;

  if (b->verbose > 2) {
    fprintf(stderr, "  Queueing bad triangle:\n");
    fprintf(stderr, "    (%.12g, %.12g) (%.12g, %.12g) (%.12g, %.12g)\n",
           badtri->triangorg[0], badtri->triangorg[1],
           badtri->triangdest[0], badtri->triangdest[1],
           badtri->triangapex[0], badtri->triangapex[1]);
  }

  if (badtri->key > 0.6) {
    queuenumber = (int) (160.0 * (badtri->key - 0.6));
    if (queuenumber > 63) {
      queuenumber = 63;
    }
  } else {

    queuenumber = 0;
  }


  if (m->queuefront[queuenumber] == (struct badtriang *) ((void *)0)) {


    if (queuenumber > m->firstnonemptyq) {

      m->nextnonemptyq[queuenumber] = m->firstnonemptyq;
      m->firstnonemptyq = queuenumber;
    } else {


      i = queuenumber + 1;
      while (m->queuefront[i] == (struct badtriang *) ((void *)0)) {
        i++;
      }

      m->nextnonemptyq[queuenumber] = m->nextnonemptyq[i];
      m->nextnonemptyq[i] = queuenumber;
    }

    m->queuefront[queuenumber] = badtri;
  } else {

    m->queuetail[queuenumber]->nexttriang = badtri;
  }

  m->queuetail[queuenumber] = badtri;

  badtri->nexttriang = (struct badtriang *) ((void *)0);
}
# 6752 "triangle.c"
void enqueuebadtri(m, b, enqtri, angle, enqapex, enqorg, enqdest)
struct mesh *m;
struct behavior *b;
struct otri *enqtri;
double angle;
vertex enqapex;
vertex enqorg;
vertex enqdest;


{
  struct badtriang *newbad;


  newbad = (struct badtriang *) poolalloc(&m->badtriangles);
  newbad->poortri = (triangle) ((unsigned long) (*enqtri).tri | (unsigned long) (*enqtri).orient);
  newbad->key = angle;
  newbad->triangapex = enqapex;
  newbad->triangorg = enqorg;
  newbad->triangdest = enqdest;
  enqueuebadtriang(m, b, newbad);
}
# 6788 "triangle.c"
struct badtriang *dequeuebadtriang(m)
struct mesh *m;


{
  struct badtriang *result;


  if (m->firstnonemptyq < 0) {
    return (struct badtriang *) ((void *)0);
  }

  result = m->queuefront[m->firstnonemptyq];

  m->queuefront[m->firstnonemptyq] = result->nexttriang;


  if (result == m->queuetail[m->firstnonemptyq]) {
    m->firstnonemptyq = m->nextnonemptyq[m->firstnonemptyq];
  }
  return result;
}
# 6825 "triangle.c"
int under60degrees(struct osub *sub1, struct osub *sub2) {
  vertex segmentapex, v1, v2;
  double dotprod;

  segmentapex = (vertex) (*sub1).ss[2 + (*sub1).ssorient];
  v1 = (vertex) (*sub1).ss[3 - (*sub1).ssorient];
  v2 = (vertex) (*sub2).ss[3 - (*sub2).ssorient];
  dotprod = (v2[0] - segmentapex[0]) * (v1[0] - segmentapex[0]) +
            (v2[1] - segmentapex[1]) * (v1[1] - segmentapex[1]);
  return (dotprod > 0.0) &&
         (4.0 * dotprod * dotprod >
          ((v1[0] - segmentapex[0]) * (v1[0] - segmentapex[0]) +
           (v1[1] - segmentapex[1]) * (v1[1] - segmentapex[1])) *
          ((v2[0] - segmentapex[0]) * (v2[0] - segmentapex[0]) +
           (v2[1] - segmentapex[1]) * (v2[1] - segmentapex[1])));
}
# 6857 "triangle.c"
int clockwiseseg(struct mesh *m, struct osub *thissub, struct osub *nextsub) {
  struct otri neighbortri;
  triangle ptr;
  subseg sptr;

  ptr = (triangle) (*thissub).ss[4 + (*thissub).ssorient]; (neighbortri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbortri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbortri).orient);
  if (neighbortri.tri == m->dummytri) {
    return 0;
  } else {
    (neighbortri).orient = plus1mod3[(neighbortri).orient];
    sptr = (subseg) (neighbortri).tri[6 + (neighbortri).orient]; (*nextsub).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (*nextsub).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    while (nextsub->ss == m->dummysub) {
      ptr = (neighbortri).tri[(neighbortri).orient]; (neighbortri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbortri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbortri).orient);;
      (neighbortri).orient = plus1mod3[(neighbortri).orient];
      sptr = (subseg) (neighbortri).tri[6 + (neighbortri).orient]; (*nextsub).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (*nextsub).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    }
    (*nextsub).ssorient = 1 - (*nextsub).ssorient;
    return under60degrees(thissub, nextsub);
  }
}
# 6894 "triangle.c"
int counterclockwiseseg(struct mesh *m, struct osub *thissub,
                        struct osub *nextsub) {
  struct otri neighbortri;
  struct osub subsym;
  triangle ptr;
  subseg sptr;

  (subsym).ss = (*thissub).ss; (subsym).ssorient = 1 - (*thissub).ssorient;
  ptr = (triangle) (subsym).ss[4 + (subsym).ssorient]; (neighbortri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbortri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbortri).orient);
  if (neighbortri.tri == m->dummytri) {
    return 0;
  } else {
    (neighbortri).orient = minus1mod3[(neighbortri).orient];
    sptr = (subseg) (neighbortri).tri[6 + (neighbortri).orient]; (*nextsub).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (*nextsub).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    while (nextsub->ss == m->dummysub) {
      ptr = (neighbortri).tri[(neighbortri).orient]; (neighbortri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbortri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbortri).orient);;
      (neighbortri).orient = minus1mod3[(neighbortri).orient];
      sptr = (subseg) (neighbortri).tri[6 + (neighbortri).orient]; (*nextsub).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (*nextsub).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    }
    return under60degrees(thissub, nextsub);
  }
}
# 6945 "triangle.c"
int splitpermitted(struct mesh *m, struct osub *testsubseg, double iradius) {
  struct osub cwsubseg, ccwsubseg, cwsubseg2, ccwsubseg2;
  struct osub testsym;
  struct osub startsubseg, nowsubseg;
  vertex suborg, dest1, dest2;
  double nearestpoweroffour, seglength, prevseglength, edgelength;
  int cwsmall, ccwsmall, cwsmall2, ccwsmall2;
  int orgcluster, destcluster;
  int toosmall;




  suborg = (vertex) (*testsubseg).ss[2 + (*testsubseg).ssorient];
  dest1 = (vertex) (*testsubseg).ss[3 - (*testsubseg).ssorient];
  seglength = (dest1[0] - suborg[0]) * (dest1[0] - suborg[0]) +
              (dest1[1] - suborg[1]) * (dest1[1] - suborg[1]);
  nearestpoweroffour = 1.0;
  while (seglength > 2.0 * nearestpoweroffour) {
    nearestpoweroffour *= 4.0;
  }
  while (seglength < 0.5 * nearestpoweroffour) {
    nearestpoweroffour *= 0.25;
  }


  if ((nearestpoweroffour > 1.001 * seglength) ||
      (nearestpoweroffour < 0.999 * seglength)) {
    return 1;
  }


  cwsmall = clockwiseseg(m, testsubseg, &cwsubseg);
  ccwsmall = cwsmall ? 0 : counterclockwiseseg(m, testsubseg, &ccwsubseg);
  orgcluster = cwsmall || ccwsmall;


  (testsym).ss = (*testsubseg).ss; (testsym).ssorient = 1 - (*testsubseg).ssorient;
  cwsmall2 = clockwiseseg(m, &testsym, &cwsubseg2);
  ccwsmall2 = cwsmall2 ? 0 : counterclockwiseseg(m, &testsym, &ccwsubseg2);
  destcluster = cwsmall2 || ccwsmall2;

  if (orgcluster == destcluster) {


    return 1;
  } else if (orgcluster) {

    (startsubseg).ss = (*testsubseg).ss; (startsubseg).ssorient = (*testsubseg).ssorient;
  } else {


    (startsubseg).ss = (testsym).ss; (startsubseg).ssorient = (testsym).ssorient;
    (cwsubseg).ss = (cwsubseg2).ss; (cwsubseg).ssorient = (cwsubseg2).ssorient;
    (ccwsubseg).ss = (ccwsubseg2).ss; (ccwsubseg).ssorient = (ccwsubseg2).ssorient;
    cwsmall = cwsmall2;
    ccwsmall = ccwsmall2;
  }

  toosmall = 0;
  if (cwsmall) {

    (nowsubseg).ss = (startsubseg).ss; (nowsubseg).ssorient = (startsubseg).ssorient;
    suborg = (vertex) (nowsubseg).ss[2 + (nowsubseg).ssorient];
    dest1 = (vertex) (nowsubseg).ss[3 - (nowsubseg).ssorient];
    prevseglength = nearestpoweroffour;
    do {

      dest2 = (vertex) (cwsubseg).ss[3 - (cwsubseg).ssorient];
      seglength = (dest2[0] - suborg[0]) * (dest2[0] - suborg[0]) +
                  (dest2[1] - suborg[1]) * (dest2[1] - suborg[1]);
      if (nearestpoweroffour > 1.001 * seglength) {

        return 1;
      }




      edgelength = 0.5 * nearestpoweroffour *
                   (1 - (((dest1[0] - suborg[0]) * (dest2[0] - suborg[0]) +
                          (dest1[1] - suborg[1]) * (dest2[1] - suborg[1])) /
                         sqrt(prevseglength * seglength)));
      if (edgelength < iradius) {



        toosmall = 1;
      }
      if (cwsubseg.ss == startsubseg.ss) {


        return !toosmall;
      }


      (nowsubseg).ss = (cwsubseg).ss; (nowsubseg).ssorient = (cwsubseg).ssorient;
      dest1 = dest2;
      prevseglength = seglength;
      cwsmall = clockwiseseg(m, &nowsubseg, &cwsubseg);
    } while (cwsmall);



    ccwsmall = counterclockwiseseg(m, &startsubseg, &ccwsubseg);
  }

  if (ccwsmall) {

    (nowsubseg).ss = (startsubseg).ss; (nowsubseg).ssorient = (startsubseg).ssorient;
    suborg = (vertex) (nowsubseg).ss[2 + (nowsubseg).ssorient];
    dest1 = (vertex) (nowsubseg).ss[3 - (nowsubseg).ssorient];
    prevseglength = nearestpoweroffour;
    do {

      dest2 = (vertex) (ccwsubseg).ss[3 - (ccwsubseg).ssorient];
      seglength = (dest2[0] - suborg[0]) * (dest2[0] - suborg[0]) +
                  (dest2[1] - suborg[1]) * (dest2[1] - suborg[1]);
      if (nearestpoweroffour > 1.001 * seglength) {

        return 1;
      }



      edgelength = 0.5 * nearestpoweroffour *
                   (1 - (((dest1[0] - suborg[0]) * (dest2[0] - suborg[0]) +
                          (dest1[1] - suborg[1]) * (dest2[1] - suborg[1])) /
                         sqrt(prevseglength * seglength)));
      if (edgelength < iradius) {



        toosmall = 1;
      }
      if (ccwsubseg.ss == startsubseg.ss) {


        return !toosmall;
      }


      (nowsubseg).ss = (ccwsubseg).ss; (nowsubseg).ssorient = (ccwsubseg).ssorient;
      dest1 = dest2;
      prevseglength = seglength;
      ccwsmall = counterclockwiseseg(m, &nowsubseg, &ccwsubseg);
    } while (ccwsmall);
  }



  return !toosmall;
}
# 7120 "triangle.c"
int checkseg4encroach(m, b, testsubseg, iradius)
struct mesh *m;
struct behavior *b;
struct osub *testsubseg;
double iradius;


{
  struct otri neighbortri;
  struct osub testsym;
  struct badsubseg *encroachedseg;
  double dotproduct;
  int encroached;
  int sides;
  int enq;
  vertex eorg, edest, eapex;
  triangle ptr;

  encroached = 0;
  sides = 0;

  eorg = (vertex) (*testsubseg).ss[2 + (*testsubseg).ssorient];
  edest = (vertex) (*testsubseg).ss[3 - (*testsubseg).ssorient];

  ptr = (triangle) (*testsubseg).ss[4 + (*testsubseg).ssorient]; (neighbortri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbortri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbortri).orient);

  if (neighbortri.tri != m->dummytri) {
    sides++;

    eapex = (vertex) (neighbortri).tri[(neighbortri).orient + 3];





    dotproduct = (eorg[0] - eapex[0]) * (edest[0] - eapex[0]) +
                 (eorg[1] - eapex[1]) * (edest[1] - eapex[1]);
    if (dotproduct < 0.0) {
      if (b->nolenses ||
          (dotproduct * dotproduct >=
           0.25 * ((eorg[0] - eapex[0]) * (eorg[0] - eapex[0]) +
                   (eorg[1] - eapex[1]) * (eorg[1] - eapex[1])) *
                  ((edest[0] - eapex[0]) * (edest[0] - eapex[0]) +
                   (edest[1] - eapex[1]) * (edest[1] - eapex[1])))) {
        encroached = 1;
      }
    }
  }

  (testsym).ss = (*testsubseg).ss; (testsym).ssorient = 1 - (*testsubseg).ssorient;
  ptr = (triangle) (testsym).ss[4 + (testsym).ssorient]; (neighbortri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbortri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbortri).orient);

  if (neighbortri.tri != m->dummytri) {
    sides++;

    eapex = (vertex) (neighbortri).tri[(neighbortri).orient + 3];


    dotproduct = (eorg[0] - eapex[0]) * (edest[0] - eapex[0]) +
                 (eorg[1] - eapex[1]) * (edest[1] - eapex[1]);
    if (dotproduct < 0.0) {
      if (b->nolenses ||
          (dotproduct * dotproduct >=
           0.25 * ((eorg[0] - eapex[0]) * (eorg[0] - eapex[0]) +
                   (eorg[1] - eapex[1]) * (eorg[1] - eapex[1])) *
                  ((edest[0] - eapex[0]) * (edest[0] - eapex[0]) +
                   (edest[1] - eapex[1]) * (edest[1] - eapex[1])))) {
        encroached += 2;
      }
    }
  }

  if (encroached && (!b->nobisect || ((b->nobisect == 1) && (sides == 2)))) {

    if (iradius > 0.0) {





      enq = splitpermitted(m, testsubseg, iradius);
    } else {


      enq = 1;
    }
    if (enq) {
      if (b->verbose > 2) {
        fprintf(stderr,
          "  Queueing encroached subsegment (%.12g, %.12g) (%.12g, %.12g).\n",
          eorg[0], eorg[1], edest[0], edest[1]);
      }


      encroachedseg = (struct badsubseg *) poolalloc(&m->badsubsegs);
      if (encroached == 1) {
        encroachedseg->encsubseg = (subseg) ((unsigned long) (*testsubseg).ss | (unsigned long) (*testsubseg).ssorient);
        encroachedseg->subsegorg = eorg;
        encroachedseg->subsegdest = edest;
      } else {
        encroachedseg->encsubseg = (subseg) ((unsigned long) (testsym).ss | (unsigned long) (testsym).ssorient);
        encroachedseg->subsegorg = edest;
        encroachedseg->subsegdest = eorg;
      }
    }
  }

  return encroached;
}
# 7247 "triangle.c"
void testtriangle(m, b, testtri)
struct mesh *m;
struct behavior *b;
struct otri *testtri;


{
  struct otri sametesttri;
  struct osub subseg1, subseg2;
  vertex torg, tdest, tapex;
  vertex anglevertex;
  double dxod, dyod, dxda, dyda, dxao, dyao;
  double dxod2, dyod2, dxda2, dyda2, dxao2, dyao2;
  double apexlen, orglen, destlen;
  double angle;
  double area;
  subseg sptr;

  torg = (vertex) (*testtri).tri[plus1mod3[(*testtri).orient] + 3];
  tdest = (vertex) (*testtri).tri[minus1mod3[(*testtri).orient] + 3];
  tapex = (vertex) (*testtri).tri[(*testtri).orient + 3];
  dxod = torg[0] - tdest[0];
  dyod = torg[1] - tdest[1];
  dxda = tdest[0] - tapex[0];
  dyda = tdest[1] - tapex[1];
  dxao = tapex[0] - torg[0];
  dyao = tapex[1] - torg[1];
  dxod2 = dxod * dxod;
  dyod2 = dyod * dyod;
  dxda2 = dxda * dxda;
  dyda2 = dyda * dyda;
  dxao2 = dxao * dxao;
  dyao2 = dyao * dyao;

  apexlen = dxod2 + dyod2;
  orglen = dxda2 + dyda2;
  destlen = dxao2 + dyao2;
  if ((apexlen < orglen) && (apexlen < destlen)) {


    angle = dxda * dxao + dyda * dyao;
    angle = angle * angle / (orglen * destlen);
    anglevertex = tapex;
    (sametesttri).tri = (*testtri).tri; (sametesttri).orient = plus1mod3[(*testtri).orient];
    sptr = (subseg) (sametesttri).tri[6 + (sametesttri).orient]; (subseg1).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (subseg1).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    (sametesttri).orient = plus1mod3[(sametesttri).orient];
    sptr = (subseg) (sametesttri).tri[6 + (sametesttri).orient]; (subseg2).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (subseg2).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
  } else if (orglen < destlen) {


    angle = dxod * dxao + dyod * dyao;
    angle = angle * angle / (apexlen * destlen);
    anglevertex = torg;
    sptr = (subseg) (*testtri).tri[6 + (*testtri).orient]; (subseg1).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (subseg1).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    (sametesttri).tri = (*testtri).tri; (sametesttri).orient = minus1mod3[(*testtri).orient];
    sptr = (subseg) (sametesttri).tri[6 + (sametesttri).orient]; (subseg2).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (subseg2).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
  } else {


    angle = dxod * dxda + dyod * dyda;
    angle = angle * angle / (apexlen * orglen);
    anglevertex = tdest;
    sptr = (subseg) (*testtri).tri[6 + (*testtri).orient]; (subseg1).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (subseg1).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    (sametesttri).tri = (*testtri).tri; (sametesttri).orient = plus1mod3[(*testtri).orient];
    sptr = (subseg) (sametesttri).tri[6 + (sametesttri).orient]; (subseg2).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (subseg2).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
  }


  if ((subseg1.ss != m->dummysub) && (subseg2.ss != m->dummysub)) {



    angle = 0.0;
  }


  if (angle > b->goodangle) {

    enqueuebadtri(m, b, testtri, angle, tapex, torg, tdest);
    return;
  }

  if (b->vararea || b->fixedarea || b->usertest) {

    area = 0.5 * (dxod * dyda - dyod * dxda);
    if (b->fixedarea && (area > b->maxarea)) {

      enqueuebadtri(m, b, testtri, angle, tapex, torg, tdest);
      return;
    }


    if ((b->vararea) && (area > ((double *) (*testtri).tri)[m->areaboundindex]) &&
        (((double *) (*testtri).tri)[m->areaboundindex] > 0.0)) {

      enqueuebadtri(m, b, testtri, angle, tapex, torg, tdest);
      return;
    }

    if (b->usertest) {

      if (triunsuitable(torg, tdest, tapex, area)) {
        enqueuebadtri(m, b, testtri, angle, tapex, torg, tdest);
        return;
      }
    }
  }
}
# 7383 "triangle.c"
void makevertexmap(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri triangleloop;
  vertex triorg;

  if (b->verbose) {
    fprintf(stderr, "    Constructing mapping from vertices to triangles.\n");
  }
  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  while (triangleloop.tri != (triangle *) ((void *)0)) {

    for (triangleloop.orient = 0; triangleloop.orient < 3;
         triangleloop.orient++) {
      triorg = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
      ((triangle *) (triorg))[m->vertex2triindex] = (triangle) ((unsigned long) (triangleloop).tri | (unsigned long) (triangleloop).orient);
    }
    triangleloop.tri = triangletraverse(m);
  }
}
# 7480 "triangle.c"
enum locateresult preciselocate(m, b, searchpoint, searchtri, stopatsubsegment)
struct mesh *m;
struct behavior *b;
vertex searchpoint;
struct otri *searchtri;
int stopatsubsegment;


{
  struct otri backtracktri;
  struct osub checkedge;
  vertex forg, fdest, fapex;
  double orgorient, destorient;
  int moveleft;
  triangle ptr;
  subseg sptr;

  if (b->verbose > 2) {
    fprintf(stderr, "  Searching for point (%.12g, %.12g).\n",
           searchpoint[0], searchpoint[1]);
  }

  forg = (vertex) (*searchtri).tri[plus1mod3[(*searchtri).orient] + 3];
  fdest = (vertex) (*searchtri).tri[minus1mod3[(*searchtri).orient] + 3];
  fapex = (vertex) (*searchtri).tri[(*searchtri).orient + 3];
  while (1) {
    if (b->verbose > 2) {
      fprintf(stderr, "    At (%.12g, %.12g) (%.12g, %.12g) (%.12g, %.12g)\n",
             forg[0], forg[1], fdest[0], fdest[1], fapex[0], fapex[1]);
    }

    if ((fapex[0] == searchpoint[0]) && (fapex[1] == searchpoint[1])) {
      (*searchtri).orient = minus1mod3[(*searchtri).orient];
      return ONVERTEX;
    }


    destorient = counterclockwise(m, b, forg, fapex, searchpoint);


    orgorient = counterclockwise(m, b, fapex, fdest, searchpoint);
    if (destorient > 0.0) {
      if (orgorient > 0.0) {





        moveleft = (fapex[0] - searchpoint[0]) * (fdest[0] - forg[0]) +
                   (fapex[1] - searchpoint[1]) * (fdest[1] - forg[1]) > 0.0;
      } else {
        moveleft = 1;
      }
    } else {
      if (orgorient > 0.0) {
        moveleft = 0;
      } else {


        if (destorient == 0.0) {
          (*searchtri).orient = minus1mod3[(*searchtri).orient];
          return ONEDGE;
        }
        if (orgorient == 0.0) {
          (*searchtri).orient = plus1mod3[(*searchtri).orient];
          return ONEDGE;
        }
        return INTRIANGLE;
      }
    }




    if (moveleft) {
      (backtracktri).tri = (*searchtri).tri; (backtracktri).orient = minus1mod3[(*searchtri).orient];
      fdest = fapex;
    } else {
      (backtracktri).tri = (*searchtri).tri; (backtracktri).orient = plus1mod3[(*searchtri).orient];
      forg = fapex;
    }
    ptr = (backtracktri).tri[(backtracktri).orient]; (*searchtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*searchtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*searchtri).orient);;

    if (m->checksegments && stopatsubsegment) {

      sptr = (subseg) (backtracktri).tri[6 + (backtracktri).orient]; (checkedge).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (checkedge).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      if (checkedge.ss != m->dummysub) {

        (*searchtri).tri = (backtracktri).tri; (*searchtri).orient = (backtracktri).orient;
        return OUTSIDE;
      }
    }

    if (searchtri->tri == m->dummytri) {

      (*searchtri).tri = (backtracktri).tri; (*searchtri).orient = (backtracktri).orient;
      return OUTSIDE;
    }

    fapex = (vertex) (*searchtri).tri[(*searchtri).orient + 3];
  }
}
# 7623 "triangle.c"
enum locateresult locate(m, b, searchpoint, searchtri)
struct mesh *m;
struct behavior *b;
vertex searchpoint;
struct otri *searchtri;


{
  int **sampleblock;
  triangle *firsttri;
  struct otri sampletri;
  vertex torg, tdest;
  unsigned long alignptr;
  double searchdist, dist;
  double ahead;
  long sampleblocks, samplesperblock, samplenum;
  long triblocks;
  long i, j;
  triangle ptr;

  if (b->verbose > 2) {
    fprintf(stderr, "  Randomly sampling for a triangle near point (%.12g, %.12g).\n",
           searchpoint[0], searchpoint[1]);
  }


  torg = (vertex) (*searchtri).tri[plus1mod3[(*searchtri).orient] + 3];
  searchdist = (searchpoint[0] - torg[0]) * (searchpoint[0] - torg[0]) +
               (searchpoint[1] - torg[1]) * (searchpoint[1] - torg[1]);
  if (b->verbose > 2) {
    fprintf(stderr, "    Boundary triangle has origin (%.12g, %.12g).\n",
           torg[0], torg[1]);
  }



  if (m->recenttri.tri != (triangle *) ((void *)0)) {
    if (!((m->recenttri.tri)[1] == (triangle) ((void *)0))) {
      torg = (vertex) (m->recenttri).tri[plus1mod3[(m->recenttri).orient] + 3];
      if ((torg[0] == searchpoint[0]) && (torg[1] == searchpoint[1])) {
        (*searchtri).tri = (m->recenttri).tri; (*searchtri).orient = (m->recenttri).orient;
        return ONVERTEX;
      }
      dist = (searchpoint[0] - torg[0]) * (searchpoint[0] - torg[0]) +
             (searchpoint[1] - torg[1]) * (searchpoint[1] - torg[1]);
      if (dist < searchdist) {
        (*searchtri).tri = (m->recenttri).tri; (*searchtri).orient = (m->recenttri).orient;
        searchdist = dist;
        if (b->verbose > 2) {
          fprintf(stderr, "    Choosing recent triangle with origin (%.12g, %.12g).\n",
                 torg[0], torg[1]);
        }
      }
    }
  }




  while (11 * m->samples * m->samples * m->samples <
         m->triangles.items) {
    m->samples++;
  }
  triblocks = (m->triangles.maxitems + 4092 - 1) / 4092;
  samplesperblock = (m->samples + triblocks - 1) / triblocks;
  sampleblocks = m->samples / samplesperblock;
  sampleblock = m->triangles.firstblock;
  sampletri.orient = 0;
  for (i = 0; i < sampleblocks; i++) {
    alignptr = (unsigned long) (sampleblock + 1);
    firsttri = (triangle *) (alignptr + (unsigned long) m->triangles.alignbytes
                      - (alignptr % (unsigned long) m->triangles.alignbytes));
    for (j = 0; j < samplesperblock; j++) {
      if (i == triblocks - 1) {
        samplenum = randomnation((int)
                                 (m->triangles.maxitems - (i * 4092)));
      } else {
        samplenum = randomnation(4092);
      }
      sampletri.tri = (triangle *)
                      (firsttri + (samplenum * m->triangles.itemwords));
      if (!((sampletri.tri)[1] == (triangle) ((void *)0))) {
        torg = (vertex) (sampletri).tri[plus1mod3[(sampletri).orient] + 3];
        dist = (searchpoint[0] - torg[0]) * (searchpoint[0] - torg[0]) +
               (searchpoint[1] - torg[1]) * (searchpoint[1] - torg[1]);
        if (dist < searchdist) {
          (*searchtri).tri = (sampletri).tri; (*searchtri).orient = (sampletri).orient;
          searchdist = dist;
          if (b->verbose > 2) {
            fprintf(stderr, "    Choosing triangle with origin (%.12g, %.12g).\n",
                   torg[0], torg[1]);
          }
        }
      }
    }
    sampleblock = (int **) *sampleblock;
  }


  torg = (vertex) (*searchtri).tri[plus1mod3[(*searchtri).orient] + 3];
  tdest = (vertex) (*searchtri).tri[minus1mod3[(*searchtri).orient] + 3];

  if ((torg[0] == searchpoint[0]) && (torg[1] == searchpoint[1])) {
    return ONVERTEX;
  }
  if ((tdest[0] == searchpoint[0]) && (tdest[1] == searchpoint[1])) {
    (*searchtri).orient = plus1mod3[(*searchtri).orient];
    return ONVERTEX;
  }

  ahead = counterclockwise(m, b, torg, tdest, searchpoint);
  if (ahead < 0.0) {


    ptr = (*searchtri).tri[(*searchtri).orient]; (*searchtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*searchtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*searchtri).orient);;
  } else if (ahead == 0.0) {

    if (((torg[0] < searchpoint[0]) == (searchpoint[0] < tdest[0])) &&
        ((torg[1] < searchpoint[1]) == (searchpoint[1] < tdest[1]))) {
      return ONEDGE;
    }
  }
  return preciselocate(m, b, searchpoint, searchtri, 0);
}
# 7771 "triangle.c"
void insertsubseg(m, b, tri, subsegmark)
struct mesh *m;
struct behavior *b;
struct otri *tri;
int subsegmark;


{
  struct otri oppotri;
  struct osub newsubseg;
  vertex triorg, tridest;
  triangle ptr;
  subseg sptr;

  triorg = (vertex) (*tri).tri[plus1mod3[(*tri).orient] + 3];
  tridest = (vertex) (*tri).tri[minus1mod3[(*tri).orient] + 3];

  if (((int *) (triorg))[m->vertexmarkindex] == 0) {
    ((int *) (triorg))[m->vertexmarkindex] = subsegmark;
  }
  if (((int *) (tridest))[m->vertexmarkindex] == 0) {
    ((int *) (tridest))[m->vertexmarkindex] = subsegmark;
  }

  sptr = (subseg) (*tri).tri[6 + (*tri).orient]; (newsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (newsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
  if (newsubseg.ss == m->dummysub) {

    makesubseg(m, &newsubseg);
    (newsubseg).ss[2 + (newsubseg).ssorient] = (subseg) tridest;
    (newsubseg).ss[3 - (newsubseg).ssorient] = (subseg) triorg;




    (*tri).tri[6 + (*tri).orient] = (triangle) (subseg) ((unsigned long) (newsubseg).ss | (unsigned long) (newsubseg).ssorient); (newsubseg).ss[4 + (newsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (*tri).tri | (unsigned long) (*tri).orient);
    ptr = (*tri).tri[(*tri).orient]; (oppotri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (oppotri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (oppotri).orient);;
    (newsubseg).ssorient = 1 - (newsubseg).ssorient;
    (oppotri).tri[6 + (oppotri).orient] = (triangle) (subseg) ((unsigned long) (newsubseg).ss | (unsigned long) (newsubseg).ssorient); (newsubseg).ss[4 + (newsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (oppotri).tri | (unsigned long) (oppotri).orient);
    * (int *) ((newsubseg).ss + 6) = subsegmark;
    if (b->verbose > 2) {
      fprintf(stderr, "  Inserting new ");
      printsubseg(m, b, &newsubseg);
    }
  } else {
    if ((* (int *) ((newsubseg).ss + 6)) == 0) {
      * (int *) ((newsubseg).ss + 6) = subsegmark;
    }
  }
}
# 7872 "triangle.c"
void flip(m, b, flipedge)
struct mesh *m;
struct behavior *b;
struct otri *flipedge;


{
  struct otri botleft, botright;
  struct otri topleft, topright;
  struct otri top;
  struct otri botlcasing, botrcasing;
  struct otri toplcasing, toprcasing;
  struct osub botlsubseg, botrsubseg;
  struct osub toplsubseg, toprsubseg;
  vertex leftvertex, rightvertex, botvertex;
  vertex farvertex;
  triangle ptr;
  subseg sptr;


  rightvertex = (vertex) (*flipedge).tri[plus1mod3[(*flipedge).orient] + 3];
  leftvertex = (vertex) (*flipedge).tri[minus1mod3[(*flipedge).orient] + 3];
  botvertex = (vertex) (*flipedge).tri[(*flipedge).orient + 3];
  ptr = (*flipedge).tri[(*flipedge).orient]; (top).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (top).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (top).orient);;
# 7911 "triangle.c"
  farvertex = (vertex) (top).tri[(top).orient + 3];


  (topleft).tri = (top).tri; (topleft).orient = minus1mod3[(top).orient];
  ptr = (topleft).tri[(topleft).orient]; (toplcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (toplcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (toplcasing).orient);;
  (topright).tri = (top).tri; (topright).orient = plus1mod3[(top).orient];
  ptr = (topright).tri[(topright).orient]; (toprcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (toprcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (toprcasing).orient);;
  (botleft).tri = (*flipedge).tri; (botleft).orient = plus1mod3[(*flipedge).orient];
  ptr = (botleft).tri[(botleft).orient]; (botlcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botlcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botlcasing).orient);;
  (botright).tri = (*flipedge).tri; (botright).orient = minus1mod3[(*flipedge).orient];
  ptr = (botright).tri[(botright).orient]; (botrcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botrcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botrcasing).orient);;

  (topleft).tri[(topleft).orient] = (triangle) ((unsigned long) (botlcasing).tri | (unsigned long) (botlcasing).orient); (botlcasing).tri[(botlcasing).orient] = (triangle) ((unsigned long) (topleft).tri | (unsigned long) (topleft).orient);
  (botleft).tri[(botleft).orient] = (triangle) ((unsigned long) (botrcasing).tri | (unsigned long) (botrcasing).orient); (botrcasing).tri[(botrcasing).orient] = (triangle) ((unsigned long) (botleft).tri | (unsigned long) (botleft).orient);
  (botright).tri[(botright).orient] = (triangle) ((unsigned long) (toprcasing).tri | (unsigned long) (toprcasing).orient); (toprcasing).tri[(toprcasing).orient] = (triangle) ((unsigned long) (botright).tri | (unsigned long) (botright).orient);
  (topright).tri[(topright).orient] = (triangle) ((unsigned long) (toplcasing).tri | (unsigned long) (toplcasing).orient); (toplcasing).tri[(toplcasing).orient] = (triangle) ((unsigned long) (topright).tri | (unsigned long) (topright).orient);

  if (m->checksegments) {

    sptr = (subseg) (topleft).tri[6 + (topleft).orient]; (toplsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (toplsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    sptr = (subseg) (botleft).tri[6 + (botleft).orient]; (botlsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botlsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    sptr = (subseg) (botright).tri[6 + (botright).orient]; (botrsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botrsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    sptr = (subseg) (topright).tri[6 + (topright).orient]; (toprsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (toprsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    if (toplsubseg.ss == m->dummysub) {
      (topright).tri[6 + (topright).orient] = (triangle) m->dummysub;
    } else {
      (topright).tri[6 + (topright).orient] = (triangle) (subseg) ((unsigned long) (toplsubseg).ss | (unsigned long) (toplsubseg).ssorient); (toplsubseg).ss[4 + (toplsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (topright).tri | (unsigned long) (topright).orient);
    }
    if (botlsubseg.ss == m->dummysub) {
      (topleft).tri[6 + (topleft).orient] = (triangle) m->dummysub;
    } else {
      (topleft).tri[6 + (topleft).orient] = (triangle) (subseg) ((unsigned long) (botlsubseg).ss | (unsigned long) (botlsubseg).ssorient); (botlsubseg).ss[4 + (botlsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (topleft).tri | (unsigned long) (topleft).orient);
    }
    if (botrsubseg.ss == m->dummysub) {
      (botleft).tri[6 + (botleft).orient] = (triangle) m->dummysub;
    } else {
      (botleft).tri[6 + (botleft).orient] = (triangle) (subseg) ((unsigned long) (botrsubseg).ss | (unsigned long) (botrsubseg).ssorient); (botrsubseg).ss[4 + (botrsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (botleft).tri | (unsigned long) (botleft).orient);
    }
    if (toprsubseg.ss == m->dummysub) {
      (botright).tri[6 + (botright).orient] = (triangle) m->dummysub;
    } else {
      (botright).tri[6 + (botright).orient] = (triangle) (subseg) ((unsigned long) (toprsubseg).ss | (unsigned long) (toprsubseg).ssorient); (toprsubseg).ss[4 + (toprsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (botright).tri | (unsigned long) (botright).orient);
    }
  }


  (*flipedge).tri[plus1mod3[(*flipedge).orient] + 3] = (triangle) farvertex;
  (*flipedge).tri[minus1mod3[(*flipedge).orient] + 3] = (triangle) botvertex;
  (*flipedge).tri[(*flipedge).orient + 3] = (triangle) rightvertex;
  (top).tri[plus1mod3[(top).orient] + 3] = (triangle) botvertex;
  (top).tri[minus1mod3[(top).orient] + 3] = (triangle) farvertex;
  (top).tri[(top).orient + 3] = (triangle) leftvertex;
  if (b->verbose > 2) {
    fprintf(stderr, "  Edge flip results in left ");
    printtriangle(m, b, &top);
    fprintf(stderr, "  and right ");
    printtriangle(m, b, flipedge);
  }
}
# 8007 "triangle.c"
void unflip(m, b, flipedge)
struct mesh *m;
struct behavior *b;
struct otri *flipedge;


{
  struct otri botleft, botright;
  struct otri topleft, topright;
  struct otri top;
  struct otri botlcasing, botrcasing;
  struct otri toplcasing, toprcasing;
  struct osub botlsubseg, botrsubseg;
  struct osub toplsubseg, toprsubseg;
  vertex leftvertex, rightvertex, botvertex;
  vertex farvertex;
  triangle ptr;
  subseg sptr;


  rightvertex = (vertex) (*flipedge).tri[plus1mod3[(*flipedge).orient] + 3];
  leftvertex = (vertex) (*flipedge).tri[minus1mod3[(*flipedge).orient] + 3];
  botvertex = (vertex) (*flipedge).tri[(*flipedge).orient + 3];
  ptr = (*flipedge).tri[(*flipedge).orient]; (top).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (top).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (top).orient);;
# 8046 "triangle.c"
  farvertex = (vertex) (top).tri[(top).orient + 3];


  (topleft).tri = (top).tri; (topleft).orient = minus1mod3[(top).orient];
  ptr = (topleft).tri[(topleft).orient]; (toplcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (toplcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (toplcasing).orient);;
  (topright).tri = (top).tri; (topright).orient = plus1mod3[(top).orient];
  ptr = (topright).tri[(topright).orient]; (toprcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (toprcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (toprcasing).orient);;
  (botleft).tri = (*flipedge).tri; (botleft).orient = plus1mod3[(*flipedge).orient];
  ptr = (botleft).tri[(botleft).orient]; (botlcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botlcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botlcasing).orient);;
  (botright).tri = (*flipedge).tri; (botright).orient = minus1mod3[(*flipedge).orient];
  ptr = (botright).tri[(botright).orient]; (botrcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botrcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botrcasing).orient);;

  (topleft).tri[(topleft).orient] = (triangle) ((unsigned long) (toprcasing).tri | (unsigned long) (toprcasing).orient); (toprcasing).tri[(toprcasing).orient] = (triangle) ((unsigned long) (topleft).tri | (unsigned long) (topleft).orient);
  (botleft).tri[(botleft).orient] = (triangle) ((unsigned long) (toplcasing).tri | (unsigned long) (toplcasing).orient); (toplcasing).tri[(toplcasing).orient] = (triangle) ((unsigned long) (botleft).tri | (unsigned long) (botleft).orient);
  (botright).tri[(botright).orient] = (triangle) ((unsigned long) (botlcasing).tri | (unsigned long) (botlcasing).orient); (botlcasing).tri[(botlcasing).orient] = (triangle) ((unsigned long) (botright).tri | (unsigned long) (botright).orient);
  (topright).tri[(topright).orient] = (triangle) ((unsigned long) (botrcasing).tri | (unsigned long) (botrcasing).orient); (botrcasing).tri[(botrcasing).orient] = (triangle) ((unsigned long) (topright).tri | (unsigned long) (topright).orient);

  if (m->checksegments) {

    sptr = (subseg) (topleft).tri[6 + (topleft).orient]; (toplsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (toplsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    sptr = (subseg) (botleft).tri[6 + (botleft).orient]; (botlsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botlsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    sptr = (subseg) (botright).tri[6 + (botright).orient]; (botrsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botrsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    sptr = (subseg) (topright).tri[6 + (topright).orient]; (toprsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (toprsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
    if (toplsubseg.ss == m->dummysub) {
      (botleft).tri[6 + (botleft).orient] = (triangle) m->dummysub;
    } else {
      (botleft).tri[6 + (botleft).orient] = (triangle) (subseg) ((unsigned long) (toplsubseg).ss | (unsigned long) (toplsubseg).ssorient); (toplsubseg).ss[4 + (toplsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (botleft).tri | (unsigned long) (botleft).orient);
    }
    if (botlsubseg.ss == m->dummysub) {
      (botright).tri[6 + (botright).orient] = (triangle) m->dummysub;
    } else {
      (botright).tri[6 + (botright).orient] = (triangle) (subseg) ((unsigned long) (botlsubseg).ss | (unsigned long) (botlsubseg).ssorient); (botlsubseg).ss[4 + (botlsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (botright).tri | (unsigned long) (botright).orient);
    }
    if (botrsubseg.ss == m->dummysub) {
      (topright).tri[6 + (topright).orient] = (triangle) m->dummysub;
    } else {
      (topright).tri[6 + (topright).orient] = (triangle) (subseg) ((unsigned long) (botrsubseg).ss | (unsigned long) (botrsubseg).ssorient); (botrsubseg).ss[4 + (botrsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (topright).tri | (unsigned long) (topright).orient);
    }
    if (toprsubseg.ss == m->dummysub) {
      (topleft).tri[6 + (topleft).orient] = (triangle) m->dummysub;
    } else {
      (topleft).tri[6 + (topleft).orient] = (triangle) (subseg) ((unsigned long) (toprsubseg).ss | (unsigned long) (toprsubseg).ssorient); (toprsubseg).ss[4 + (toprsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (topleft).tri | (unsigned long) (topleft).orient);
    }
  }


  (*flipedge).tri[plus1mod3[(*flipedge).orient] + 3] = (triangle) botvertex;
  (*flipedge).tri[minus1mod3[(*flipedge).orient] + 3] = (triangle) farvertex;
  (*flipedge).tri[(*flipedge).orient + 3] = (triangle) leftvertex;
  (top).tri[plus1mod3[(top).orient] + 3] = (triangle) farvertex;
  (top).tri[minus1mod3[(top).orient] + 3] = (triangle) botvertex;
  (top).tri[(top).orient + 3] = (triangle) rightvertex;
  if (b->verbose > 2) {
    fprintf(stderr, "  Edge unflip results in left ");
    printtriangle(m, b, flipedge);
    fprintf(stderr, "  and right ");
    printtriangle(m, b, &top);
  }
}
# 8160 "triangle.c"
enum insertvertexresult insertvertex(m, b, newvertex, searchtri, splitseg,
                                     segmentflaws, triflaws, iradius)
struct mesh *m;
struct behavior *b;
vertex newvertex;
struct otri *searchtri;
struct osub *splitseg;
int segmentflaws;
int triflaws;
double iradius;


{
  struct otri horiz;
  struct otri top;
  struct otri botleft, botright;
  struct otri topleft, topright;
  struct otri newbotleft, newbotright;
  struct otri newtopright;
  struct otri botlcasing, botrcasing;
  struct otri toplcasing, toprcasing;
  struct otri testtri;
  struct osub botlsubseg, botrsubseg;
  struct osub toplsubseg, toprsubseg;
  struct osub brokensubseg;
  struct osub checksubseg;
  struct osub rightsubseg;
  struct osub newsubseg;
  struct badsubseg *encroached;
  struct flipstacker *newflip;
  vertex first;
  vertex leftvertex, rightvertex, botvertex, topvertex, farvertex;
  double attrib;
  double area;
  enum insertvertexresult success;
  enum locateresult intersect;
  int doflip;
  int mirrorflag;
  int enq;
  int i;
  triangle ptr;
  subseg sptr;

  if (b->verbose > 1) {
    fprintf(stderr, "  Inserting (%.12g, %.12g).\n", newvertex[0], newvertex[1]);
  }

  if (splitseg == (struct osub *) ((void *)0)) {


    if (searchtri->tri == m->dummytri) {

      horiz.tri = m->dummytri;
      horiz.orient = 0;
      ptr = (horiz).tri[(horiz).orient]; (horiz).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (horiz).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (horiz).orient);;

      intersect = locate(m, b, newvertex, &horiz);
    } else {

      (horiz).tri = (*searchtri).tri; (horiz).orient = (*searchtri).orient;
      intersect = preciselocate(m, b, newvertex, &horiz, 1);
    }
  } else {


    (horiz).tri = (*searchtri).tri; (horiz).orient = (*searchtri).orient;
    intersect = ONEDGE;
  }
  if (intersect == ONVERTEX) {


    (*searchtri).tri = (horiz).tri; (*searchtri).orient = (horiz).orient;
    (m->recenttri).tri = (horiz).tri; (m->recenttri).orient = (horiz).orient;
    return DUPLICATEVERTEX;
  }
  if ((intersect == ONEDGE) || (intersect == OUTSIDE)) {

    if (m->checksegments && (splitseg == (struct osub *) ((void *)0))) {

      sptr = (subseg) (horiz).tri[6 + (horiz).orient]; (brokensubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (brokensubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      if (brokensubseg.ss != m->dummysub) {

        if (segmentflaws) {
          if (b->nobisect == 2) {
            enq = 0;

          } else if (iradius > 0.0) {
            enq = splitpermitted(m, &brokensubseg, iradius);

          } else {
            enq = 1;
          }
          if (enq && (b->nobisect == 1)) {


            ptr = (horiz).tri[(horiz).orient]; (testtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (testtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (testtri).orient);;
            enq = testtri.tri != m->dummytri;
          }
          if (enq) {

            encroached = (struct badsubseg *) poolalloc(&m->badsubsegs);
            encroached->encsubseg = (subseg) ((unsigned long) (brokensubseg).ss | (unsigned long) (brokensubseg).ssorient);
            encroached->subsegorg = (vertex) (brokensubseg).ss[2 + (brokensubseg).ssorient];
            encroached->subsegdest = (vertex) (brokensubseg).ss[3 - (brokensubseg).ssorient];
            if (b->verbose > 2) {
              fprintf(stderr,
          "  Queueing encroached subsegment (%.12g, %.12g) (%.12g, %.12g).\n",
                     encroached->subsegorg[0], encroached->subsegorg[1],
                     encroached->subsegdest[0], encroached->subsegdest[1]);
            }
          }
        }


        (*searchtri).tri = (horiz).tri; (*searchtri).orient = (horiz).orient;
        (m->recenttri).tri = (horiz).tri; (m->recenttri).orient = (horiz).orient;
        return VIOLATINGVERTEX;
      }
    }



    (botright).tri = (horiz).tri; (botright).orient = minus1mod3[(horiz).orient];
    ptr = (botright).tri[(botright).orient]; (botrcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botrcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botrcasing).orient);;
    ptr = (horiz).tri[(horiz).orient]; (topright).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (topright).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (topright).orient);;

    mirrorflag = topright.tri != m->dummytri;
    if (mirrorflag) {
      (topright).orient = plus1mod3[(topright).orient];
      ptr = (topright).tri[(topright).orient]; (toprcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (toprcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (toprcasing).orient);;
      maketriangle(m, b, &newtopright);
    } else {

      m->hullsize++;
    }
    maketriangle(m, b, &newbotright);


    rightvertex = (vertex) (horiz).tri[plus1mod3[(horiz).orient] + 3];
    leftvertex = (vertex) (horiz).tri[minus1mod3[(horiz).orient] + 3];
    botvertex = (vertex) (horiz).tri[(horiz).orient + 3];
    (newbotright).tri[plus1mod3[(newbotright).orient] + 3] = (triangle) botvertex;
    (newbotright).tri[minus1mod3[(newbotright).orient] + 3] = (triangle) rightvertex;
    (newbotright).tri[(newbotright).orient + 3] = (triangle) newvertex;
    (horiz).tri[plus1mod3[(horiz).orient] + 3] = (triangle) newvertex;
    for (i = 0; i < m->eextras; i++) {

      ((double *) (newbotright).tri)[m->elemattribindex + (i)] = ((double *) (botright).tri)[m->elemattribindex + (i)];
    }
    if (b->vararea) {

      ((double *) (newbotright).tri)[m->areaboundindex] = ((double *) (botright).tri)[m->areaboundindex];
    }
    if (mirrorflag) {
      topvertex = (vertex) (topright).tri[minus1mod3[(topright).orient] + 3];
      (newtopright).tri[plus1mod3[(newtopright).orient] + 3] = (triangle) rightvertex;
      (newtopright).tri[minus1mod3[(newtopright).orient] + 3] = (triangle) topvertex;
      (newtopright).tri[(newtopright).orient + 3] = (triangle) newvertex;
      (topright).tri[plus1mod3[(topright).orient] + 3] = (triangle) newvertex;
      for (i = 0; i < m->eextras; i++) {

        ((double *) (newtopright).tri)[m->elemattribindex + (i)] = ((double *) (topright).tri)[m->elemattribindex + (i)];
      }
      if (b->vararea) {

        ((double *) (newtopright).tri)[m->areaboundindex] = ((double *) (topright).tri)[m->areaboundindex];
      }
    }



    if (m->checksegments) {
      sptr = (subseg) (botright).tri[6 + (botright).orient]; (botrsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botrsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      if (botrsubseg.ss != m->dummysub) {
        (botright).tri[6 + (botright).orient] = (triangle) m->dummysub;
        (newbotright).tri[6 + (newbotright).orient] = (triangle) (subseg) ((unsigned long) (botrsubseg).ss | (unsigned long) (botrsubseg).ssorient); (botrsubseg).ss[4 + (botrsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (newbotright).tri | (unsigned long) (newbotright).orient);
      }
      if (mirrorflag) {
        sptr = (subseg) (topright).tri[6 + (topright).orient]; (toprsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (toprsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
        if (toprsubseg.ss != m->dummysub) {
          (topright).tri[6 + (topright).orient] = (triangle) m->dummysub;
          (newtopright).tri[6 + (newtopright).orient] = (triangle) (subseg) ((unsigned long) (toprsubseg).ss | (unsigned long) (toprsubseg).ssorient); (toprsubseg).ss[4 + (toprsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (newtopright).tri | (unsigned long) (newtopright).orient);
        }
      }
    }


    (newbotright).tri[(newbotright).orient] = (triangle) ((unsigned long) (botrcasing).tri | (unsigned long) (botrcasing).orient); (botrcasing).tri[(botrcasing).orient] = (triangle) ((unsigned long) (newbotright).tri | (unsigned long) (newbotright).orient);
    (newbotright).orient = minus1mod3[(newbotright).orient];
    (newbotright).tri[(newbotright).orient] = (triangle) ((unsigned long) (botright).tri | (unsigned long) (botright).orient); (botright).tri[(botright).orient] = (triangle) ((unsigned long) (newbotright).tri | (unsigned long) (newbotright).orient);
    (newbotright).orient = minus1mod3[(newbotright).orient];
    if (mirrorflag) {
      (newtopright).tri[(newtopright).orient] = (triangle) ((unsigned long) (toprcasing).tri | (unsigned long) (toprcasing).orient); (toprcasing).tri[(toprcasing).orient] = (triangle) ((unsigned long) (newtopright).tri | (unsigned long) (newtopright).orient);
      (newtopright).orient = plus1mod3[(newtopright).orient];
      (newtopright).tri[(newtopright).orient] = (triangle) ((unsigned long) (topright).tri | (unsigned long) (topright).orient); (topright).tri[(topright).orient] = (triangle) ((unsigned long) (newtopright).tri | (unsigned long) (newtopright).orient);
      (newtopright).orient = plus1mod3[(newtopright).orient];
      (newtopright).tri[(newtopright).orient] = (triangle) ((unsigned long) (newbotright).tri | (unsigned long) (newbotright).orient); (newbotright).tri[(newbotright).orient] = (triangle) ((unsigned long) (newtopright).tri | (unsigned long) (newtopright).orient);
    }

    if (splitseg != (struct osub *) ((void *)0)) {

      (*splitseg).ss[3 - (*splitseg).ssorient] = (subseg) newvertex;
      (*splitseg).ssorient = 1 - (*splitseg).ssorient;
      sptr = (*splitseg).ss[(*splitseg).ssorient]; (rightsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (rightsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      insertsubseg(m, b, &newbotright, (* (int *) ((*splitseg).ss + 6)));
      sptr = (subseg) (newbotright).tri[6 + (newbotright).orient]; (newsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (newsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      (*splitseg).ss[(*splitseg).ssorient] = (subseg) ((unsigned long) (newsubseg).ss | (unsigned long) (newsubseg).ssorient); (newsubseg).ss[(newsubseg).ssorient] = (subseg) ((unsigned long) (*splitseg).ss | (unsigned long) (*splitseg).ssorient);
      (newsubseg).ssorient = 1 - (newsubseg).ssorient;
      (newsubseg).ss[(newsubseg).ssorient] = (subseg) ((unsigned long) (rightsubseg).ss | (unsigned long) (rightsubseg).ssorient); (rightsubseg).ss[(rightsubseg).ssorient] = (subseg) ((unsigned long) (newsubseg).ss | (unsigned long) (newsubseg).ssorient);
      (*splitseg).ssorient = 1 - (*splitseg).ssorient;


      if (((int *) (newvertex))[m->vertexmarkindex] == 0) {
        ((int *) (newvertex))[m->vertexmarkindex] = (* (int *) ((*splitseg).ss + 6));
      }
    }

    if (m->checkquality) {
      poolrestart(&m->flipstackers);
      m->lastflip = (struct flipstacker *) poolalloc(&m->flipstackers);
      m->lastflip->flippedtri = (triangle) ((unsigned long) (horiz).tri | (unsigned long) (horiz).orient);
      m->lastflip->prevflip = (struct flipstacker *) &insertvertex;
    }
# 8417 "triangle.c"
    if (b->verbose > 2) {
      fprintf(stderr, "  Updating bottom left ");
      printtriangle(m, b, &botright);
      if (mirrorflag) {
        fprintf(stderr, "  Updating top left ");
        printtriangle(m, b, &topright);
        fprintf(stderr, "  Creating top right ");
        printtriangle(m, b, &newtopright);
      }
      fprintf(stderr, "  Creating bottom right ");
      printtriangle(m, b, &newbotright);
    }



    (horiz).orient = plus1mod3[(horiz).orient];
  } else {

    (botleft).tri = (horiz).tri; (botleft).orient = plus1mod3[(horiz).orient];
    (botright).tri = (horiz).tri; (botright).orient = minus1mod3[(horiz).orient];
    ptr = (botleft).tri[(botleft).orient]; (botlcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botlcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botlcasing).orient);;
    ptr = (botright).tri[(botright).orient]; (botrcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botrcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botrcasing).orient);;
    maketriangle(m, b, &newbotleft);
    maketriangle(m, b, &newbotright);


    rightvertex = (vertex) (horiz).tri[plus1mod3[(horiz).orient] + 3];
    leftvertex = (vertex) (horiz).tri[minus1mod3[(horiz).orient] + 3];
    botvertex = (vertex) (horiz).tri[(horiz).orient + 3];
    (newbotleft).tri[plus1mod3[(newbotleft).orient] + 3] = (triangle) leftvertex;
    (newbotleft).tri[minus1mod3[(newbotleft).orient] + 3] = (triangle) botvertex;
    (newbotleft).tri[(newbotleft).orient + 3] = (triangle) newvertex;
    (newbotright).tri[plus1mod3[(newbotright).orient] + 3] = (triangle) botvertex;
    (newbotright).tri[minus1mod3[(newbotright).orient] + 3] = (triangle) rightvertex;
    (newbotright).tri[(newbotright).orient + 3] = (triangle) newvertex;
    (horiz).tri[(horiz).orient + 3] = (triangle) newvertex;
    for (i = 0; i < m->eextras; i++) {

      attrib = ((double *) (horiz).tri)[m->elemattribindex + (i)];
      ((double *) (newbotleft).tri)[m->elemattribindex + (i)] = attrib;
      ((double *) (newbotright).tri)[m->elemattribindex + (i)] = attrib;
    }
    if (b->vararea) {

      area = ((double *) (horiz).tri)[m->areaboundindex];
      ((double *) (newbotleft).tri)[m->areaboundindex] = area;
      ((double *) (newbotright).tri)[m->areaboundindex] = area;
    }



    if (m->checksegments) {
      sptr = (subseg) (botleft).tri[6 + (botleft).orient]; (botlsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botlsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      if (botlsubseg.ss != m->dummysub) {
        (botleft).tri[6 + (botleft).orient] = (triangle) m->dummysub;
        (newbotleft).tri[6 + (newbotleft).orient] = (triangle) (subseg) ((unsigned long) (botlsubseg).ss | (unsigned long) (botlsubseg).ssorient); (botlsubseg).ss[4 + (botlsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (newbotleft).tri | (unsigned long) (newbotleft).orient);
      }
      sptr = (subseg) (botright).tri[6 + (botright).orient]; (botrsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botrsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      if (botrsubseg.ss != m->dummysub) {
        (botright).tri[6 + (botright).orient] = (triangle) m->dummysub;
        (newbotright).tri[6 + (newbotright).orient] = (triangle) (subseg) ((unsigned long) (botrsubseg).ss | (unsigned long) (botrsubseg).ssorient); (botrsubseg).ss[4 + (botrsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (newbotright).tri | (unsigned long) (newbotright).orient);
      }
    }


    (newbotleft).tri[(newbotleft).orient] = (triangle) ((unsigned long) (botlcasing).tri | (unsigned long) (botlcasing).orient); (botlcasing).tri[(botlcasing).orient] = (triangle) ((unsigned long) (newbotleft).tri | (unsigned long) (newbotleft).orient);
    (newbotright).tri[(newbotright).orient] = (triangle) ((unsigned long) (botrcasing).tri | (unsigned long) (botrcasing).orient); (botrcasing).tri[(botrcasing).orient] = (triangle) ((unsigned long) (newbotright).tri | (unsigned long) (newbotright).orient);
    (newbotleft).orient = plus1mod3[(newbotleft).orient];
    (newbotright).orient = minus1mod3[(newbotright).orient];
    (newbotleft).tri[(newbotleft).orient] = (triangle) ((unsigned long) (newbotright).tri | (unsigned long) (newbotright).orient); (newbotright).tri[(newbotright).orient] = (triangle) ((unsigned long) (newbotleft).tri | (unsigned long) (newbotleft).orient);
    (newbotleft).orient = plus1mod3[(newbotleft).orient];
    (botleft).tri[(botleft).orient] = (triangle) ((unsigned long) (newbotleft).tri | (unsigned long) (newbotleft).orient); (newbotleft).tri[(newbotleft).orient] = (triangle) ((unsigned long) (botleft).tri | (unsigned long) (botleft).orient);
    (newbotright).orient = minus1mod3[(newbotright).orient];
    (botright).tri[(botright).orient] = (triangle) ((unsigned long) (newbotright).tri | (unsigned long) (newbotright).orient); (newbotright).tri[(newbotright).orient] = (triangle) ((unsigned long) (botright).tri | (unsigned long) (botright).orient);

    if (m->checkquality) {
      poolrestart(&m->flipstackers);
      m->lastflip = (struct flipstacker *) poolalloc(&m->flipstackers);
      m->lastflip->flippedtri = (triangle) ((unsigned long) (horiz).tri | (unsigned long) (horiz).orient);
      m->lastflip->prevflip = (struct flipstacker *) ((void *)0);
    }
# 8517 "triangle.c"
    if (b->verbose > 2) {
      fprintf(stderr, "  Updating top ");
      printtriangle(m, b, &horiz);
      fprintf(stderr, "  Creating left ");
      printtriangle(m, b, &newbotleft);
      fprintf(stderr, "  Creating right ");
      printtriangle(m, b, &newbotright);
    }
  }



  success = SUCCESSFULVERTEX;




  first = (vertex) (horiz).tri[plus1mod3[(horiz).orient] + 3];
  rightvertex = first;
  leftvertex = (vertex) (horiz).tri[minus1mod3[(horiz).orient] + 3];

  while (1) {

    doflip = 1;

    if (m->checksegments) {

      sptr = (subseg) (horiz).tri[6 + (horiz).orient]; (checksubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (checksubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      if (checksubseg.ss != m->dummysub) {

        doflip = 0;

        if (segmentflaws) {

          if (checkseg4encroach(m, b, &checksubseg, iradius)) {
            success = ENCROACHINGVERTEX;
          }
        }

      }
    }

    if (doflip) {

      ptr = (horiz).tri[(horiz).orient]; (top).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (top).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (top).orient);;
      if (top.tri == m->dummytri) {

        doflip = 0;
      } else {

        farvertex = (vertex) (top).tri[(top).orient + 3];





        if ((leftvertex == m->infvertex1) || (leftvertex == m->infvertex2) ||
            (leftvertex == m->infvertex3)) {




          doflip = counterclockwise(m, b, newvertex, rightvertex, farvertex)
                   > 0.0;
        } else if ((rightvertex == m->infvertex1) ||
                   (rightvertex == m->infvertex2) ||
                   (rightvertex == m->infvertex3)) {




          doflip = counterclockwise(m, b, farvertex, leftvertex, newvertex)
                   > 0.0;
        } else if ((farvertex == m->infvertex1) ||
                   (farvertex == m->infvertex2) ||
                   (farvertex == m->infvertex3)) {


          doflip = 0;
        } else {

          doflip = incircle(m, b, leftvertex, newvertex, rightvertex,
                            farvertex) > 0.0;
        }
        if (doflip) {



          (topleft).tri = (top).tri; (topleft).orient = minus1mod3[(top).orient];
          ptr = (topleft).tri[(topleft).orient]; (toplcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (toplcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (toplcasing).orient);;
          (topright).tri = (top).tri; (topright).orient = plus1mod3[(top).orient];
          ptr = (topright).tri[(topright).orient]; (toprcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (toprcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (toprcasing).orient);;
          (botleft).tri = (horiz).tri; (botleft).orient = plus1mod3[(horiz).orient];
          ptr = (botleft).tri[(botleft).orient]; (botlcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botlcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botlcasing).orient);;
          (botright).tri = (horiz).tri; (botright).orient = minus1mod3[(horiz).orient];
          ptr = (botright).tri[(botright).orient]; (botrcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botrcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botrcasing).orient);;

          (topleft).tri[(topleft).orient] = (triangle) ((unsigned long) (botlcasing).tri | (unsigned long) (botlcasing).orient); (botlcasing).tri[(botlcasing).orient] = (triangle) ((unsigned long) (topleft).tri | (unsigned long) (topleft).orient);
          (botleft).tri[(botleft).orient] = (triangle) ((unsigned long) (botrcasing).tri | (unsigned long) (botrcasing).orient); (botrcasing).tri[(botrcasing).orient] = (triangle) ((unsigned long) (botleft).tri | (unsigned long) (botleft).orient);
          (botright).tri[(botright).orient] = (triangle) ((unsigned long) (toprcasing).tri | (unsigned long) (toprcasing).orient); (toprcasing).tri[(toprcasing).orient] = (triangle) ((unsigned long) (botright).tri | (unsigned long) (botright).orient);
          (topright).tri[(topright).orient] = (triangle) ((unsigned long) (toplcasing).tri | (unsigned long) (toplcasing).orient); (toplcasing).tri[(toplcasing).orient] = (triangle) ((unsigned long) (topright).tri | (unsigned long) (topright).orient);
          if (m->checksegments) {

            sptr = (subseg) (topleft).tri[6 + (topleft).orient]; (toplsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (toplsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
            sptr = (subseg) (botleft).tri[6 + (botleft).orient]; (botlsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botlsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
            sptr = (subseg) (botright).tri[6 + (botright).orient]; (botrsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botrsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
            sptr = (subseg) (topright).tri[6 + (topright).orient]; (toprsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (toprsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
            if (toplsubseg.ss == m->dummysub) {
              (topright).tri[6 + (topright).orient] = (triangle) m->dummysub;
            } else {
              (topright).tri[6 + (topright).orient] = (triangle) (subseg) ((unsigned long) (toplsubseg).ss | (unsigned long) (toplsubseg).ssorient); (toplsubseg).ss[4 + (toplsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (topright).tri | (unsigned long) (topright).orient);
            }
            if (botlsubseg.ss == m->dummysub) {
              (topleft).tri[6 + (topleft).orient] = (triangle) m->dummysub;
            } else {
              (topleft).tri[6 + (topleft).orient] = (triangle) (subseg) ((unsigned long) (botlsubseg).ss | (unsigned long) (botlsubseg).ssorient); (botlsubseg).ss[4 + (botlsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (topleft).tri | (unsigned long) (topleft).orient);
            }
            if (botrsubseg.ss == m->dummysub) {
              (botleft).tri[6 + (botleft).orient] = (triangle) m->dummysub;
            } else {
              (botleft).tri[6 + (botleft).orient] = (triangle) (subseg) ((unsigned long) (botrsubseg).ss | (unsigned long) (botrsubseg).ssorient); (botrsubseg).ss[4 + (botrsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (botleft).tri | (unsigned long) (botleft).orient);
            }
            if (toprsubseg.ss == m->dummysub) {
              (botright).tri[6 + (botright).orient] = (triangle) m->dummysub;
            } else {
              (botright).tri[6 + (botright).orient] = (triangle) (subseg) ((unsigned long) (toprsubseg).ss | (unsigned long) (toprsubseg).ssorient); (toprsubseg).ss[4 + (toprsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (botright).tri | (unsigned long) (botright).orient);
            }
          }

          (horiz).tri[plus1mod3[(horiz).orient] + 3] = (triangle) farvertex;
          (horiz).tri[minus1mod3[(horiz).orient] + 3] = (triangle) newvertex;
          (horiz).tri[(horiz).orient + 3] = (triangle) rightvertex;
          (top).tri[plus1mod3[(top).orient] + 3] = (triangle) newvertex;
          (top).tri[minus1mod3[(top).orient] + 3] = (triangle) farvertex;
          (top).tri[(top).orient + 3] = (triangle) leftvertex;
          for (i = 0; i < m->eextras; i++) {

            attrib = 0.5 * (((double *) (top).tri)[m->elemattribindex + (i)] + ((double *) (horiz).tri)[m->elemattribindex + (i)]);
            ((double *) (top).tri)[m->elemattribindex + (i)] = attrib;
            ((double *) (horiz).tri)[m->elemattribindex + (i)] = attrib;
          }
          if (b->vararea) {
            if ((((double *) (top).tri)[m->areaboundindex] <= 0.0) || (((double *) (horiz).tri)[m->areaboundindex] <= 0.0)) {
              area = -1.0;
            } else {



              area = 0.5 * (((double *) (top).tri)[m->areaboundindex] + ((double *) (horiz).tri)[m->areaboundindex]);
            }
            ((double *) (top).tri)[m->areaboundindex] = area;
            ((double *) (horiz).tri)[m->areaboundindex] = area;
          }

          if (m->checkquality) {
            newflip = (struct flipstacker *) poolalloc(&m->flipstackers);
            newflip->flippedtri = (triangle) ((unsigned long) (horiz).tri | (unsigned long) (horiz).orient);
            newflip->prevflip = m->lastflip;
            m->lastflip = newflip;
          }
# 8707 "triangle.c"
          if (b->verbose > 2) {
            fprintf(stderr, "  Edge flip results in left ");
            (topleft).orient = plus1mod3[(topleft).orient];
            printtriangle(m, b, &topleft);
            fprintf(stderr, "  and right ");
            printtriangle(m, b, &horiz);
          }



          (horiz).orient = minus1mod3[(horiz).orient];
          leftvertex = farvertex;
        }
      }
    }
    if (!doflip) {


      if (triflaws) {

        testtriangle(m, b, &horiz);
      }


      (horiz).orient = plus1mod3[(horiz).orient];
      ptr = (horiz).tri[(horiz).orient]; (testtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (testtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (testtri).orient);;



      if ((leftvertex == first) || (testtri.tri == m->dummytri)) {

        (*searchtri).tri = (horiz).tri; (*searchtri).orient = plus1mod3[(horiz).orient];
        (m->recenttri).tri = (horiz).tri; (m->recenttri).orient = plus1mod3[(horiz).orient];
        return success;
      }

      (horiz).tri = (testtri).tri; (horiz).orient = plus1mod3[(testtri).orient];
      rightvertex = leftvertex;
      leftvertex = (vertex) (horiz).tri[minus1mod3[(horiz).orient] + 3];
    }
  }
}
# 8819 "triangle.c"
void triangulatepolygon(m, b, firstedge, lastedge, edgecount, doflip, triflaws)
struct mesh *m;
struct behavior *b;
struct otri *firstedge;
struct otri *lastedge;
int edgecount;
int doflip;
int triflaws;


{
  struct otri testtri;
  struct otri besttri;
  struct otri tempedge;
  vertex leftbasevertex, rightbasevertex;
  vertex testvertex;
  vertex bestvertex;
  int bestnumber;
  int i;
  triangle ptr;


  leftbasevertex = (vertex) (*lastedge).tri[(*lastedge).orient + 3];
  rightbasevertex = (vertex) (*firstedge).tri[minus1mod3[(*firstedge).orient] + 3];
  if (b->verbose > 2) {
    fprintf(stderr, "  Triangulating interior polygon at edge\n");
    fprintf(stderr, "    (%.12g, %.12g) (%.12g, %.12g)\n", leftbasevertex[0],
           leftbasevertex[1], rightbasevertex[0], rightbasevertex[1]);
  }

  (besttri).tri = (*firstedge).tri; (besttri).orient = minus1mod3[(*firstedge).orient]; ptr = (besttri).tri[(besttri).orient]; (besttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (besttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (besttri).orient);;;
  bestvertex = (vertex) (besttri).tri[minus1mod3[(besttri).orient] + 3];
  (testtri).tri = (besttri).tri; (testtri).orient = (besttri).orient;
  bestnumber = 1;
  for (i = 2; i <= edgecount - 2; i++) {
    (testtri).orient = minus1mod3[(testtri).orient]; ptr = (testtri).tri[(testtri).orient]; (testtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (testtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (testtri).orient);;;
    testvertex = (vertex) (testtri).tri[minus1mod3[(testtri).orient] + 3];

    if (incircle(m, b, leftbasevertex, rightbasevertex, bestvertex,
                 testvertex) > 0.0) {
      (besttri).tri = (testtri).tri; (besttri).orient = (testtri).orient;
      bestvertex = testvertex;
      bestnumber = i;
    }
  }
  if (b->verbose > 2) {
    fprintf(stderr, "    Connecting edge to (%.12g, %.12g)\n", bestvertex[0],
           bestvertex[1]);
  }
  if (bestnumber > 1) {

    ptr = (besttri).tri[(besttri).orient]; (tempedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (tempedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (tempedge).orient);; (tempedge).orient = plus1mod3[(tempedge).orient];;
    triangulatepolygon(m, b, firstedge, &tempedge, bestnumber + 1, 1,
                       triflaws);
  }
  if (bestnumber < edgecount - 2) {

    ptr = (besttri).tri[(besttri).orient]; (tempedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (tempedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (tempedge).orient);;
    triangulatepolygon(m, b, &besttri, lastedge, edgecount - bestnumber, 1,
                       triflaws);

    ptr = (tempedge).tri[(tempedge).orient]; (besttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (besttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (besttri).orient);;
  }
  if (doflip) {

    flip(m, b, &besttri);

    if (triflaws) {

      ptr = (besttri).tri[(besttri).orient]; (testtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (testtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (testtri).orient);;
      testtriangle(m, b, &testtri);
    }

  }

  (*lastedge).tri = (besttri).tri; (*lastedge).orient = (besttri).orient;
}
# 8916 "triangle.c"
void deletevertex(m, b, deltri)
struct mesh *m;
struct behavior *b;
struct otri *deltri;


{
  struct otri countingtri;
  struct otri firstedge, lastedge;
  struct otri deltriright;
  struct otri lefttri, righttri;
  struct otri leftcasing, rightcasing;
  struct osub leftsubseg, rightsubseg;
  vertex delvertex;
  vertex neworg;
  int edgecount;
  triangle ptr;
  subseg sptr;

  delvertex = (vertex) (*deltri).tri[plus1mod3[(*deltri).orient] + 3];
  if (b->verbose > 1) {
    fprintf(stderr, "  Deleting (%.12g, %.12g).\n", delvertex[0], delvertex[1]);
  }
  vertexdealloc(m, delvertex);


  (countingtri).tri = (*deltri).tri; (countingtri).orient = minus1mod3[(*deltri).orient]; ptr = (countingtri).tri[(countingtri).orient]; (countingtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (countingtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (countingtri).orient);;;
  edgecount = 1;
  while (!(((*deltri).tri == (countingtri).tri) && ((*deltri).orient == (countingtri).orient))) {







    edgecount++;
    (countingtri).orient = minus1mod3[(countingtri).orient]; ptr = (countingtri).tri[(countingtri).orient]; (countingtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (countingtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (countingtri).orient);;;
  }
# 8963 "triangle.c"
  if (edgecount > 3) {



    (firstedge).tri = (*deltri).tri; (firstedge).orient = minus1mod3[(*deltri).orient]; ptr = (firstedge).tri[(firstedge).orient]; (firstedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (firstedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (firstedge).orient);;;
    ptr = (*deltri).tri[(*deltri).orient]; (lastedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (lastedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (lastedge).orient);; (lastedge).orient = plus1mod3[(lastedge).orient];;
    triangulatepolygon(m, b, &firstedge, &lastedge, edgecount, 0,
                       !b->nobisect);
  }

  (deltriright).tri = (*deltri).tri; (deltriright).orient = minus1mod3[(*deltri).orient];
  ptr = (*deltri).tri[(*deltri).orient]; (lefttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (lefttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (lefttri).orient);; (lefttri).orient = minus1mod3[(lefttri).orient];;
  ptr = (lefttri).tri[(lefttri).orient]; (leftcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (leftcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (leftcasing).orient);;
  ptr = (deltriright).tri[(deltriright).orient]; (righttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (righttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (righttri).orient);; (righttri).orient = plus1mod3[(righttri).orient];;
  ptr = (righttri).tri[(righttri).orient]; (rightcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (rightcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (rightcasing).orient);;
  (*deltri).tri[(*deltri).orient] = (triangle) ((unsigned long) (leftcasing).tri | (unsigned long) (leftcasing).orient); (leftcasing).tri[(leftcasing).orient] = (triangle) ((unsigned long) (*deltri).tri | (unsigned long) (*deltri).orient);
  (deltriright).tri[(deltriright).orient] = (triangle) ((unsigned long) (rightcasing).tri | (unsigned long) (rightcasing).orient); (rightcasing).tri[(rightcasing).orient] = (triangle) ((unsigned long) (deltriright).tri | (unsigned long) (deltriright).orient);
  sptr = (subseg) (lefttri).tri[6 + (lefttri).orient]; (leftsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (leftsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
  if (leftsubseg.ss != m->dummysub) {
    (*deltri).tri[6 + (*deltri).orient] = (triangle) (subseg) ((unsigned long) (leftsubseg).ss | (unsigned long) (leftsubseg).ssorient); (leftsubseg).ss[4 + (leftsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (*deltri).tri | (unsigned long) (*deltri).orient);
  }
  sptr = (subseg) (righttri).tri[6 + (righttri).orient]; (rightsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (rightsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
  if (rightsubseg.ss != m->dummysub) {
    (deltriright).tri[6 + (deltriright).orient] = (triangle) (subseg) ((unsigned long) (rightsubseg).ss | (unsigned long) (rightsubseg).ssorient); (rightsubseg).ss[4 + (rightsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (deltriright).tri | (unsigned long) (deltriright).orient);
  }


  neworg = (vertex) (lefttri).tri[plus1mod3[(lefttri).orient] + 3];
  (*deltri).tri[plus1mod3[(*deltri).orient] + 3] = (triangle) neworg;
  if (!b->nobisect) {
    testtriangle(m, b, deltri);
  }


  triangledealloc(m, lefttri.tri);
  triangledealloc(m, righttri.tri);
}
# 9019 "triangle.c"
void undovertex(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri fliptri;
  struct otri botleft, botright, topright;
  struct otri botlcasing, botrcasing, toprcasing;
  struct otri gluetri;
  struct osub botlsubseg, botrsubseg, toprsubseg;
  vertex botvertex, rightvertex;
  triangle ptr;
  subseg sptr;



  while (m->lastflip != (struct flipstacker *) ((void *)0)) {

    (fliptri).orient = (int) ((unsigned long) (m->lastflip->flippedtri) & (unsigned long) 3l); (fliptri).tri = (triangle *) ((unsigned long) (m->lastflip->flippedtri) ^ (unsigned long) (fliptri).orient);





    if (m->lastflip->prevflip == (struct flipstacker *) ((void *)0)) {


      (botleft).tri = (fliptri).tri; (botleft).orient = plus1mod3[(fliptri).orient]; ptr = (botleft).tri[(botleft).orient]; (botleft).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botleft).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botleft).orient);;;
      (botleft).orient = plus1mod3[(botleft).orient];
      (botright).tri = (fliptri).tri; (botright).orient = minus1mod3[(fliptri).orient]; ptr = (botright).tri[(botright).orient]; (botright).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botright).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botright).orient);;;
      (botright).orient = minus1mod3[(botright).orient];
      ptr = (botleft).tri[(botleft).orient]; (botlcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botlcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botlcasing).orient);;
      ptr = (botright).tri[(botright).orient]; (botrcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botrcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botrcasing).orient);;
      botvertex = (vertex) (botleft).tri[minus1mod3[(botleft).orient] + 3];

      (fliptri).tri[(fliptri).orient + 3] = (triangle) botvertex;
      (fliptri).orient = plus1mod3[(fliptri).orient];
      (fliptri).tri[(fliptri).orient] = (triangle) ((unsigned long) (botlcasing).tri | (unsigned long) (botlcasing).orient); (botlcasing).tri[(botlcasing).orient] = (triangle) ((unsigned long) (fliptri).tri | (unsigned long) (fliptri).orient);
      sptr = (subseg) (botleft).tri[6 + (botleft).orient]; (botlsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botlsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      (fliptri).tri[6 + (fliptri).orient] = (triangle) (subseg) ((unsigned long) (botlsubseg).ss | (unsigned long) (botlsubseg).ssorient); (botlsubseg).ss[4 + (botlsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (fliptri).tri | (unsigned long) (fliptri).orient);
      (fliptri).orient = plus1mod3[(fliptri).orient];
      (fliptri).tri[(fliptri).orient] = (triangle) ((unsigned long) (botrcasing).tri | (unsigned long) (botrcasing).orient); (botrcasing).tri[(botrcasing).orient] = (triangle) ((unsigned long) (fliptri).tri | (unsigned long) (fliptri).orient);
      sptr = (subseg) (botright).tri[6 + (botright).orient]; (botrsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botrsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      (fliptri).tri[6 + (fliptri).orient] = (triangle) (subseg) ((unsigned long) (botrsubseg).ss | (unsigned long) (botrsubseg).ssorient); (botrsubseg).ss[4 + (botrsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (fliptri).tri | (unsigned long) (fliptri).orient);


      triangledealloc(m, botleft.tri);
      triangledealloc(m, botright.tri);
    } else if (m->lastflip->prevflip == (struct flipstacker *) &insertvertex) {


      (gluetri).tri = (fliptri).tri; (gluetri).orient = minus1mod3[(fliptri).orient];
      ptr = (gluetri).tri[(gluetri).orient]; (botright).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botright).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botright).orient);;
      (botright).orient = plus1mod3[(botright).orient];
      ptr = (botright).tri[(botright).orient]; (botrcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (botrcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (botrcasing).orient);;
      rightvertex = (vertex) (botright).tri[minus1mod3[(botright).orient] + 3];

      (fliptri).tri[plus1mod3[(fliptri).orient] + 3] = (triangle) rightvertex;
      (gluetri).tri[(gluetri).orient] = (triangle) ((unsigned long) (botrcasing).tri | (unsigned long) (botrcasing).orient); (botrcasing).tri[(botrcasing).orient] = (triangle) ((unsigned long) (gluetri).tri | (unsigned long) (gluetri).orient);
      sptr = (subseg) (botright).tri[6 + (botright).orient]; (botrsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (botrsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      (gluetri).tri[6 + (gluetri).orient] = (triangle) (subseg) ((unsigned long) (botrsubseg).ss | (unsigned long) (botrsubseg).ssorient); (botrsubseg).ss[4 + (botrsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (gluetri).tri | (unsigned long) (gluetri).orient);


      triangledealloc(m, botright.tri);

      ptr = (fliptri).tri[(fliptri).orient]; (gluetri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (gluetri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (gluetri).orient);;
      if (gluetri.tri != m->dummytri) {
        (gluetri).orient = plus1mod3[(gluetri).orient];
        ptr = (gluetri).tri[(gluetri).orient]; (topright).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (topright).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (topright).orient);; (topright).orient = minus1mod3[(topright).orient];;
        ptr = (topright).tri[(topright).orient]; (toprcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (toprcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (toprcasing).orient);;

        (gluetri).tri[plus1mod3[(gluetri).orient] + 3] = (triangle) rightvertex;
        (gluetri).tri[(gluetri).orient] = (triangle) ((unsigned long) (toprcasing).tri | (unsigned long) (toprcasing).orient); (toprcasing).tri[(toprcasing).orient] = (triangle) ((unsigned long) (gluetri).tri | (unsigned long) (gluetri).orient);
        sptr = (subseg) (topright).tri[6 + (topright).orient]; (toprsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (toprsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
        (gluetri).tri[6 + (gluetri).orient] = (triangle) (subseg) ((unsigned long) (toprsubseg).ss | (unsigned long) (toprsubseg).ssorient); (toprsubseg).ss[4 + (toprsubseg).ssorient] = (subseg) (triangle) ((unsigned long) (gluetri).tri | (unsigned long) (gluetri).orient);


        triangledealloc(m, topright.tri);
      }


      m->lastflip->prevflip = (struct flipstacker *) ((void *)0);
    } else {

      unflip(m, b, &fliptri);
    }


    m->lastflip = m->lastflip->prevflip;
  }
}
# 9166 "triangle.c"
void vertexsort(sortarray, arraysize)
vertex *sortarray;
int arraysize;


{
  int left, right;
  int pivot;
  double pivotx, pivoty;
  vertex temp;

  if (arraysize == 2) {

    if ((sortarray[0][0] > sortarray[1][0]) ||
        ((sortarray[0][0] == sortarray[1][0]) &&
         (sortarray[0][1] > sortarray[1][1]))) {
      temp = sortarray[1];
      sortarray[1] = sortarray[0];
      sortarray[0] = temp;
    }
    return;
  }

  pivot = (int) randomnation(arraysize);
  pivotx = sortarray[pivot][0];
  pivoty = sortarray[pivot][1];

  left = -1;
  right = arraysize;
  while (left < right) {

    do {
      left++;
    } while ((left <= right) && ((sortarray[left][0] < pivotx) ||
                                 ((sortarray[left][0] == pivotx) &&
                                  (sortarray[left][1] < pivoty))));

    do {
      right--;
    } while ((left <= right) && ((sortarray[right][0] > pivotx) ||
                                 ((sortarray[right][0] == pivotx) &&
                                  (sortarray[right][1] > pivoty))));
    if (left < right) {

      temp = sortarray[left];
      sortarray[left] = sortarray[right];
      sortarray[right] = temp;
    }
  }
  if (left > 1) {

    vertexsort(sortarray, left);
  }
  if (right < arraysize - 2) {

    vertexsort(&sortarray[right + 1], arraysize - right - 1);
  }
}
# 9240 "triangle.c"
void vertexmedian(sortarray, arraysize, median, axis)
vertex *sortarray;
int arraysize;
int median;
int axis;


{
  int left, right;
  int pivot;
  double pivot1, pivot2;
  vertex temp;

  if (arraysize == 2) {

    if ((sortarray[0][axis] > sortarray[1][axis]) ||
        ((sortarray[0][axis] == sortarray[1][axis]) &&
         (sortarray[0][1 - axis] > sortarray[1][1 - axis]))) {
      temp = sortarray[1];
      sortarray[1] = sortarray[0];
      sortarray[0] = temp;
    }
    return;
  }

  pivot = (int) randomnation(arraysize);
  pivot1 = sortarray[pivot][axis];
  pivot2 = sortarray[pivot][1 - axis];

  left = -1;
  right = arraysize;
  while (left < right) {

    do {
      left++;
    } while ((left <= right) && ((sortarray[left][axis] < pivot1) ||
                                 ((sortarray[left][axis] == pivot1) &&
                                  (sortarray[left][1 - axis] < pivot2))));

    do {
      right--;
    } while ((left <= right) && ((sortarray[right][axis] > pivot1) ||
                                 ((sortarray[right][axis] == pivot1) &&
                                  (sortarray[right][1 - axis] > pivot2))));
    if (left < right) {

      temp = sortarray[left];
      sortarray[left] = sortarray[right];
      sortarray[right] = temp;
    }
  }


  if (left > median) {

    vertexmedian(sortarray, left, median, axis);
  }
  if (right < median - 1) {

    vertexmedian(&sortarray[right + 1], arraysize - right - 1,
                 median - right - 1, axis);
  }
}
# 9318 "triangle.c"
void alternateaxes(sortarray, arraysize, axis)
vertex *sortarray;
int arraysize;
int axis;


{
  int divider;

  divider = arraysize >> 1;
  if (arraysize <= 3) {


    axis = 0;
  }

  vertexmedian(sortarray, arraysize, divider, axis);

  if (arraysize - divider >= 2) {
    if (divider >= 2) {
      alternateaxes(sortarray, divider, 1 - axis);
    }
    alternateaxes(&sortarray[divider], arraysize - divider, 1 - axis);
  }
}
# 9384 "triangle.c"
void mergehulls(m, b, farleft, innerleft, innerright, farright, axis)
struct mesh *m;
struct behavior *b;
struct otri *farleft;
struct otri *innerleft;
struct otri *innerright;
struct otri *farright;
int axis;


{
  struct otri leftcand, rightcand;
  struct otri baseedge;
  struct otri nextedge;
  struct otri sidecasing, topcasing, outercasing;
  struct otri checkedge;
  vertex innerleftdest;
  vertex innerrightorg;
  vertex innerleftapex, innerrightapex;
  vertex farleftpt, farrightpt;
  vertex farleftapex, farrightapex;
  vertex lowerleft, lowerright;
  vertex upperleft, upperright;
  vertex nextapex;
  vertex checkvertex;
  int changemade;
  int badedge;
  int leftfinished, rightfinished;
  triangle ptr;

  innerleftdest = (vertex) (*innerleft).tri[minus1mod3[(*innerleft).orient] + 3];
  innerleftapex = (vertex) (*innerleft).tri[(*innerleft).orient + 3];
  innerrightorg = (vertex) (*innerright).tri[plus1mod3[(*innerright).orient] + 3];
  innerrightapex = (vertex) (*innerright).tri[(*innerright).orient + 3];

  if (b->dwyer && (axis == 1)) {
    farleftpt = (vertex) (*farleft).tri[plus1mod3[(*farleft).orient] + 3];
    farleftapex = (vertex) (*farleft).tri[(*farleft).orient + 3];
    farrightpt = (vertex) (*farright).tri[minus1mod3[(*farright).orient] + 3];
    farrightapex = (vertex) (*farright).tri[(*farright).orient + 3];



    while (farleftapex[1] < farleftpt[1]) {
      (*farleft).orient = plus1mod3[(*farleft).orient];
      ptr = (*farleft).tri[(*farleft).orient]; (*farleft).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*farleft).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*farleft).orient);;
      farleftpt = farleftapex;
      farleftapex = (vertex) (*farleft).tri[(*farleft).orient + 3];
    }
    ptr = (*innerleft).tri[(*innerleft).orient]; (checkedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkedge).orient);;
    checkvertex = (vertex) (checkedge).tri[(checkedge).orient + 3];
    while (checkvertex[1] > innerleftdest[1]) {
      (*innerleft).tri = (checkedge).tri; (*innerleft).orient = plus1mod3[(checkedge).orient];
      innerleftapex = innerleftdest;
      innerleftdest = checkvertex;
      ptr = (*innerleft).tri[(*innerleft).orient]; (checkedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkedge).orient);;
      checkvertex = (vertex) (checkedge).tri[(checkedge).orient + 3];
    }
    while (innerrightapex[1] < innerrightorg[1]) {
      (*innerright).orient = plus1mod3[(*innerright).orient];
      ptr = (*innerright).tri[(*innerright).orient]; (*innerright).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*innerright).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*innerright).orient);;
      innerrightorg = innerrightapex;
      innerrightapex = (vertex) (*innerright).tri[(*innerright).orient + 3];
    }
    ptr = (*farright).tri[(*farright).orient]; (checkedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkedge).orient);;
    checkvertex = (vertex) (checkedge).tri[(checkedge).orient + 3];
    while (checkvertex[1] > farrightpt[1]) {
      (*farright).tri = (checkedge).tri; (*farright).orient = plus1mod3[(checkedge).orient];
      farrightapex = farrightpt;
      farrightpt = checkvertex;
      ptr = (*farright).tri[(*farright).orient]; (checkedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkedge).orient);;
      checkvertex = (vertex) (checkedge).tri[(checkedge).orient + 3];
    }
  }

  do {
    changemade = 0;

    if (counterclockwise(m, b, innerleftdest, innerleftapex, innerrightorg) >
        0.0) {
      (*innerleft).orient = minus1mod3[(*innerleft).orient];
      ptr = (*innerleft).tri[(*innerleft).orient]; (*innerleft).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*innerleft).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*innerleft).orient);;
      innerleftdest = innerleftapex;
      innerleftapex = (vertex) (*innerleft).tri[(*innerleft).orient + 3];
      changemade = 1;
    }

    if (counterclockwise(m, b, innerrightapex, innerrightorg, innerleftdest) >
        0.0) {
      (*innerright).orient = plus1mod3[(*innerright).orient];
      ptr = (*innerright).tri[(*innerright).orient]; (*innerright).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*innerright).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*innerright).orient);;
      innerrightorg = innerrightapex;
      innerrightapex = (vertex) (*innerright).tri[(*innerright).orient + 3];
      changemade = 1;
    }
  } while (changemade);

  ptr = (*innerleft).tri[(*innerleft).orient]; (leftcand).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (leftcand).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (leftcand).orient);;
  ptr = (*innerright).tri[(*innerright).orient]; (rightcand).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (rightcand).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (rightcand).orient);;

  maketriangle(m, b, &baseedge);

  (baseedge).tri[(baseedge).orient] = (triangle) ((unsigned long) (*innerleft).tri | (unsigned long) (*innerleft).orient); (*innerleft).tri[(*innerleft).orient] = (triangle) ((unsigned long) (baseedge).tri | (unsigned long) (baseedge).orient);
  (baseedge).orient = plus1mod3[(baseedge).orient];
  (baseedge).tri[(baseedge).orient] = (triangle) ((unsigned long) (*innerright).tri | (unsigned long) (*innerright).orient); (*innerright).tri[(*innerright).orient] = (triangle) ((unsigned long) (baseedge).tri | (unsigned long) (baseedge).orient);
  (baseedge).orient = plus1mod3[(baseedge).orient];
  (baseedge).tri[plus1mod3[(baseedge).orient] + 3] = (triangle) innerrightorg;
  (baseedge).tri[minus1mod3[(baseedge).orient] + 3] = (triangle) innerleftdest;

  if (b->verbose > 2) {
    fprintf(stderr, "  Creating base bounding ");
    printtriangle(m, b, &baseedge);
  }

  farleftpt = (vertex) (*farleft).tri[plus1mod3[(*farleft).orient] + 3];
  if (innerleftdest == farleftpt) {
    (*farleft).tri = (baseedge).tri; (*farleft).orient = plus1mod3[(baseedge).orient];
  }
  farrightpt = (vertex) (*farright).tri[minus1mod3[(*farright).orient] + 3];
  if (innerrightorg == farrightpt) {
    (*farright).tri = (baseedge).tri; (*farright).orient = minus1mod3[(baseedge).orient];
  }

  lowerleft = innerleftdest;
  lowerright = innerrightorg;

  upperleft = (vertex) (leftcand).tri[(leftcand).orient + 3];
  upperright = (vertex) (rightcand).tri[(rightcand).orient + 3];

  while (1) {




    leftfinished = counterclockwise(m, b, upperleft, lowerleft, lowerright) <=
                   0.0;
    rightfinished = counterclockwise(m, b, upperright, lowerleft, lowerright)
                 <= 0.0;
    if (leftfinished && rightfinished) {

      maketriangle(m, b, &nextedge);
      (nextedge).tri[plus1mod3[(nextedge).orient] + 3] = (triangle) lowerleft;
      (nextedge).tri[minus1mod3[(nextedge).orient] + 3] = (triangle) lowerright;


      (nextedge).tri[(nextedge).orient] = (triangle) ((unsigned long) (baseedge).tri | (unsigned long) (baseedge).orient); (baseedge).tri[(baseedge).orient] = (triangle) ((unsigned long) (nextedge).tri | (unsigned long) (nextedge).orient);
      (nextedge).orient = plus1mod3[(nextedge).orient];
      (nextedge).tri[(nextedge).orient] = (triangle) ((unsigned long) (rightcand).tri | (unsigned long) (rightcand).orient); (rightcand).tri[(rightcand).orient] = (triangle) ((unsigned long) (nextedge).tri | (unsigned long) (nextedge).orient);
      (nextedge).orient = plus1mod3[(nextedge).orient];
      (nextedge).tri[(nextedge).orient] = (triangle) ((unsigned long) (leftcand).tri | (unsigned long) (leftcand).orient); (leftcand).tri[(leftcand).orient] = (triangle) ((unsigned long) (nextedge).tri | (unsigned long) (nextedge).orient);
      if (b->verbose > 2) {
        fprintf(stderr, "  Creating top bounding ");
        printtriangle(m, b, &nextedge);
      }

      if (b->dwyer && (axis == 1)) {
        farleftpt = (vertex) (*farleft).tri[plus1mod3[(*farleft).orient] + 3];
        farleftapex = (vertex) (*farleft).tri[(*farleft).orient + 3];
        farrightpt = (vertex) (*farright).tri[minus1mod3[(*farright).orient] + 3];
        farrightapex = (vertex) (*farright).tri[(*farright).orient + 3];
        ptr = (*farleft).tri[(*farleft).orient]; (checkedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkedge).orient);;
        checkvertex = (vertex) (checkedge).tri[(checkedge).orient + 3];



        while (checkvertex[0] < farleftpt[0]) {
          (*farleft).tri = (checkedge).tri; (*farleft).orient = minus1mod3[(checkedge).orient];
          farleftapex = farleftpt;
          farleftpt = checkvertex;
          ptr = (*farleft).tri[(*farleft).orient]; (checkedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkedge).orient);;
          checkvertex = (vertex) (checkedge).tri[(checkedge).orient + 3];
        }
        while (farrightapex[0] > farrightpt[0]) {
          (*farright).orient = minus1mod3[(*farright).orient];
          ptr = (*farright).tri[(*farright).orient]; (*farright).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*farright).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*farright).orient);;
          farrightpt = farrightapex;
          farrightapex = (vertex) (*farright).tri[(*farright).orient + 3];
        }
      }
      return;
    }

    if (!leftfinished) {

      (nextedge).tri = (leftcand).tri; (nextedge).orient = minus1mod3[(leftcand).orient];
      ptr = (nextedge).tri[(nextedge).orient]; (nextedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nextedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nextedge).orient);;
      nextapex = (vertex) (nextedge).tri[(nextedge).orient + 3];


      if (nextapex != (vertex) ((void *)0)) {

        badedge = incircle(m, b, lowerleft, lowerright, upperleft, nextapex) >
                  0.0;
        while (badedge) {


          (nextedge).orient = plus1mod3[(nextedge).orient];
          ptr = (nextedge).tri[(nextedge).orient]; (topcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (topcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (topcasing).orient);;
          (nextedge).orient = plus1mod3[(nextedge).orient];
          ptr = (nextedge).tri[(nextedge).orient]; (sidecasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (sidecasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (sidecasing).orient);;
          (nextedge).tri[(nextedge).orient] = (triangle) ((unsigned long) (topcasing).tri | (unsigned long) (topcasing).orient); (topcasing).tri[(topcasing).orient] = (triangle) ((unsigned long) (nextedge).tri | (unsigned long) (nextedge).orient);
          (leftcand).tri[(leftcand).orient] = (triangle) ((unsigned long) (sidecasing).tri | (unsigned long) (sidecasing).orient); (sidecasing).tri[(sidecasing).orient] = (triangle) ((unsigned long) (leftcand).tri | (unsigned long) (leftcand).orient);
          (leftcand).orient = plus1mod3[(leftcand).orient];
          ptr = (leftcand).tri[(leftcand).orient]; (outercasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (outercasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (outercasing).orient);;
          (nextedge).orient = minus1mod3[(nextedge).orient];
          (nextedge).tri[(nextedge).orient] = (triangle) ((unsigned long) (outercasing).tri | (unsigned long) (outercasing).orient); (outercasing).tri[(outercasing).orient] = (triangle) ((unsigned long) (nextedge).tri | (unsigned long) (nextedge).orient);

          (leftcand).tri[plus1mod3[(leftcand).orient] + 3] = (triangle) lowerleft;
          (leftcand).tri[minus1mod3[(leftcand).orient] + 3] = (triangle) ((void *)0);
          (leftcand).tri[(leftcand).orient + 3] = (triangle) nextapex;
          (nextedge).tri[plus1mod3[(nextedge).orient] + 3] = (triangle) ((void *)0);
          (nextedge).tri[minus1mod3[(nextedge).orient] + 3] = (triangle) upperleft;
          (nextedge).tri[(nextedge).orient + 3] = (triangle) nextapex;

          upperleft = nextapex;

          (nextedge).tri = (sidecasing).tri; (nextedge).orient = (sidecasing).orient;
          nextapex = (vertex) (nextedge).tri[(nextedge).orient + 3];
          if (nextapex != (vertex) ((void *)0)) {

            badedge = incircle(m, b, lowerleft, lowerright, upperleft,
                               nextapex) > 0.0;
          } else {

            badedge = 0;
          }
        }
      }
    }

    if (!rightfinished) {

      (nextedge).tri = (rightcand).tri; (nextedge).orient = plus1mod3[(rightcand).orient];
      ptr = (nextedge).tri[(nextedge).orient]; (nextedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nextedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nextedge).orient);;
      nextapex = (vertex) (nextedge).tri[(nextedge).orient + 3];


      if (nextapex != (vertex) ((void *)0)) {

        badedge = incircle(m, b, lowerleft, lowerright, upperright, nextapex) >
                  0.0;
        while (badedge) {


          (nextedge).orient = minus1mod3[(nextedge).orient];
          ptr = (nextedge).tri[(nextedge).orient]; (topcasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (topcasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (topcasing).orient);;
          (nextedge).orient = minus1mod3[(nextedge).orient];
          ptr = (nextedge).tri[(nextedge).orient]; (sidecasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (sidecasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (sidecasing).orient);;
          (nextedge).tri[(nextedge).orient] = (triangle) ((unsigned long) (topcasing).tri | (unsigned long) (topcasing).orient); (topcasing).tri[(topcasing).orient] = (triangle) ((unsigned long) (nextedge).tri | (unsigned long) (nextedge).orient);
          (rightcand).tri[(rightcand).orient] = (triangle) ((unsigned long) (sidecasing).tri | (unsigned long) (sidecasing).orient); (sidecasing).tri[(sidecasing).orient] = (triangle) ((unsigned long) (rightcand).tri | (unsigned long) (rightcand).orient);
          (rightcand).orient = minus1mod3[(rightcand).orient];
          ptr = (rightcand).tri[(rightcand).orient]; (outercasing).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (outercasing).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (outercasing).orient);;
          (nextedge).orient = plus1mod3[(nextedge).orient];
          (nextedge).tri[(nextedge).orient] = (triangle) ((unsigned long) (outercasing).tri | (unsigned long) (outercasing).orient); (outercasing).tri[(outercasing).orient] = (triangle) ((unsigned long) (nextedge).tri | (unsigned long) (nextedge).orient);

          (rightcand).tri[plus1mod3[(rightcand).orient] + 3] = (triangle) ((void *)0);
          (rightcand).tri[minus1mod3[(rightcand).orient] + 3] = (triangle) lowerright;
          (rightcand).tri[(rightcand).orient + 3] = (triangle) nextapex;
          (nextedge).tri[plus1mod3[(nextedge).orient] + 3] = (triangle) upperright;
          (nextedge).tri[minus1mod3[(nextedge).orient] + 3] = (triangle) ((void *)0);
          (nextedge).tri[(nextedge).orient + 3] = (triangle) nextapex;

          upperright = nextapex;

          (nextedge).tri = (sidecasing).tri; (nextedge).orient = (sidecasing).orient;
          nextapex = (vertex) (nextedge).tri[(nextedge).orient + 3];
          if (nextapex != (vertex) ((void *)0)) {

            badedge = incircle(m, b, lowerleft, lowerright, upperright,
                               nextapex) > 0.0;
          } else {

            badedge = 0;
          }
        }
      }
    }
    if (leftfinished || (!rightfinished &&
           (incircle(m, b, upperleft, lowerleft, lowerright, upperright) >
            0.0))) {


      (baseedge).tri[(baseedge).orient] = (triangle) ((unsigned long) (rightcand).tri | (unsigned long) (rightcand).orient); (rightcand).tri[(rightcand).orient] = (triangle) ((unsigned long) (baseedge).tri | (unsigned long) (baseedge).orient);
      (baseedge).tri = (rightcand).tri; (baseedge).orient = minus1mod3[(rightcand).orient];
      (baseedge).tri[minus1mod3[(baseedge).orient] + 3] = (triangle) lowerleft;
      lowerright = upperright;
      ptr = (baseedge).tri[(baseedge).orient]; (rightcand).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (rightcand).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (rightcand).orient);;
      upperright = (vertex) (rightcand).tri[(rightcand).orient + 3];
    } else {


      (baseedge).tri[(baseedge).orient] = (triangle) ((unsigned long) (leftcand).tri | (unsigned long) (leftcand).orient); (leftcand).tri[(leftcand).orient] = (triangle) ((unsigned long) (baseedge).tri | (unsigned long) (baseedge).orient);
      (baseedge).tri = (leftcand).tri; (baseedge).orient = plus1mod3[(leftcand).orient];
      (baseedge).tri[plus1mod3[(baseedge).orient] + 3] = (triangle) lowerright;
      lowerleft = upperleft;
      ptr = (baseedge).tri[(baseedge).orient]; (leftcand).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (leftcand).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (leftcand).orient);;
      upperleft = (vertex) (leftcand).tri[(leftcand).orient + 3];
    }
    if (b->verbose > 2) {
      fprintf(stderr, "  Connecting ");
      printtriangle(m, b, &baseedge);
    }
  }
}
# 9711 "triangle.c"
void divconqrecurse(m, b, sortarray, vertices, axis, farleft, farright)
struct mesh *m;
struct behavior *b;
vertex *sortarray;
int vertices;
int axis;
struct otri *farleft;
struct otri *farright;


{
  struct otri midtri, tri1, tri2, tri3;
  struct otri innerleft, innerright;
  double area;
  int divider;

  if (b->verbose > 2) {
    fprintf(stderr, "  Triangulating %d vertices.\n", vertices);
  }
  if (vertices == 2) {


    maketriangle(m, b, farleft);
    (*farleft).tri[plus1mod3[(*farleft).orient] + 3] = (triangle) sortarray[0];
    (*farleft).tri[minus1mod3[(*farleft).orient] + 3] = (triangle) sortarray[1];

    maketriangle(m, b, farright);
    (*farright).tri[plus1mod3[(*farright).orient] + 3] = (triangle) sortarray[1];
    (*farright).tri[minus1mod3[(*farright).orient] + 3] = (triangle) sortarray[0];

    (*farleft).tri[(*farleft).orient] = (triangle) ((unsigned long) (*farright).tri | (unsigned long) (*farright).orient); (*farright).tri[(*farright).orient] = (triangle) ((unsigned long) (*farleft).tri | (unsigned long) (*farleft).orient);
    (*farleft).orient = minus1mod3[(*farleft).orient];
    (*farright).orient = plus1mod3[(*farright).orient];
    (*farleft).tri[(*farleft).orient] = (triangle) ((unsigned long) (*farright).tri | (unsigned long) (*farright).orient); (*farright).tri[(*farright).orient] = (triangle) ((unsigned long) (*farleft).tri | (unsigned long) (*farleft).orient);
    (*farleft).orient = minus1mod3[(*farleft).orient];
    (*farright).orient = plus1mod3[(*farright).orient];
    (*farleft).tri[(*farleft).orient] = (triangle) ((unsigned long) (*farright).tri | (unsigned long) (*farright).orient); (*farright).tri[(*farright).orient] = (triangle) ((unsigned long) (*farleft).tri | (unsigned long) (*farleft).orient);
    if (b->verbose > 2) {
      fprintf(stderr, "  Creating ");
      printtriangle(m, b, farleft);
      fprintf(stderr, "  Creating ");
      printtriangle(m, b, farright);
    }

    (*farleft).tri = (*farright).tri; (*farleft).orient = minus1mod3[(*farright).orient];
    return;
  } else if (vertices == 3) {



    maketriangle(m, b, &midtri);
    maketriangle(m, b, &tri1);
    maketriangle(m, b, &tri2);
    maketriangle(m, b, &tri3);
    area = counterclockwise(m, b, sortarray[0], sortarray[1], sortarray[2]);
    if (area == 0.0) {

      (midtri).tri[plus1mod3[(midtri).orient] + 3] = (triangle) sortarray[0];
      (midtri).tri[minus1mod3[(midtri).orient] + 3] = (triangle) sortarray[1];
      (tri1).tri[plus1mod3[(tri1).orient] + 3] = (triangle) sortarray[1];
      (tri1).tri[minus1mod3[(tri1).orient] + 3] = (triangle) sortarray[0];
      (tri2).tri[plus1mod3[(tri2).orient] + 3] = (triangle) sortarray[2];
      (tri2).tri[minus1mod3[(tri2).orient] + 3] = (triangle) sortarray[1];
      (tri3).tri[plus1mod3[(tri3).orient] + 3] = (triangle) sortarray[1];
      (tri3).tri[minus1mod3[(tri3).orient] + 3] = (triangle) sortarray[2];

      (midtri).tri[(midtri).orient] = (triangle) ((unsigned long) (tri1).tri | (unsigned long) (tri1).orient); (tri1).tri[(tri1).orient] = (triangle) ((unsigned long) (midtri).tri | (unsigned long) (midtri).orient);
      (tri2).tri[(tri2).orient] = (triangle) ((unsigned long) (tri3).tri | (unsigned long) (tri3).orient); (tri3).tri[(tri3).orient] = (triangle) ((unsigned long) (tri2).tri | (unsigned long) (tri2).orient);
      (midtri).orient = plus1mod3[(midtri).orient];
      (tri1).orient = minus1mod3[(tri1).orient];
      (tri2).orient = plus1mod3[(tri2).orient];
      (tri3).orient = minus1mod3[(tri3).orient];
      (midtri).tri[(midtri).orient] = (triangle) ((unsigned long) (tri3).tri | (unsigned long) (tri3).orient); (tri3).tri[(tri3).orient] = (triangle) ((unsigned long) (midtri).tri | (unsigned long) (midtri).orient);
      (tri1).tri[(tri1).orient] = (triangle) ((unsigned long) (tri2).tri | (unsigned long) (tri2).orient); (tri2).tri[(tri2).orient] = (triangle) ((unsigned long) (tri1).tri | (unsigned long) (tri1).orient);
      (midtri).orient = plus1mod3[(midtri).orient];
      (tri1).orient = minus1mod3[(tri1).orient];
      (tri2).orient = plus1mod3[(tri2).orient];
      (tri3).orient = minus1mod3[(tri3).orient];
      (midtri).tri[(midtri).orient] = (triangle) ((unsigned long) (tri1).tri | (unsigned long) (tri1).orient); (tri1).tri[(tri1).orient] = (triangle) ((unsigned long) (midtri).tri | (unsigned long) (midtri).orient);
      (tri2).tri[(tri2).orient] = (triangle) ((unsigned long) (tri3).tri | (unsigned long) (tri3).orient); (tri3).tri[(tri3).orient] = (triangle) ((unsigned long) (tri2).tri | (unsigned long) (tri2).orient);

      (*farleft).tri = (tri1).tri; (*farleft).orient = (tri1).orient;

      (*farright).tri = (tri2).tri; (*farright).orient = (tri2).orient;
    } else {


      (midtri).tri[plus1mod3[(midtri).orient] + 3] = (triangle) sortarray[0];
      (tri1).tri[minus1mod3[(tri1).orient] + 3] = (triangle) sortarray[0];
      (tri3).tri[plus1mod3[(tri3).orient] + 3] = (triangle) sortarray[0];

      if (area > 0.0) {

        (midtri).tri[minus1mod3[(midtri).orient] + 3] = (triangle) sortarray[1];
        (tri1).tri[plus1mod3[(tri1).orient] + 3] = (triangle) sortarray[1];
        (tri2).tri[minus1mod3[(tri2).orient] + 3] = (triangle) sortarray[1];
        (midtri).tri[(midtri).orient + 3] = (triangle) sortarray[2];
        (tri2).tri[plus1mod3[(tri2).orient] + 3] = (triangle) sortarray[2];
        (tri3).tri[minus1mod3[(tri3).orient] + 3] = (triangle) sortarray[2];
      } else {

        (midtri).tri[minus1mod3[(midtri).orient] + 3] = (triangle) sortarray[2];
        (tri1).tri[plus1mod3[(tri1).orient] + 3] = (triangle) sortarray[2];
        (tri2).tri[minus1mod3[(tri2).orient] + 3] = (triangle) sortarray[2];
        (midtri).tri[(midtri).orient + 3] = (triangle) sortarray[1];
        (tri2).tri[plus1mod3[(tri2).orient] + 3] = (triangle) sortarray[1];
        (tri3).tri[minus1mod3[(tri3).orient] + 3] = (triangle) sortarray[1];
      }

      (midtri).tri[(midtri).orient] = (triangle) ((unsigned long) (tri1).tri | (unsigned long) (tri1).orient); (tri1).tri[(tri1).orient] = (triangle) ((unsigned long) (midtri).tri | (unsigned long) (midtri).orient);
      (midtri).orient = plus1mod3[(midtri).orient];
      (midtri).tri[(midtri).orient] = (triangle) ((unsigned long) (tri2).tri | (unsigned long) (tri2).orient); (tri2).tri[(tri2).orient] = (triangle) ((unsigned long) (midtri).tri | (unsigned long) (midtri).orient);
      (midtri).orient = plus1mod3[(midtri).orient];
      (midtri).tri[(midtri).orient] = (triangle) ((unsigned long) (tri3).tri | (unsigned long) (tri3).orient); (tri3).tri[(tri3).orient] = (triangle) ((unsigned long) (midtri).tri | (unsigned long) (midtri).orient);
      (tri1).orient = minus1mod3[(tri1).orient];
      (tri2).orient = plus1mod3[(tri2).orient];
      (tri1).tri[(tri1).orient] = (triangle) ((unsigned long) (tri2).tri | (unsigned long) (tri2).orient); (tri2).tri[(tri2).orient] = (triangle) ((unsigned long) (tri1).tri | (unsigned long) (tri1).orient);
      (tri1).orient = minus1mod3[(tri1).orient];
      (tri3).orient = minus1mod3[(tri3).orient];
      (tri1).tri[(tri1).orient] = (triangle) ((unsigned long) (tri3).tri | (unsigned long) (tri3).orient); (tri3).tri[(tri3).orient] = (triangle) ((unsigned long) (tri1).tri | (unsigned long) (tri1).orient);
      (tri2).orient = plus1mod3[(tri2).orient];
      (tri3).orient = minus1mod3[(tri3).orient];
      (tri2).tri[(tri2).orient] = (triangle) ((unsigned long) (tri3).tri | (unsigned long) (tri3).orient); (tri3).tri[(tri3).orient] = (triangle) ((unsigned long) (tri2).tri | (unsigned long) (tri2).orient);

      (*farleft).tri = (tri1).tri; (*farleft).orient = (tri1).orient;

      if (area > 0.0) {
        (*farright).tri = (tri2).tri; (*farright).orient = (tri2).orient;
      } else {
        (*farright).tri = (*farleft).tri; (*farright).orient = plus1mod3[(*farleft).orient];
      }
    }
    if (b->verbose > 2) {
      fprintf(stderr, "  Creating ");
      printtriangle(m, b, &midtri);
      fprintf(stderr, "  Creating ");
      printtriangle(m, b, &tri1);
      fprintf(stderr, "  Creating ");
      printtriangle(m, b, &tri2);
      fprintf(stderr, "  Creating ");
      printtriangle(m, b, &tri3);
    }
    return;
  } else {

    divider = vertices >> 1;

    divconqrecurse(m, b, sortarray, divider, 1 - axis, farleft, &innerleft);
    divconqrecurse(m, b, &sortarray[divider], vertices - divider, 1 - axis,
                   &innerright, farright);
    if (b->verbose > 1) {
      fprintf(stderr, "  Joining triangulations with %d and %d vertices.\n", divider,
             vertices - divider);
    }

    mergehulls(m, b, farleft, &innerleft, &innerright, farright, axis);
  }
}




long removeghosts(m, b, startghost)
struct mesh *m;
struct behavior *b;
struct otri *startghost;


{
  struct otri searchedge;
  struct otri dissolveedge;
  struct otri deadtriangle;
  vertex markorg;
  long hullsize;
  triangle ptr;

  if (b->verbose) {
    fprintf(stderr, "  Removing ghost triangles.\n");
  }

  (searchedge).tri = (*startghost).tri; (searchedge).orient = minus1mod3[(*startghost).orient];
  ptr = (searchedge).tri[(searchedge).orient]; (searchedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (searchedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (searchedge).orient);;
  m->dummytri[0] = (triangle) ((unsigned long) (searchedge).tri | (unsigned long) (searchedge).orient);

  (dissolveedge).tri = (*startghost).tri; (dissolveedge).orient = (*startghost).orient;
  hullsize = 0;
  do {
    hullsize++;
    (deadtriangle).tri = (dissolveedge).tri; (deadtriangle).orient = plus1mod3[(dissolveedge).orient];
    (dissolveedge).orient = minus1mod3[(dissolveedge).orient];
    ptr = (dissolveedge).tri[(dissolveedge).orient]; (dissolveedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (dissolveedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (dissolveedge).orient);;


    if (!b->poly) {

      if (dissolveedge.tri != m->dummytri) {
        markorg = (vertex) (dissolveedge).tri[plus1mod3[(dissolveedge).orient] + 3];
        if (((int *) (markorg))[m->vertexmarkindex] == 0) {
          ((int *) (markorg))[m->vertexmarkindex] = 1;
        }
      }
    }

    (dissolveedge).tri[(dissolveedge).orient] = (triangle) m->dummytri;

    ptr = (deadtriangle).tri[(deadtriangle).orient]; (dissolveedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (dissolveedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (dissolveedge).orient);;

    triangledealloc(m, deadtriangle.tri);
  } while (!(((dissolveedge).tri == (*startghost).tri) && ((dissolveedge).orient == (*startghost).orient)));
  return hullsize;
}
# 9936 "triangle.c"
long divconqdelaunay(m, b)
struct mesh *m;
struct behavior *b;


{
  vertex *sortarray;
  struct otri hullleft, hullright;
  int divider;
  int i, j;

  if (b->verbose) {
    fprintf(stderr, "  Sorting vertices.\n");
  }


  sortarray = (vertex *) trimalloc(m->invertices * sizeof(vertex));
  traversalinit(&m->vertices);
  for (i = 0; i < m->invertices; i++) {
    sortarray[i] = vertextraverse(m);
  }

  vertexsort(sortarray, m->invertices);

  i = 0;
  for (j = 1; j < m->invertices; j++) {
    if ((sortarray[i][0] == sortarray[j][0])
        && (sortarray[i][1] == sortarray[j][1])) {
      if (!b->quiet) {
        fprintf(stderr,
"Warning:  A duplicate vertex at (%.12g, %.12g) appeared and was ignored.\n",
               sortarray[j][0], sortarray[j][1]);
      }
      ((int *) (sortarray[j]))[m->vertexmarkindex + 1] = -32767;
      m->undeads++;
    } else {
      i++;
      sortarray[i] = sortarray[j];
    }
  }
  i++;
  if (b->dwyer) {

    divider = i >> 1;
    if (i - divider >= 2) {
      if (divider >= 2) {
        alternateaxes(sortarray, divider, 1);
      }
      alternateaxes(&sortarray[divider], i - divider, 1);
    }
  }

  if (b->verbose) {
    fprintf(stderr, "  Forming triangulation.\n");
  }


  divconqrecurse(m, b, sortarray, i, 0, &hullleft, &hullright);
  trifree((int *) sortarray);

  return removeghosts(m, b, &hullleft);
}
# 10023 "triangle.c"
void boundingbox(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri inftri;
  double width;

  if (b->verbose) {
    fprintf(stderr, "  Creating triangular bounding box.\n");
  }

  width = m->xmax - m->xmin;
  if (m->ymax - m->ymin > width) {
    width = m->ymax - m->ymin;
  }
  if (width == 0.0) {
    width = 1.0;
  }

  m->infvertex1 = (vertex) trimalloc(m->vertices.itembytes);
  m->infvertex2 = (vertex) trimalloc(m->vertices.itembytes);
  m->infvertex3 = (vertex) trimalloc(m->vertices.itembytes);
  m->infvertex1[0] = m->xmin - 50.0 * width;
  m->infvertex1[1] = m->ymin - 40.0 * width;
  m->infvertex2[0] = m->xmax + 50.0 * width;
  m->infvertex2[1] = m->ymin - 40.0 * width;
  m->infvertex3[0] = 0.5 * (m->xmin + m->xmax);
  m->infvertex3[1] = m->ymax + 60.0 * width;


  maketriangle(m, b, &inftri);
  (inftri).tri[plus1mod3[(inftri).orient] + 3] = (triangle) m->infvertex1;
  (inftri).tri[minus1mod3[(inftri).orient] + 3] = (triangle) m->infvertex2;
  (inftri).tri[(inftri).orient + 3] = (triangle) m->infvertex3;


  m->dummytri[0] = (triangle) inftri.tri;
  if (b->verbose > 2) {
    fprintf(stderr, "  Creating ");
    printtriangle(m, b, &inftri);
  }
}
# 10089 "triangle.c"
long removebox(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri deadtriangle;
  struct otri searchedge;
  struct otri checkedge;
  struct otri nextedge, finaledge, dissolveedge;
  vertex markorg;
  long hullsize;
  triangle ptr;

  if (b->verbose) {
    fprintf(stderr, "  Removing triangular bounding box.\n");
  }

  nextedge.tri = m->dummytri;
  nextedge.orient = 0;
  ptr = (nextedge).tri[(nextedge).orient]; (nextedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nextedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nextedge).orient);;

  (finaledge).tri = (nextedge).tri; (finaledge).orient = minus1mod3[(nextedge).orient];
  (nextedge).orient = plus1mod3[(nextedge).orient];
  ptr = (nextedge).tri[(nextedge).orient]; (nextedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nextedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nextedge).orient);;


  (searchedge).tri = (nextedge).tri; (searchedge).orient = minus1mod3[(nextedge).orient];
  ptr = (searchedge).tri[(searchedge).orient]; (searchedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (searchedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (searchedge).orient);;


  (checkedge).tri = (nextedge).tri; (checkedge).orient = plus1mod3[(nextedge).orient];
  ptr = (checkedge).tri[(checkedge).orient]; (checkedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkedge).orient);;
  if (checkedge.tri == m->dummytri) {



    (searchedge).orient = minus1mod3[(searchedge).orient];
    ptr = (searchedge).tri[(searchedge).orient]; (searchedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (searchedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (searchedge).orient);;
  }


  m->dummytri[0] = (triangle) ((unsigned long) (searchedge).tri | (unsigned long) (searchedge).orient);
  hullsize = -2l;
  while (!(((nextedge).tri == (finaledge).tri) && ((nextedge).orient == (finaledge).orient))) {
    hullsize++;
    (dissolveedge).tri = (nextedge).tri; (dissolveedge).orient = minus1mod3[(nextedge).orient];
    ptr = (dissolveedge).tri[(dissolveedge).orient]; (dissolveedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (dissolveedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (dissolveedge).orient);;


    if (!b->poly) {




      if (dissolveedge.tri != m->dummytri) {
        markorg = (vertex) (dissolveedge).tri[plus1mod3[(dissolveedge).orient] + 3];
        if (((int *) (markorg))[m->vertexmarkindex] == 0) {
          ((int *) (markorg))[m->vertexmarkindex] = 1;
        }
      }
    }

    (dissolveedge).tri[(dissolveedge).orient] = (triangle) m->dummytri;
    (deadtriangle).tri = (nextedge).tri; (deadtriangle).orient = plus1mod3[(nextedge).orient];
    ptr = (deadtriangle).tri[(deadtriangle).orient]; (nextedge).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nextedge).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nextedge).orient);;

    triangledealloc(m, deadtriangle.tri);

    if (nextedge.tri == m->dummytri) {

      (nextedge).tri = (dissolveedge).tri; (nextedge).orient = (dissolveedge).orient;
    }
  }
  triangledealloc(m, finaledge.tri);

  trifree((int *) m->infvertex1);
  trifree((int *) m->infvertex2);
  trifree((int *) m->infvertex3);

  return hullsize;
}
# 10188 "triangle.c"
long incrementaldelaunay(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri starttri;
  vertex vertexloop;


  boundingbox(m, b);
  if (b->verbose) {
    fprintf(stderr, "  Incrementally inserting vertices.\n");
  }
  traversalinit(&m->vertices);
  vertexloop = vertextraverse(m);
  while (vertexloop != (vertex) ((void *)0)) {
    starttri.tri = m->dummytri;
    if (insertvertex(m, b, vertexloop, &starttri, (struct osub *) ((void *)0), 0, 0,
                     0.0) == DUPLICATEVERTEX) {
      if (!b->quiet) {
        fprintf(stderr,
"Warning:  A duplicate vertex at (%.12g, %.12g) appeared and was ignored.\n",
               vertexloop[0], vertexloop[1]);
      }
      ((int *) (vertexloop))[m->vertexmarkindex + 1] = -32767;
      m->undeads++;
    }
    vertexloop = vertextraverse(m);
  }

  return removebox(m, b);
}
# 10237 "triangle.c"
void eventheapinsert(heap, heapsize, newevent)
struct event **heap;
int heapsize;
struct event *newevent;


{
  double eventx, eventy;
  int eventnum;
  int parent;
  int notdone;

  eventx = newevent->xkey;
  eventy = newevent->ykey;
  eventnum = heapsize;
  notdone = eventnum > 0;
  while (notdone) {
    parent = (eventnum - 1) >> 1;
    if ((heap[parent]->ykey < eventy) ||
        ((heap[parent]->ykey == eventy)
         && (heap[parent]->xkey <= eventx))) {
      notdone = 0;
    } else {
      heap[eventnum] = heap[parent];
      heap[eventnum]->heapposition = eventnum;

      eventnum = parent;
      notdone = eventnum > 0;
    }
  }
  heap[eventnum] = newevent;
  newevent->heapposition = eventnum;
}
# 10278 "triangle.c"
void eventheapify(heap, heapsize, eventnum)
struct event **heap;
int heapsize;
int eventnum;


{
  struct event *thisevent;
  double eventx, eventy;
  int leftchild, rightchild;
  int smallest;
  int notdone;

  thisevent = heap[eventnum];
  eventx = thisevent->xkey;
  eventy = thisevent->ykey;
  leftchild = 2 * eventnum + 1;
  notdone = leftchild < heapsize;
  while (notdone) {
    if ((heap[leftchild]->ykey < eventy) ||
        ((heap[leftchild]->ykey == eventy)
         && (heap[leftchild]->xkey < eventx))) {
      smallest = leftchild;
    } else {
      smallest = eventnum;
    }
    rightchild = leftchild + 1;
    if (rightchild < heapsize) {
      if ((heap[rightchild]->ykey < heap[smallest]->ykey) ||
          ((heap[rightchild]->ykey == heap[smallest]->ykey)
           && (heap[rightchild]->xkey < heap[smallest]->xkey))) {
        smallest = rightchild;
      }
    }
    if (smallest == eventnum) {
      notdone = 0;
    } else {
      heap[eventnum] = heap[smallest];
      heap[eventnum]->heapposition = eventnum;
      heap[smallest] = thisevent;
      thisevent->heapposition = smallest;

      eventnum = smallest;
      leftchild = 2 * eventnum + 1;
      notdone = leftchild < heapsize;
    }
  }
}
# 10334 "triangle.c"
void eventheapdelete(heap, heapsize, eventnum)
struct event **heap;
int heapsize;
int eventnum;


{
  struct event *moveevent;
  double eventx, eventy;
  int parent;
  int notdone;

  moveevent = heap[heapsize - 1];
  if (eventnum > 0) {
    eventx = moveevent->xkey;
    eventy = moveevent->ykey;
    do {
      parent = (eventnum - 1) >> 1;
      if ((heap[parent]->ykey < eventy) ||
          ((heap[parent]->ykey == eventy)
           && (heap[parent]->xkey <= eventx))) {
        notdone = 0;
      } else {
        heap[eventnum] = heap[parent];
        heap[eventnum]->heapposition = eventnum;

        eventnum = parent;
        notdone = eventnum > 0;
      }
    } while (notdone);
  }
  heap[eventnum] = moveevent;
  moveevent->heapposition = eventnum;
  eventheapify(heap, heapsize - 1, eventnum);
}
# 10378 "triangle.c"
void createeventheap(m, eventheap, events, freeevents)
struct mesh *m;
struct event ***eventheap;
struct event **events;
struct event **freeevents;


{
  vertex thisvertex;
  int maxevents;
  int i;

  maxevents = (3 * m->invertices) / 2;
  *eventheap = (struct event **) trimalloc(maxevents * sizeof(struct event *));
  *events = (struct event *) trimalloc(maxevents * sizeof(struct event));
  traversalinit(&m->vertices);
  for (i = 0; i < m->invertices; i++) {
    thisvertex = vertextraverse(m);
    (*events)[i].eventptr = (int *) thisvertex;
    (*events)[i].xkey = thisvertex[0];
    (*events)[i].ykey = thisvertex[1];
    eventheapinsert(*eventheap, i, *events + i);
  }
  *freeevents = (struct event *) ((void *)0);
  for (i = maxevents - 1; i >= m->invertices; i--) {
    (*events)[i].eventptr = (int *) *freeevents;
    *freeevents = *events + i;
  }
}
# 10415 "triangle.c"
int rightofhyperbola(m, fronttri, newsite)
struct mesh *m;
struct otri *fronttri;
vertex newsite;


{
  vertex leftvertex, rightvertex;
  double dxa, dya, dxb, dyb;

  m->hyperbolacount++;

  leftvertex = (vertex) (*fronttri).tri[minus1mod3[(*fronttri).orient] + 3];
  rightvertex = (vertex) (*fronttri).tri[(*fronttri).orient + 3];
  if ((leftvertex[1] < rightvertex[1]) ||
      ((leftvertex[1] == rightvertex[1]) &&
       (leftvertex[0] < rightvertex[0]))) {
    if (newsite[0] >= rightvertex[0]) {
      return 1;
    }
  } else {
    if (newsite[0] <= leftvertex[0]) {
      return 0;
    }
  }
  dxa = leftvertex[0] - newsite[0];
  dya = leftvertex[1] - newsite[1];
  dxb = rightvertex[0] - newsite[0];
  dyb = rightvertex[1] - newsite[1];
  return dya * (dxb * dxb + dyb * dyb) > dyb * (dxa * dxa + dya * dya);
}
# 10454 "triangle.c"
double circletop(m, pa, pb, pc, ccwabc)
struct mesh *m;
vertex pa;
vertex pb;
vertex pc;
double ccwabc;


{
  double xac, yac, xbc, ybc, xab, yab;
  double aclen2, bclen2, ablen2;

  m->circletopcount++;

  xac = pa[0] - pc[0];
  yac = pa[1] - pc[1];
  xbc = pb[0] - pc[0];
  ybc = pb[1] - pc[1];
  xab = pa[0] - pb[0];
  yab = pa[1] - pb[1];
  aclen2 = xac * xac + yac * yac;
  bclen2 = xbc * xbc + ybc * ybc;
  ablen2 = xab * xab + yab * yab;
  return pc[1] + (xac * bclen2 - xbc * aclen2 + sqrt(aclen2 * bclen2 * ablen2))
               / (2.0 * ccwabc);
}
# 10489 "triangle.c"
void check4deadevent(checktri, freeevents, eventheap, heapsize)
struct otri *checktri;
struct event **freeevents;
struct event **eventheap;
int *heapsize;


{
  struct event *deadevent;
  vertex eventvertex;
  int eventnum;

  eventvertex = (vertex) (*checktri).tri[plus1mod3[(*checktri).orient] + 3];
  if (eventvertex != (vertex) ((void *)0)) {
    deadevent = (struct event *) eventvertex;
    eventnum = deadevent->heapposition;
    deadevent->eventptr = (int *) *freeevents;
    *freeevents = deadevent;
    eventheapdelete(eventheap, *heapsize, eventnum);
    (*heapsize)--;
    (*checktri).tri[plus1mod3[(*checktri).orient] + 3] = (triangle) ((void *)0);
  }
}
# 10521 "triangle.c"
struct splaynode *splay(m, splaytree, searchpoint, searchtri)
struct mesh *m;
struct splaynode *splaytree;
vertex searchpoint;
struct otri *searchtri;


{
  struct splaynode *child, *grandchild;
  struct splaynode *lefttree, *righttree;
  struct splaynode *leftright;
  vertex checkvertex;
  int rightofroot, rightofchild;

  if (splaytree == (struct splaynode *) ((void *)0)) {
    return (struct splaynode *) ((void *)0);
  }
  checkvertex = (vertex) (splaytree->keyedge).tri[minus1mod3[(splaytree->keyedge).orient] + 3];
  if (checkvertex == splaytree->keydest) {
    rightofroot = rightofhyperbola(m, &splaytree->keyedge, searchpoint);
    if (rightofroot) {
      (*searchtri).tri = (splaytree->keyedge).tri; (*searchtri).orient = (splaytree->keyedge).orient;
      child = splaytree->rchild;
    } else {
      child = splaytree->lchild;
    }
    if (child == (struct splaynode *) ((void *)0)) {
      return splaytree;
    }
    checkvertex = (vertex) (child->keyedge).tri[minus1mod3[(child->keyedge).orient] + 3];
    if (checkvertex != child->keydest) {
      child = splay(m, child, searchpoint, searchtri);
      if (child == (struct splaynode *) ((void *)0)) {
        if (rightofroot) {
          splaytree->rchild = (struct splaynode *) ((void *)0);
        } else {
          splaytree->lchild = (struct splaynode *) ((void *)0);
        }
        return splaytree;
      }
    }
    rightofchild = rightofhyperbola(m, &child->keyedge, searchpoint);
    if (rightofchild) {
      (*searchtri).tri = (child->keyedge).tri; (*searchtri).orient = (child->keyedge).orient;
      grandchild = splay(m, child->rchild, searchpoint, searchtri);
      child->rchild = grandchild;
    } else {
      grandchild = splay(m, child->lchild, searchpoint, searchtri);
      child->lchild = grandchild;
    }
    if (grandchild == (struct splaynode *) ((void *)0)) {
      if (rightofroot) {
        splaytree->rchild = child->lchild;
        child->lchild = splaytree;
      } else {
        splaytree->lchild = child->rchild;
        child->rchild = splaytree;
      }
      return child;
    }
    if (rightofchild) {
      if (rightofroot) {
        splaytree->rchild = child->lchild;
        child->lchild = splaytree;
      } else {
        splaytree->lchild = grandchild->rchild;
        grandchild->rchild = splaytree;
      }
      child->rchild = grandchild->lchild;
      grandchild->lchild = child;
    } else {
      if (rightofroot) {
        splaytree->rchild = grandchild->lchild;
        grandchild->lchild = splaytree;
      } else {
        splaytree->lchild = child->rchild;
        child->rchild = splaytree;
      }
      child->lchild = grandchild->rchild;
      grandchild->rchild = child;
    }
    return grandchild;
  } else {
    lefttree = splay(m, splaytree->lchild, searchpoint, searchtri);
    righttree = splay(m, splaytree->rchild, searchpoint, searchtri);

    pooldealloc(&m->splaynodes, (int *) splaytree);
    if (lefttree == (struct splaynode *) ((void *)0)) {
      return righttree;
    } else if (righttree == (struct splaynode *) ((void *)0)) {
      return lefttree;
    } else if (lefttree->rchild == (struct splaynode *) ((void *)0)) {
      lefttree->rchild = righttree->lchild;
      righttree->lchild = lefttree;
      return righttree;
    } else if (righttree->lchild == (struct splaynode *) ((void *)0)) {
      righttree->lchild = lefttree->rchild;
      lefttree->rchild = righttree;
      return lefttree;
    } else {

      leftright = lefttree->rchild;
      while (leftright->rchild != (struct splaynode *) ((void *)0)) {
        leftright = leftright->rchild;
      }
      leftright->rchild = righttree;
      return lefttree;
    }
  }
}
# 10640 "triangle.c"
struct splaynode *splayinsert(m, splayroot, newkey, searchpoint)
struct mesh *m;
struct splaynode *splayroot;
struct otri *newkey;
vertex searchpoint;


{
  struct splaynode *newsplaynode;

  newsplaynode = (struct splaynode *) poolalloc(&m->splaynodes);
  (newsplaynode->keyedge).tri = (*newkey).tri; (newsplaynode->keyedge).orient = (*newkey).orient;
  newsplaynode->keydest = (vertex) (*newkey).tri[minus1mod3[(*newkey).orient] + 3];
  if (splayroot == (struct splaynode *) ((void *)0)) {
    newsplaynode->lchild = (struct splaynode *) ((void *)0);
    newsplaynode->rchild = (struct splaynode *) ((void *)0);
  } else if (rightofhyperbola(m, &splayroot->keyedge, searchpoint)) {
    newsplaynode->lchild = splayroot;
    newsplaynode->rchild = splayroot->rchild;
    splayroot->rchild = (struct splaynode *) ((void *)0);
  } else {
    newsplaynode->lchild = splayroot->lchild;
    newsplaynode->rchild = splayroot;
    splayroot->lchild = (struct splaynode *) ((void *)0);
  }
  return newsplaynode;
}
# 10678 "triangle.c"
struct splaynode *circletopinsert(m, b, splayroot, newkey, pa, pb, pc, topy)
struct mesh *m;
struct behavior *b;
struct splaynode *splayroot;
struct otri *newkey;
vertex pa;
vertex pb;
vertex pc;
double topy;


{
  double ccwabc;
  double xac, yac, xbc, ybc;
  double aclen2, bclen2;
  double searchpoint[2];
  struct otri dummytri;

  ccwabc = counterclockwise(m, b, pa, pb, pc);
  xac = pa[0] - pc[0];
  yac = pa[1] - pc[1];
  xbc = pb[0] - pc[0];
  ybc = pb[1] - pc[1];
  aclen2 = xac * xac + yac * yac;
  bclen2 = xbc * xbc + ybc * ybc;
  searchpoint[0] = pc[0] - (yac * bclen2 - ybc * aclen2) / (2.0 * ccwabc);
  searchpoint[1] = topy;
  return splayinsert(m, splay(m, splayroot, (vertex) searchpoint, &dummytri),
                     newkey, (vertex) searchpoint);
}
# 10718 "triangle.c"
struct splaynode *frontlocate(m, splayroot, bottommost, searchvertex,
                              searchtri, farright)
struct mesh *m;
struct splaynode *splayroot;
struct otri *bottommost;
vertex searchvertex;
struct otri *searchtri;
int *farright;


{
  int farrightflag;
  triangle ptr;

  (*searchtri).tri = (*bottommost).tri; (*searchtri).orient = (*bottommost).orient;
  splayroot = splay(m, splayroot, searchvertex, searchtri);

  farrightflag = 0;
  while (!farrightflag && rightofhyperbola(m, searchtri, searchvertex)) {
    (*searchtri).orient = minus1mod3[(*searchtri).orient]; ptr = (*searchtri).tri[(*searchtri).orient]; (*searchtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*searchtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*searchtri).orient);;;
    farrightflag = (((*searchtri).tri == (*bottommost).tri) && ((*searchtri).orient == (*bottommost).orient));
  }
  *farright = farrightflag;
  return splayroot;
}
# 10751 "triangle.c"
long sweeplinedelaunay(m, b)
struct mesh *m;
struct behavior *b;


{
  struct event **eventheap;
  struct event *events;
  struct event *freeevents;
  struct event *nextevent;
  struct event *newevent;
  struct splaynode *splayroot;
  struct otri bottommost;
  struct otri searchtri;
  struct otri fliptri;
  struct otri lefttri, righttri, farlefttri, farrighttri;
  struct otri inserttri;
  vertex firstvertex, secondvertex;
  vertex nextvertex, lastvertex;
  vertex connectvertex;
  vertex leftvertex, midvertex, rightvertex;
  double lefttest, righttest;
  int heapsize;
  int check4events, farrightflag;
  triangle ptr;

  poolinit(&m->splaynodes, sizeof(struct splaynode), 508,
           POINTER, 0);
  splayroot = (struct splaynode *) ((void *)0);

  if (b->verbose) {
    fprintf(stderr, "  Placing vertices in event heap.\n");
  }
  createeventheap(m, &eventheap, &events, &freeevents);
  heapsize = m->invertices;

  if (b->verbose) {
    fprintf(stderr, "  Forming triangulation.\n");
  }
  maketriangle(m, b, &lefttri);
  maketriangle(m, b, &righttri);
  (lefttri).tri[(lefttri).orient] = (triangle) ((unsigned long) (righttri).tri | (unsigned long) (righttri).orient); (righttri).tri[(righttri).orient] = (triangle) ((unsigned long) (lefttri).tri | (unsigned long) (lefttri).orient);
  (lefttri).orient = plus1mod3[(lefttri).orient];
  (righttri).orient = minus1mod3[(righttri).orient];
  (lefttri).tri[(lefttri).orient] = (triangle) ((unsigned long) (righttri).tri | (unsigned long) (righttri).orient); (righttri).tri[(righttri).orient] = (triangle) ((unsigned long) (lefttri).tri | (unsigned long) (lefttri).orient);
  (lefttri).orient = plus1mod3[(lefttri).orient];
  (righttri).orient = minus1mod3[(righttri).orient];
  (lefttri).tri[(lefttri).orient] = (triangle) ((unsigned long) (righttri).tri | (unsigned long) (righttri).orient); (righttri).tri[(righttri).orient] = (triangle) ((unsigned long) (lefttri).tri | (unsigned long) (lefttri).orient);
  firstvertex = (vertex) eventheap[0]->eventptr;
  eventheap[0]->eventptr = (int *) freeevents;
  freeevents = eventheap[0];
  eventheapdelete(eventheap, heapsize, 0);
  heapsize--;
  do {
    if (heapsize == 0) {
      fprintf(stderr, "Error:  Input vertices are all identical.\n");
      exit(1);
    }
    secondvertex = (vertex) eventheap[0]->eventptr;
    eventheap[0]->eventptr = (int *) freeevents;
    freeevents = eventheap[0];
    eventheapdelete(eventheap, heapsize, 0);
    heapsize--;
    if ((firstvertex[0] == secondvertex[0]) &&
        (firstvertex[1] == secondvertex[1])) {
      if (!b->quiet) {
        fprintf(stderr,
"Warning:  A duplicate vertex at (%.12g, %.12g) appeared and was ignored.\n",
               secondvertex[0], secondvertex[1]);
      }
      ((int *) (secondvertex))[m->vertexmarkindex + 1] = -32767;
      m->undeads++;
    }
  } while ((firstvertex[0] == secondvertex[0]) &&
           (firstvertex[1] == secondvertex[1]));
  (lefttri).tri[plus1mod3[(lefttri).orient] + 3] = (triangle) firstvertex;
  (lefttri).tri[minus1mod3[(lefttri).orient] + 3] = (triangle) secondvertex;
  (righttri).tri[plus1mod3[(righttri).orient] + 3] = (triangle) secondvertex;
  (righttri).tri[minus1mod3[(righttri).orient] + 3] = (triangle) firstvertex;
  (bottommost).tri = (lefttri).tri; (bottommost).orient = minus1mod3[(lefttri).orient];
  lastvertex = secondvertex;
  while (heapsize > 0) {
    nextevent = eventheap[0];
    eventheapdelete(eventheap, heapsize, 0);
    heapsize--;
    check4events = 1;
    if (nextevent->xkey < m->xmin) {
      (fliptri).orient = (int) ((unsigned long) (nextevent->eventptr) & (unsigned long) 3l); (fliptri).tri = (triangle *) ((unsigned long) (nextevent->eventptr) ^ (unsigned long) (fliptri).orient);
      ptr = (fliptri).tri[(fliptri).orient]; (farlefttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (farlefttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (farlefttri).orient);; (farlefttri).orient = plus1mod3[(farlefttri).orient];;
      check4deadevent(&farlefttri, &freeevents, eventheap, &heapsize);
      (farrighttri).tri = (fliptri).tri; (farrighttri).orient = minus1mod3[(fliptri).orient]; ptr = (farrighttri).tri[(farrighttri).orient]; (farrighttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (farrighttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (farrighttri).orient);;;
      check4deadevent(&farrighttri, &freeevents, eventheap, &heapsize);

      if ((((farlefttri).tri == (bottommost).tri) && ((farlefttri).orient == (bottommost).orient))) {
        (bottommost).tri = (fliptri).tri; (bottommost).orient = minus1mod3[(fliptri).orient];
      }
      flip(m, b, &fliptri);
      (fliptri).tri[(fliptri).orient + 3] = (triangle) ((void *)0);
      (lefttri).tri = (fliptri).tri; (lefttri).orient = minus1mod3[(fliptri).orient];
      (righttri).tri = (fliptri).tri; (righttri).orient = plus1mod3[(fliptri).orient];
      ptr = (lefttri).tri[(lefttri).orient]; (farlefttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (farlefttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (farlefttri).orient);;

      if (randomnation(10) == 0) {
        ptr = (fliptri).tri[(fliptri).orient]; (fliptri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (fliptri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (fliptri).orient);;
        leftvertex = (vertex) (fliptri).tri[minus1mod3[(fliptri).orient] + 3];
        midvertex = (vertex) (fliptri).tri[(fliptri).orient + 3];
        rightvertex = (vertex) (fliptri).tri[plus1mod3[(fliptri).orient] + 3];
        splayroot = circletopinsert(m, b, splayroot, &lefttri, leftvertex,
                                    midvertex, rightvertex, nextevent->ykey);
      }
    } else {
      nextvertex = (vertex) nextevent->eventptr;
      if ((nextvertex[0] == lastvertex[0]) &&
          (nextvertex[1] == lastvertex[1])) {
        if (!b->quiet) {
          fprintf(stderr,
"Warning:  A duplicate vertex at (%.12g, %.12g) appeared and was ignored.\n",
                 nextvertex[0], nextvertex[1]);
        }
        ((int *) (nextvertex))[m->vertexmarkindex + 1] = -32767;
        m->undeads++;
        check4events = 0;
      } else {
        lastvertex = nextvertex;

        splayroot = frontlocate(m, splayroot, &bottommost, nextvertex,
                                &searchtri, &farrightflag);
# 10887 "triangle.c"
        check4deadevent(&searchtri, &freeevents, eventheap, &heapsize);

        (farrighttri).tri = (searchtri).tri; (farrighttri).orient = (searchtri).orient;
        ptr = (searchtri).tri[(searchtri).orient]; (farlefttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (farlefttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (farlefttri).orient);;
        maketriangle(m, b, &lefttri);
        maketriangle(m, b, &righttri);
        connectvertex = (vertex) (farrighttri).tri[minus1mod3[(farrighttri).orient] + 3];
        (lefttri).tri[plus1mod3[(lefttri).orient] + 3] = (triangle) connectvertex;
        (lefttri).tri[minus1mod3[(lefttri).orient] + 3] = (triangle) nextvertex;
        (righttri).tri[plus1mod3[(righttri).orient] + 3] = (triangle) nextvertex;
        (righttri).tri[minus1mod3[(righttri).orient] + 3] = (triangle) connectvertex;
        (lefttri).tri[(lefttri).orient] = (triangle) ((unsigned long) (righttri).tri | (unsigned long) (righttri).orient); (righttri).tri[(righttri).orient] = (triangle) ((unsigned long) (lefttri).tri | (unsigned long) (lefttri).orient);
        (lefttri).orient = plus1mod3[(lefttri).orient];
        (righttri).orient = minus1mod3[(righttri).orient];
        (lefttri).tri[(lefttri).orient] = (triangle) ((unsigned long) (righttri).tri | (unsigned long) (righttri).orient); (righttri).tri[(righttri).orient] = (triangle) ((unsigned long) (lefttri).tri | (unsigned long) (lefttri).orient);
        (lefttri).orient = plus1mod3[(lefttri).orient];
        (righttri).orient = minus1mod3[(righttri).orient];
        (lefttri).tri[(lefttri).orient] = (triangle) ((unsigned long) (farlefttri).tri | (unsigned long) (farlefttri).orient); (farlefttri).tri[(farlefttri).orient] = (triangle) ((unsigned long) (lefttri).tri | (unsigned long) (lefttri).orient);
        (righttri).tri[(righttri).orient] = (triangle) ((unsigned long) (farrighttri).tri | (unsigned long) (farrighttri).orient); (farrighttri).tri[(farrighttri).orient] = (triangle) ((unsigned long) (righttri).tri | (unsigned long) (righttri).orient);
        if (!farrightflag && (((farrighttri).tri == (bottommost).tri) && ((farrighttri).orient == (bottommost).orient))) {
          (bottommost).tri = (lefttri).tri; (bottommost).orient = (lefttri).orient;
        }

        if (randomnation(10) == 0) {
          splayroot = splayinsert(m, splayroot, &lefttri, nextvertex);
        } else if (randomnation(10) == 0) {
          (inserttri).tri = (righttri).tri; (inserttri).orient = plus1mod3[(righttri).orient];
          splayroot = splayinsert(m, splayroot, &inserttri, nextvertex);
        }
      }
    }
    nextevent->eventptr = (int *) freeevents;
    freeevents = nextevent;

    if (check4events) {
      leftvertex = (vertex) (farlefttri).tri[(farlefttri).orient + 3];
      midvertex = (vertex) (lefttri).tri[minus1mod3[(lefttri).orient] + 3];
      rightvertex = (vertex) (lefttri).tri[(lefttri).orient + 3];
      lefttest = counterclockwise(m, b, leftvertex, midvertex, rightvertex);
      if (lefttest > 0.0) {
        newevent = freeevents;
        freeevents = (struct event *) freeevents->eventptr;
        newevent->xkey = m->xminextreme;
        newevent->ykey = circletop(m, leftvertex, midvertex, rightvertex,
                                   lefttest);
        newevent->eventptr = (int *) (triangle) ((unsigned long) (lefttri).tri | (unsigned long) (lefttri).orient);
        eventheapinsert(eventheap, heapsize, newevent);
        heapsize++;
        (lefttri).tri[plus1mod3[(lefttri).orient] + 3] = (triangle) newevent;
      }
      leftvertex = (vertex) (righttri).tri[(righttri).orient + 3];
      midvertex = (vertex) (righttri).tri[plus1mod3[(righttri).orient] + 3];
      rightvertex = (vertex) (farrighttri).tri[(farrighttri).orient + 3];
      righttest = counterclockwise(m, b, leftvertex, midvertex, rightvertex);
      if (righttest > 0.0) {
        newevent = freeevents;
        freeevents = (struct event *) freeevents->eventptr;
        newevent->xkey = m->xminextreme;
        newevent->ykey = circletop(m, leftvertex, midvertex, rightvertex,
                                   righttest);
        newevent->eventptr = (int *) (triangle) ((unsigned long) (farrighttri).tri | (unsigned long) (farrighttri).orient);
        eventheapinsert(eventheap, heapsize, newevent);
        heapsize++;
        (farrighttri).tri[plus1mod3[(farrighttri).orient] + 3] = (triangle) newevent;
      }
    }
  }

  pooldeinit(&m->splaynodes);
  (bottommost).orient = minus1mod3[(bottommost).orient];
  return removeghosts(m, b, &bottommost);
}
# 10979 "triangle.c"
long delaunay(m, b)
struct mesh *m;
struct behavior *b;


{
  long hulledges;

  m->eextras = 0;
  initializetrisubpools(m, b);
# 10997 "triangle.c"
  if (!b->quiet) {
    fprintf(stderr, "Constructing Delaunay triangulation ");
    if (b->incremental) {
      fprintf(stderr, "by incremental method.\n");
    } else if (b->sweepline) {
      fprintf(stderr, "by sweepline method.\n");
    } else {
      fprintf(stderr, "by divide-and-conquer method.\n");
    }
  }
  if (b->incremental) {
    hulledges = incrementaldelaunay(m, b);
  } else if (b->sweepline) {
    hulledges = sweeplinedelaunay(m, b);
  } else {
    hulledges = divconqdelaunay(m, b);
  }


  if (m->triangles.items == 0) {

    return 0l;
  } else {
    return hulledges;
  }
}
# 11059 "triangle.c"
int reconstruct(m, b, trianglelist, triangleattriblist, trianglearealist,
                elements, corners, attribs, segmentlist, segmentmarkerlist,
                numberofsegments)
struct mesh *m;
struct behavior *b;
int *trianglelist;
double *triangleattriblist;
double *trianglearealist;
int elements;
int corners;
int attribs;
int *segmentlist;
int *segmentmarkerlist;
int numberofsegments;
# 11092 "triangle.c"
{

  int vertexindex;
  int attribindex;







  struct otri triangleloop;
  struct otri triangleleft;
  struct otri checktri;
  struct otri checkleft;
  struct otri checkneighbor;
  struct osub subsegloop;
  triangle *vertexarray;
  triangle *prevlink;
  triangle nexttri;
  vertex tdest, tapex;
  vertex checkdest, checkapex;
  vertex shorg;
  vertex killvertex;
  double area;
  int corner[3];
  int end[2];
  int killvertexindex;
  int incorners;
  int segmentmarkers;
  int boundmarker;
  int aroundvertex;
  long hullsize;
  int notfound;
  long elementnumber, segmentnumber;
  int i, j;
  triangle ptr;


  m->inelements = elements;
  incorners = corners;
  if (incorners < 3) {
    fprintf(stderr, "Error:  Triangles must have at least 3 vertices.\n");
    exit(1);
  }
  m->eextras = attribs;
# 11171 "triangle.c"
  initializetrisubpools(m, b);


  for (elementnumber = 1; elementnumber <= m->inelements; elementnumber++) {
    maketriangle(m, b, &triangleloop);

    triangleloop.tri[3] = (triangle) triangleloop.tri;
  }

  if (b->poly) {

    m->insegments = numberofsegments;
    segmentmarkers = segmentmarkerlist != (int *) ((void *)0);
# 11198 "triangle.c"
    for (segmentnumber = 1; segmentnumber <= m->insegments; segmentnumber++) {
      makesubseg(m, &subsegloop);

      subsegloop.ss[2] = (subseg) subsegloop.ss;
    }
  }


  vertexindex = 0;
  attribindex = 0;
# 11229 "triangle.c"
  if (!b->quiet) {
    fprintf(stderr, "Reconstructing mesh.\n");
  }



  vertexarray = (triangle *) trimalloc(m->vertices.items * sizeof(triangle));

  for (i = 0; i < m->vertices.items; i++) {
    vertexarray[i] = (triangle) m->dummytri;
  }

  if (b->verbose) {
    fprintf(stderr, "  Assembling triangles.\n");
  }


  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  elementnumber = b->firstnumber;
  while (triangleloop.tri != (triangle *) ((void *)0)) {


    for (j = 0; j < 3; j++) {
      corner[j] = trianglelist[vertexindex++];
      if ((corner[j] < b->firstnumber) ||
          (corner[j] >= b->firstnumber + m->invertices)) {
        fprintf(stderr, "Error:  Triangle %ld has an invalid vertex index.\n",
               elementnumber);
        exit(1);
      }
    }
# 11283 "triangle.c"
    for (j = 3; j < incorners; j++) {

      killvertexindex = trianglelist[vertexindex++];





        if ((killvertexindex >= b->firstnumber) &&
            (killvertexindex < b->firstnumber + m->invertices)) {

          killvertex = getvertex(m, b, killvertexindex);
          if (((int *) (killvertex))[m->vertexmarkindex + 1] != -32768) {
            vertexdealloc(m, killvertex);
          }
        }



    }


    for (j = 0; j < m->eextras; j++) {

      ((double *) (triangleloop).tri)[m->elemattribindex + (j)] = triangleattriblist[attribindex++];
# 11317 "triangle.c"
    }

    if (b->vararea) {

      area = trianglearealist[elementnumber - b->firstnumber];
# 11332 "triangle.c"
      ((double *) (triangleloop).tri)[m->areaboundindex] = area;
    }


    triangleloop.orient = 0;
    (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3] = (triangle) getvertex(m, b, corner[0]);
    (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3] = (triangle) getvertex(m, b, corner[1]);
    (triangleloop).tri[(triangleloop).orient + 3] = (triangle) getvertex(m, b, corner[2]);

    for (triangleloop.orient = 0; triangleloop.orient < 3;
         triangleloop.orient++) {

      aroundvertex = corner[triangleloop.orient];

      nexttri = vertexarray[aroundvertex - b->firstnumber];

      triangleloop.tri[6 + triangleloop.orient] = nexttri;

      vertexarray[aroundvertex - b->firstnumber] = (triangle) ((unsigned long) (triangleloop).tri | (unsigned long) (triangleloop).orient);
      (checktri).orient = (int) ((unsigned long) (nexttri) & (unsigned long) 3l); (checktri).tri = (triangle *) ((unsigned long) (nexttri) ^ (unsigned long) (checktri).orient);
      if (checktri.tri != m->dummytri) {
        tdest = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];
        tapex = (vertex) (triangleloop).tri[(triangleloop).orient + 3];

        do {
          checkdest = (vertex) (checktri).tri[minus1mod3[(checktri).orient] + 3];
          checkapex = (vertex) (checktri).tri[(checktri).orient + 3];
          if (tapex == checkdest) {

            (triangleleft).tri = (triangleloop).tri; (triangleleft).orient = minus1mod3[(triangleloop).orient];
            (triangleleft).tri[(triangleleft).orient] = (triangle) ((unsigned long) (checktri).tri | (unsigned long) (checktri).orient); (checktri).tri[(checktri).orient] = (triangle) ((unsigned long) (triangleleft).tri | (unsigned long) (triangleleft).orient);
          }
          if (tdest == checkapex) {

            (checkleft).tri = (checktri).tri; (checkleft).orient = minus1mod3[(checktri).orient];
            (triangleloop).tri[(triangleloop).orient] = (triangle) ((unsigned long) (checkleft).tri | (unsigned long) (checkleft).orient); (checkleft).tri[(checkleft).orient] = (triangle) ((unsigned long) (triangleloop).tri | (unsigned long) (triangleloop).orient);
          }

          nexttri = checktri.tri[6 + checktri.orient];
          (checktri).orient = (int) ((unsigned long) (nexttri) & (unsigned long) 3l); (checktri).tri = (triangle *) ((unsigned long) (nexttri) ^ (unsigned long) (checktri).orient);
        } while (checktri.tri != m->dummytri);
      }
    }
    triangleloop.tri = triangletraverse(m);
    elementnumber++;
  }


  vertexindex = 0;







  hullsize = 0;
  if (b->poly) {
    if (b->verbose) {
      fprintf(stderr, "  Marking segments in triangulation.\n");
    }


    boundmarker = 0;
    traversalinit(&m->subsegs);
    subsegloop.ss = subsegtraverse(m);
    segmentnumber = b->firstnumber;
    while (subsegloop.ss != (subseg *) ((void *)0)) {

      end[0] = segmentlist[vertexindex++];
      end[1] = segmentlist[vertexindex++];
      if (segmentmarkers) {
        boundmarker = segmentmarkerlist[segmentnumber - b->firstnumber];
      }
# 11435 "triangle.c"
      for (j = 0; j < 2; j++) {
        if ((end[j] < b->firstnumber) ||
            (end[j] >= b->firstnumber + m->invertices)) {
          fprintf(stderr, "Error:  Segment %ld has an invalid vertex index.\n",
                 segmentnumber);
          exit(1);
        }
      }


      subsegloop.ssorient = 0;
      (subsegloop).ss[2 + (subsegloop).ssorient] = (subseg) getvertex(m, b, end[0]);
      (subsegloop).ss[3 - (subsegloop).ssorient] = (subseg) getvertex(m, b, end[1]);
      * (int *) ((subsegloop).ss + 6) = boundmarker;

      for (subsegloop.ssorient = 0; subsegloop.ssorient < 2;
           subsegloop.ssorient++) {

        aroundvertex = end[1 - subsegloop.ssorient];

        prevlink = &vertexarray[aroundvertex - b->firstnumber];
        nexttri = vertexarray[aroundvertex - b->firstnumber];
        (checktri).orient = (int) ((unsigned long) (nexttri) & (unsigned long) 3l); (checktri).tri = (triangle *) ((unsigned long) (nexttri) ^ (unsigned long) (checktri).orient);
        shorg = (vertex) (subsegloop).ss[2 + (subsegloop).ssorient];
        notfound = 1;







        while (notfound && (checktri.tri != m->dummytri)) {
          checkdest = (vertex) (checktri).tri[minus1mod3[(checktri).orient] + 3];
          if (shorg == checkdest) {

            *prevlink = checktri.tri[6 + checktri.orient];

            (checktri).tri[6 + (checktri).orient] = (triangle) (subseg) ((unsigned long) (subsegloop).ss | (unsigned long) (subsegloop).ssorient); (subsegloop).ss[4 + (subsegloop).ssorient] = (subseg) (triangle) ((unsigned long) (checktri).tri | (unsigned long) (checktri).orient);

            ptr = (checktri).tri[(checktri).orient]; (checkneighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkneighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkneighbor).orient);;
            if (checkneighbor.tri == m->dummytri) {



              insertsubseg(m, b, &checktri, 1);
              hullsize++;
            }
            notfound = 0;
          }

          prevlink = &checktri.tri[6 + checktri.orient];
          nexttri = checktri.tri[6 + checktri.orient];
          (checktri).orient = (int) ((unsigned long) (nexttri) & (unsigned long) 3l); (checktri).tri = (triangle *) ((unsigned long) (nexttri) ^ (unsigned long) (checktri).orient);
        }
      }
      subsegloop.ss = subsegtraverse(m);
      segmentnumber++;
    }
  }



  for (i = 0; i < m->vertices.items; i++) {

    nexttri = vertexarray[i];
    (checktri).orient = (int) ((unsigned long) (nexttri) & (unsigned long) 3l); (checktri).tri = (triangle *) ((unsigned long) (nexttri) ^ (unsigned long) (checktri).orient);
    while (checktri.tri != m->dummytri) {


      nexttri = checktri.tri[6 + checktri.orient];

      (checktri).tri[6 + (checktri).orient] = (triangle) m->dummysub;
      ptr = (checktri).tri[(checktri).orient]; (checkneighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checkneighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checkneighbor).orient);;
      if (checkneighbor.tri == m->dummytri) {
        insertsubseg(m, b, &checktri, 1);
        hullsize++;
      }
      (checktri).orient = (int) ((unsigned long) (nexttri) & (unsigned long) 3l); (checktri).tri = (triangle *) ((unsigned long) (nexttri) ^ (unsigned long) (checktri).orient);
    }
  }

  trifree((int *) vertexarray);
  return hullsize;
}
# 11553 "triangle.c"
enum finddirectionresult finddirection(m, b, searchtri, searchpoint)
struct mesh *m;
struct behavior *b;
struct otri *searchtri;
vertex searchpoint;


{
  struct otri checktri;
  vertex startvertex;
  vertex leftvertex, rightvertex;
  double leftccw, rightccw;
  int leftflag, rightflag;
  triangle ptr;

  startvertex = (vertex) (*searchtri).tri[plus1mod3[(*searchtri).orient] + 3];
  rightvertex = (vertex) (*searchtri).tri[minus1mod3[(*searchtri).orient] + 3];
  leftvertex = (vertex) (*searchtri).tri[(*searchtri).orient + 3];

  leftccw = counterclockwise(m, b, searchpoint, startvertex, leftvertex);
  leftflag = leftccw > 0.0;

  rightccw = counterclockwise(m, b, startvertex, searchpoint, rightvertex);
  rightflag = rightccw > 0.0;
  if (leftflag && rightflag) {


    (checktri).tri = (*searchtri).tri; (checktri).orient = minus1mod3[(*searchtri).orient]; ptr = (checktri).tri[(checktri).orient]; (checktri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (checktri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (checktri).orient);;;
    if (checktri.tri == m->dummytri) {
      leftflag = 0;
    } else {
      rightflag = 0;
    }
  }
  while (leftflag) {

    (*searchtri).orient = minus1mod3[(*searchtri).orient]; ptr = (*searchtri).tri[(*searchtri).orient]; (*searchtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*searchtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*searchtri).orient);;;
    if (searchtri->tri == m->dummytri) {
      fprintf(stderr, "Internal error in finddirection():  Unable to find a\n");
      fprintf(stderr, "  triangle leading from (%.12g, %.12g) to", startvertex[0],
             startvertex[1]);
      fprintf(stderr, "  (%.12g, %.12g).\n", searchpoint[0], searchpoint[1]);
      internalerror();
    }
    leftvertex = (vertex) (*searchtri).tri[(*searchtri).orient + 3];
    rightccw = leftccw;
    leftccw = counterclockwise(m, b, searchpoint, startvertex, leftvertex);
    leftflag = leftccw > 0.0;
  }
  while (rightflag) {

    ptr = (*searchtri).tri[(*searchtri).orient]; (*searchtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*searchtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*searchtri).orient);; (*searchtri).orient = plus1mod3[(*searchtri).orient];;
    if (searchtri->tri == m->dummytri) {
      fprintf(stderr, "Internal error in finddirection():  Unable to find a\n");
      fprintf(stderr, "  triangle leading from (%.12g, %.12g) to", startvertex[0],
             startvertex[1]);
      fprintf(stderr, "  (%.12g, %.12g).\n", searchpoint[0], searchpoint[1]);
      internalerror();
    }
    rightvertex = (vertex) (*searchtri).tri[minus1mod3[(*searchtri).orient] + 3];
    leftccw = rightccw;
    rightccw = counterclockwise(m, b, startvertex, searchpoint, rightvertex);
    rightflag = rightccw > 0.0;
  }
  if (leftccw == 0.0) {
    return LEFTCOLLINEAR;
  } else if (rightccw == 0.0) {
    return RIGHTCOLLINEAR;
  } else {
    return WITHIN;
  }
}
# 11648 "triangle.c"
void segmentintersection(m, b, splittri, splitsubseg, endpoint2)
struct mesh *m;
struct behavior *b;
struct otri *splittri;
struct osub *splitsubseg;
vertex endpoint2;


{
  vertex endpoint1;
  vertex torg, tdest;
  vertex leftvertex, rightvertex;
  vertex newvertex;
  enum insertvertexresult success;
  enum finddirectionresult collinear;
  double ex, ey;
  double tx, ty;
  double etx, ety;
  double split, denom;
  int i;
  triangle ptr;


  endpoint1 = (vertex) (*splittri).tri[(*splittri).orient + 3];
  torg = (vertex) (*splittri).tri[plus1mod3[(*splittri).orient] + 3];
  tdest = (vertex) (*splittri).tri[minus1mod3[(*splittri).orient] + 3];

  tx = tdest[0] - torg[0];
  ty = tdest[1] - torg[1];
  ex = endpoint2[0] - endpoint1[0];
  ey = endpoint2[1] - endpoint1[1];
  etx = torg[0] - endpoint2[0];
  ety = torg[1] - endpoint2[1];
  denom = ty * ex - tx * ey;
  if (denom == 0.0) {
    fprintf(stderr, "Internal error in segmentintersection():");
    fprintf(stderr, "  Attempt to find intersection of parallel segments.\n");
    internalerror();
  }
  split = (ey * etx - ex * ety) / denom;

  newvertex = (vertex) poolalloc(&m->vertices);

  for (i = 0; i < 2 + m->nextras; i++) {
    newvertex[i] = torg[i] + split * (tdest[i] - torg[i]);
  }
  ((int *) (newvertex))[m->vertexmarkindex] = (* (int *) ((*splitsubseg).ss + 6));
  ((int *) (newvertex))[m->vertexmarkindex + 1] = 0;
  if (b->verbose > 1) {
    fprintf(stderr,
  "  Splitting subsegment (%.12g, %.12g) (%.12g, %.12g) at (%.12g, %.12g).\n",
           torg[0], torg[1], tdest[0], tdest[1], newvertex[0], newvertex[1]);
  }

  success = insertvertex(m, b, newvertex, splittri, splitsubseg, 0, 0, 0.0);
  if (success != SUCCESSFULVERTEX) {
    fprintf(stderr, "Internal error in segmentintersection():\n");
    fprintf(stderr, "  Failure to split a segment.\n");
    internalerror();
  }
  if (m->steinerleft > 0) {
    m->steinerleft--;
  }


  collinear = finddirection(m, b, splittri, endpoint1);
  rightvertex = (vertex) (*splittri).tri[minus1mod3[(*splittri).orient] + 3];
  leftvertex = (vertex) (*splittri).tri[(*splittri).orient + 3];
  if ((leftvertex[0] == endpoint1[0]) && (leftvertex[1] == endpoint1[1])) {
    (*splittri).orient = minus1mod3[(*splittri).orient]; ptr = (*splittri).tri[(*splittri).orient]; (*splittri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (*splittri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (*splittri).orient);;;
  } else if ((rightvertex[0] != endpoint1[0]) ||
             (rightvertex[1] != endpoint1[1])) {
    fprintf(stderr, "Internal error in segmentintersection():\n");
    fprintf(stderr, "  Topological inconsistency after splitting a segment.\n");
    internalerror();
  }

}
# 11755 "triangle.c"
int scoutsegment(m, b, searchtri, endpoint2, newmark)
struct mesh *m;
struct behavior *b;
struct otri *searchtri;
vertex endpoint2;
int newmark;


{
  struct otri crosstri;
  struct osub crosssubseg;
  vertex leftvertex, rightvertex;
  enum finddirectionresult collinear;
  subseg sptr;

  collinear = finddirection(m, b, searchtri, endpoint2);
  rightvertex = (vertex) (*searchtri).tri[minus1mod3[(*searchtri).orient] + 3];
  leftvertex = (vertex) (*searchtri).tri[(*searchtri).orient + 3];
  if (((leftvertex[0] == endpoint2[0]) && (leftvertex[1] == endpoint2[1])) ||
      ((rightvertex[0] == endpoint2[0]) && (rightvertex[1] == endpoint2[1]))) {

    if ((leftvertex[0] == endpoint2[0]) && (leftvertex[1] == endpoint2[1])) {
      (*searchtri).orient = minus1mod3[(*searchtri).orient];
    }

    insertsubseg(m, b, searchtri, newmark);
    return 1;
  } else if (collinear == LEFTCOLLINEAR) {


    (*searchtri).orient = minus1mod3[(*searchtri).orient];
    insertsubseg(m, b, searchtri, newmark);

    return scoutsegment(m, b, searchtri, endpoint2, newmark);
  } else if (collinear == RIGHTCOLLINEAR) {

    insertsubseg(m, b, searchtri, newmark);

    (*searchtri).orient = plus1mod3[(*searchtri).orient];

    return scoutsegment(m, b, searchtri, endpoint2, newmark);
  } else {
    (crosstri).tri = (*searchtri).tri; (crosstri).orient = plus1mod3[(*searchtri).orient];
    sptr = (subseg) (crosstri).tri[6 + (crosstri).orient]; (crosssubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (crosssubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);

    if (crosssubseg.ss == m->dummysub) {
      return 0;
    } else {

      segmentintersection(m, b, &crosstri, &crosssubseg, endpoint2);
      (*searchtri).tri = (crosstri).tri; (*searchtri).orient = (crosstri).orient;
      insertsubseg(m, b, searchtri, newmark);

      return scoutsegment(m, b, searchtri, endpoint2, newmark);
    }
  }
}
# 11839 "triangle.c"
void conformingedge(m, b, endpoint1, endpoint2, newmark)
struct mesh *m;
struct behavior *b;
vertex endpoint1;
vertex endpoint2;
int newmark;


{
  struct otri searchtri1, searchtri2;
  struct osub brokensubseg;
  vertex newvertex;
  vertex midvertex1, midvertex2;
  enum insertvertexresult success;
  int i;
  subseg sptr;

  if (b->verbose > 2) {
    fprintf(stderr, "Forcing segment into triangulation by recursive splitting:\n");
    fprintf(stderr, "  (%.12g, %.12g) (%.12g, %.12g)\n", endpoint1[0], endpoint1[1],
           endpoint2[0], endpoint2[1]);
  }

  newvertex = (vertex) poolalloc(&m->vertices);

  for (i = 0; i < 2 + m->nextras; i++) {
    newvertex[i] = 0.5 * (endpoint1[i] + endpoint2[i]);
  }
  ((int *) (newvertex))[m->vertexmarkindex] = newmark;
  ((int *) (newvertex))[m->vertexmarkindex + 1] = 1;

  searchtri1.tri = m->dummytri;

  success = insertvertex(m, b, newvertex, &searchtri1, (struct osub *) ((void *)0),
                         0, 0, 0.0);
  if (success == DUPLICATEVERTEX) {
    if (b->verbose > 2) {
      fprintf(stderr, "  Segment intersects existing vertex (%.12g, %.12g).\n",
             newvertex[0], newvertex[1]);
    }

    vertexdealloc(m, newvertex);
    newvertex = (vertex) (searchtri1).tri[plus1mod3[(searchtri1).orient] + 3];
  } else {
    if (success == VIOLATINGVERTEX) {
      if (b->verbose > 2) {
        fprintf(stderr, "  Two segments intersect at (%.12g, %.12g).\n",
               newvertex[0], newvertex[1]);
      }

      sptr = (subseg) (searchtri1).tri[6 + (searchtri1).orient]; (brokensubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (brokensubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      success = insertvertex(m, b, newvertex, &searchtri1, &brokensubseg,
                             0, 0, 0.0);
      if (success != SUCCESSFULVERTEX) {
        fprintf(stderr, "Internal error in conformingedge():\n");
        fprintf(stderr, "  Failure to split a segment.\n");
        internalerror();
      }
    }

    if (m->steinerleft > 0) {
      m->steinerleft--;
    }
  }
  (searchtri2).tri = (searchtri1).tri; (searchtri2).orient = (searchtri1).orient;





  finddirection(m, b, &searchtri2, endpoint2);
  if (!scoutsegment(m, b, &searchtri1, endpoint1, newmark)) {


    midvertex1 = (vertex) (searchtri1).tri[plus1mod3[(searchtri1).orient] + 3];
    conformingedge(m, b, midvertex1, endpoint1, newmark);
  }
  if (!scoutsegment(m, b, &searchtri2, endpoint2, newmark)) {


    midvertex2 = (vertex) (searchtri2).tri[plus1mod3[(searchtri2).orient] + 3];
    conformingedge(m, b, midvertex2, endpoint2, newmark);
  }
}
# 11969 "triangle.c"
void delaunayfixup(m, b, fixuptri, leftside)
struct mesh *m;
struct behavior *b;
struct otri *fixuptri;
int leftside;


{
  struct otri neartri;
  struct otri fartri;
  struct osub faredge;
  vertex nearvertex, leftvertex, rightvertex, farvertex;
  triangle ptr;
  subseg sptr;

  (neartri).tri = (*fixuptri).tri; (neartri).orient = plus1mod3[(*fixuptri).orient];
  ptr = (neartri).tri[(neartri).orient]; (fartri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (fartri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (fartri).orient);;

  if (fartri.tri == m->dummytri) {
    return;
  }
  sptr = (subseg) (neartri).tri[6 + (neartri).orient]; (faredge).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (faredge).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
  if (faredge.ss != m->dummysub) {
    return;
  }

  nearvertex = (vertex) (neartri).tri[(neartri).orient + 3];
  leftvertex = (vertex) (neartri).tri[plus1mod3[(neartri).orient] + 3];
  rightvertex = (vertex) (neartri).tri[minus1mod3[(neartri).orient] + 3];
  farvertex = (vertex) (fartri).tri[(fartri).orient + 3];

  if (leftside) {
    if (counterclockwise(m, b, nearvertex, leftvertex, farvertex) <= 0.0) {


      return;
    }
  } else {
    if (counterclockwise(m, b, farvertex, rightvertex, nearvertex) <= 0.0) {


      return;
    }
  }
  if (counterclockwise(m, b, rightvertex, leftvertex, farvertex) > 0.0) {




    if (incircle(m, b, leftvertex, farvertex, rightvertex, nearvertex) <=
        0.0) {
      return;
    }

  }
  flip(m, b, &neartri);
  (*fixuptri).orient = minus1mod3[(*fixuptri).orient];

  delaunayfixup(m, b, fixuptri, leftside);
  delaunayfixup(m, b, &fartri, leftside);
}
# 12089 "triangle.c"
void constrainededge(m, b, starttri, endpoint2, newmark)
struct mesh *m;
struct behavior *b;
struct otri *starttri;
vertex endpoint2;
int newmark;


{
  struct otri fixuptri, fixuptri2;
  struct osub crosssubseg;
  vertex endpoint1;
  vertex farvertex;
  double area;
  int collision;
  int done;
  triangle ptr;
  subseg sptr;

  endpoint1 = (vertex) (*starttri).tri[plus1mod3[(*starttri).orient] + 3];
  (fixuptri).tri = (*starttri).tri; (fixuptri).orient = plus1mod3[(*starttri).orient];
  flip(m, b, &fixuptri);


  collision = 0;
  done = 0;
  do {
    farvertex = (vertex) (fixuptri).tri[plus1mod3[(fixuptri).orient] + 3];


    if ((farvertex[0] == endpoint2[0]) && (farvertex[1] == endpoint2[1])) {
      ptr = (fixuptri).tri[(fixuptri).orient]; (fixuptri2).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (fixuptri2).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (fixuptri2).orient);; (fixuptri2).orient = plus1mod3[(fixuptri2).orient];;

      delaunayfixup(m, b, &fixuptri, 0);
      delaunayfixup(m, b, &fixuptri2, 1);
      done = 1;
    } else {



      area = counterclockwise(m, b, endpoint1, endpoint2, farvertex);
      if (area == 0.0) {

        collision = 1;
        ptr = (fixuptri).tri[(fixuptri).orient]; (fixuptri2).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (fixuptri2).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (fixuptri2).orient);; (fixuptri2).orient = plus1mod3[(fixuptri2).orient];;

        delaunayfixup(m, b, &fixuptri, 0);
        delaunayfixup(m, b, &fixuptri2, 1);
        done = 1;
      } else {
        if (area > 0.0) {
          ptr = (fixuptri).tri[(fixuptri).orient]; (fixuptri2).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (fixuptri2).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (fixuptri2).orient);; (fixuptri2).orient = plus1mod3[(fixuptri2).orient];;


          delaunayfixup(m, b, &fixuptri2, 1);



          (fixuptri).orient = minus1mod3[(fixuptri).orient];
        } else {
          delaunayfixup(m, b, &fixuptri, 0);



          ptr = (fixuptri).tri[(fixuptri).orient]; (fixuptri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (fixuptri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (fixuptri).orient);; (fixuptri).orient = plus1mod3[(fixuptri).orient];;
        }

        sptr = (subseg) (fixuptri).tri[6 + (fixuptri).orient]; (crosssubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (crosssubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
        if (crosssubseg.ss == m->dummysub) {
          flip(m, b, &fixuptri);
        } else {

          collision = 1;

          segmentintersection(m, b, &fixuptri, &crosssubseg, endpoint2);
          done = 1;
        }
      }
    }
  } while (!done);

  insertsubseg(m, b, &fixuptri, newmark);


  if (collision) {

    if (!scoutsegment(m, b, &fixuptri, endpoint2, newmark)) {
      constrainededge(m, b, &fixuptri, endpoint2, newmark);
    }
  }
}
# 12191 "triangle.c"
void insertsegment(m, b, endpoint1, endpoint2, newmark)
struct mesh *m;
struct behavior *b;
vertex endpoint1;
vertex endpoint2;
int newmark;


{
  struct otri searchtri1, searchtri2;
  triangle encodedtri;
  vertex checkvertex;
  triangle ptr;

  if (b->verbose > 1) {
    fprintf(stderr, "  Connecting (%.12g, %.12g) to (%.12g, %.12g).\n",
           endpoint1[0], endpoint1[1], endpoint2[0], endpoint2[1]);
  }


  checkvertex = (vertex) ((void *)0);
  encodedtri = ((triangle *) (endpoint1))[m->vertex2triindex];
  if (encodedtri != (triangle) ((void *)0)) {
    (searchtri1).orient = (int) ((unsigned long) (encodedtri) & (unsigned long) 3l); (searchtri1).tri = (triangle *) ((unsigned long) (encodedtri) ^ (unsigned long) (searchtri1).orient);
    checkvertex = (vertex) (searchtri1).tri[plus1mod3[(searchtri1).orient] + 3];
  }
  if (checkvertex != endpoint1) {

    searchtri1.tri = m->dummytri;
    searchtri1.orient = 0;
    ptr = (searchtri1).tri[(searchtri1).orient]; (searchtri1).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (searchtri1).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (searchtri1).orient);;

    if (locate(m, b, endpoint1, &searchtri1) != ONVERTEX) {
      fprintf(stderr,
        "Internal error in insertsegment():  Unable to locate PSLG vertex\n");
      fprintf(stderr, "  (%.12g, %.12g) in triangulation.\n",
             endpoint1[0], endpoint1[1]);
      internalerror();
    }
  }

  (m->recenttri).tri = (searchtri1).tri; (m->recenttri).orient = (searchtri1).orient;


  if (scoutsegment(m, b, &searchtri1, endpoint2, newmark)) {

    return;
  }


  endpoint1 = (vertex) (searchtri1).tri[plus1mod3[(searchtri1).orient] + 3];


  checkvertex = (vertex) ((void *)0);
  encodedtri = ((triangle *) (endpoint2))[m->vertex2triindex];
  if (encodedtri != (triangle) ((void *)0)) {
    (searchtri2).orient = (int) ((unsigned long) (encodedtri) & (unsigned long) 3l); (searchtri2).tri = (triangle *) ((unsigned long) (encodedtri) ^ (unsigned long) (searchtri2).orient);
    checkvertex = (vertex) (searchtri2).tri[plus1mod3[(searchtri2).orient] + 3];
  }
  if (checkvertex != endpoint2) {

    searchtri2.tri = m->dummytri;
    searchtri2.orient = 0;
    ptr = (searchtri2).tri[(searchtri2).orient]; (searchtri2).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (searchtri2).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (searchtri2).orient);;

    if (locate(m, b, endpoint2, &searchtri2) != ONVERTEX) {
      fprintf(stderr,
        "Internal error in insertsegment():  Unable to locate PSLG vertex\n");
      fprintf(stderr, "  (%.12g, %.12g) in triangulation.\n",
             endpoint2[0], endpoint2[1]);
      internalerror();
    }
  }

  (m->recenttri).tri = (searchtri2).tri; (m->recenttri).orient = (searchtri2).orient;


  if (scoutsegment(m, b, &searchtri2, endpoint1, newmark)) {

    return;
  }


  endpoint2 = (vertex) (searchtri2).tri[plus1mod3[(searchtri2).orient] + 3];



  if (b->splitseg) {

    conformingedge(m, b, endpoint1, endpoint2, newmark);
  } else {



    constrainededge(m, b, &searchtri1, endpoint2, newmark);


  }


}
# 12302 "triangle.c"
void markhull(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri hulltri;
  struct otri nexttri;
  struct otri starttri;
  triangle ptr;


  hulltri.tri = m->dummytri;
  hulltri.orient = 0;
  ptr = (hulltri).tri[(hulltri).orient]; (hulltri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (hulltri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (hulltri).orient);;

  (starttri).tri = (hulltri).tri; (starttri).orient = (hulltri).orient;

  do {

    insertsubseg(m, b, &hulltri, 1);

    (hulltri).orient = plus1mod3[(hulltri).orient];
    ptr = (hulltri).tri[(hulltri).orient]; (nexttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nexttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nexttri).orient);; (nexttri).orient = plus1mod3[(nexttri).orient];;
    while (nexttri.tri != m->dummytri) {
      (hulltri).tri = (nexttri).tri; (hulltri).orient = (nexttri).orient;
      ptr = (hulltri).tri[(hulltri).orient]; (nexttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nexttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nexttri).orient);; (nexttri).orient = plus1mod3[(nexttri).orient];;
    }
  } while (!(((hulltri).tri == (starttri).tri) && ((hulltri).orient == (starttri).orient)));
}
# 12349 "triangle.c"
void formskeleton(m, b, segmentlist, segmentmarkerlist, numberofsegments)
struct mesh *m;
struct behavior *b;
int *segmentlist;
int *segmentmarkerlist;
int numberofsegments;
# 12372 "triangle.c"
{

  char polyfilename[6];
  int index;




  vertex endpoint1, endpoint2;
  int segmentmarkers;
  int end1, end2;
  int boundmarker;
  int i;

  if (b->poly) {
    if (!b->quiet) {
      fprintf(stderr, "Recovering segments in Delaunay triangulation.\n");
    }

    strcpy(polyfilename, "input");
    m->insegments = numberofsegments;
    segmentmarkers = segmentmarkerlist != (int *) ((void *)0);
    index = 0;
# 12409 "triangle.c"
    if (m->triangles.items == 0) {
      return;
    }



    if (m->insegments > 0) {
      makevertexmap(m, b);
      if (b->verbose) {
        fprintf(stderr, "  Recovering PSLG segments.\n");
      }
    }

    boundmarker = 0;

    for (i = 0; i < m->insegments; i++) {

      end1 = segmentlist[index++];
      end2 = segmentlist[index++];
      if (segmentmarkers) {
        boundmarker = segmentmarkerlist[i];
      }
# 12458 "triangle.c"
      if ((end1 < b->firstnumber) ||
          (end1 >= b->firstnumber + m->invertices)) {
        if (!b->quiet) {
          fprintf(stderr, "Warning:  Invalid first endpoint of segment %d in %s.\n",
                 b->firstnumber + i, polyfilename);
        }
      } else if ((end2 < b->firstnumber) ||
                 (end2 >= b->firstnumber + m->invertices)) {
        if (!b->quiet) {
          fprintf(stderr, "Warning:  Invalid second endpoint of segment %d in %s.\n",
                 b->firstnumber + i, polyfilename);
        }
      } else {
        endpoint1 = getvertex(m, b, end1);
        endpoint2 = getvertex(m, b, end2);
        if ((endpoint1[0] == endpoint2[0]) && (endpoint1[1] == endpoint2[1])) {
          if (!b->quiet) {
            fprintf(stderr, "Warning:  Endpoints of segment %d are coincident in %s.\n",
                   b->firstnumber + i, polyfilename);
          }
        } else {
          insertsegment(m, b, endpoint1, endpoint2, boundmarker);
        }
      }
    }
  } else {
    m->insegments = 0;
  }
  if (b->convex || !b->poly) {

    if (b->verbose) {
      fprintf(stderr, "  Enclosing convex hull with segments.\n");
    }
    markhull(m, b);
  }
}
# 12514 "triangle.c"
void infecthull(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri hulltri;
  struct otri nexttri;
  struct otri starttri;
  struct osub hullsubseg;
  triangle **deadtriangle;
  vertex horg, hdest;
  triangle ptr;
  subseg sptr;

  if (b->verbose) {
    fprintf(stderr, "  Marking concavities (external triangles) for elimination.\n");
  }

  hulltri.tri = m->dummytri;
  hulltri.orient = 0;
  ptr = (hulltri).tri[(hulltri).orient]; (hulltri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (hulltri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (hulltri).orient);;

  (starttri).tri = (hulltri).tri; (starttri).orient = (hulltri).orient;

  do {

    if (!(((unsigned long) (hulltri).tri[6] & (unsigned long) 2l) != 0l)) {

      sptr = (subseg) (hulltri).tri[6 + (hulltri).orient]; (hullsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (hullsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
      if (hullsubseg.ss == m->dummysub) {

        if (!(((unsigned long) (hulltri).tri[6] & (unsigned long) 2l) != 0l)) {
          (hulltri).tri[6] = (triangle) ((unsigned long) (hulltri).tri[6] | (unsigned long) 2l);
          deadtriangle = (triangle **) poolalloc(&m->viri);
          *deadtriangle = hulltri.tri;
        }
      } else {

        if ((* (int *) ((hullsubseg).ss + 6)) == 0) {
          * (int *) ((hullsubseg).ss + 6) = 1;
          horg = (vertex) (hulltri).tri[plus1mod3[(hulltri).orient] + 3];
          hdest = (vertex) (hulltri).tri[minus1mod3[(hulltri).orient] + 3];
          if (((int *) (horg))[m->vertexmarkindex] == 0) {
            ((int *) (horg))[m->vertexmarkindex] = 1;
          }
          if (((int *) (hdest))[m->vertexmarkindex] == 0) {
            ((int *) (hdest))[m->vertexmarkindex] = 1;
          }
        }
      }
    }

    (hulltri).orient = plus1mod3[(hulltri).orient];
    ptr = (hulltri).tri[(hulltri).orient]; (nexttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nexttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nexttri).orient);; (nexttri).orient = plus1mod3[(nexttri).orient];;
    while (nexttri.tri != m->dummytri) {
      (hulltri).tri = (nexttri).tri; (hulltri).orient = (nexttri).orient;
      ptr = (hulltri).tri[(hulltri).orient]; (nexttri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (nexttri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (nexttri).orient);; (nexttri).orient = plus1mod3[(nexttri).orient];;
    }
  } while (!(((hulltri).tri == (starttri).tri) && ((hulltri).orient == (starttri).orient)));
}
# 12596 "triangle.c"
void plague(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri testtri;
  struct otri neighbor;
  triangle **virusloop;
  triangle **deadtriangle;
  struct osub neighborsubseg;
  vertex testvertex;
  vertex norg, ndest;
  vertex deadorg, deaddest, deadapex;
  int killorg;
  triangle ptr;
  subseg sptr;

  if (b->verbose) {
    fprintf(stderr, "  Marking neighbors of marked triangles.\n");
  }


  traversalinit(&m->viri);
  virusloop = (triangle **) traverse(&m->viri);
  while (virusloop != (triangle **) ((void *)0)) {
    testtri.tri = *virusloop;




    (testtri).tri[6] = (triangle) ((unsigned long) (testtri).tri[6] & ~ (unsigned long) 2l);
    if (b->verbose > 2) {


      testtri.orient = 0;
      deadorg = (vertex) (testtri).tri[plus1mod3[(testtri).orient] + 3];
      deaddest = (vertex) (testtri).tri[minus1mod3[(testtri).orient] + 3];
      deadapex = (vertex) (testtri).tri[(testtri).orient + 3];
      fprintf(stderr, "    Checking (%.12g, %.12g) (%.12g, %.12g) (%.12g, %.12g)\n",
             deadorg[0], deadorg[1], deaddest[0], deaddest[1],
             deadapex[0], deadapex[1]);
    }

    for (testtri.orient = 0; testtri.orient < 3; testtri.orient++) {

      ptr = (testtri).tri[(testtri).orient]; (neighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbor).orient);;

      sptr = (subseg) (testtri).tri[6 + (testtri).orient]; (neighborsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (neighborsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);

      if ((neighbor.tri == m->dummytri) || (((unsigned long) (neighbor).tri[6] & (unsigned long) 2l) != 0l)) {
        if (neighborsubseg.ss != m->dummysub) {



          subsegdealloc(m, neighborsubseg.ss);
          if (neighbor.tri != m->dummytri) {


            (neighbor).tri[6] = (triangle) ((unsigned long) (neighbor).tri[6] & ~ (unsigned long) 2l);
            (neighbor).tri[6 + (neighbor).orient] = (triangle) m->dummysub;
            (neighbor).tri[6] = (triangle) ((unsigned long) (neighbor).tri[6] | (unsigned long) 2l);
          }
        }
      } else {
        if (neighborsubseg.ss == m->dummysub) {


          if (b->verbose > 2) {
            deadorg = (vertex) (neighbor).tri[plus1mod3[(neighbor).orient] + 3];
            deaddest = (vertex) (neighbor).tri[minus1mod3[(neighbor).orient] + 3];
            deadapex = (vertex) (neighbor).tri[(neighbor).orient + 3];
            fprintf(stderr,
              "    Marking (%.12g, %.12g) (%.12g, %.12g) (%.12g, %.12g)\n",
                   deadorg[0], deadorg[1], deaddest[0], deaddest[1],
                   deadapex[0], deadapex[1]);
          }
          (neighbor).tri[6] = (triangle) ((unsigned long) (neighbor).tri[6] | (unsigned long) 2l);

          deadtriangle = (triangle **) poolalloc(&m->viri);
          *deadtriangle = neighbor.tri;
        } else {

          (neighborsubseg).ss[4 + (neighborsubseg).ssorient] = (subseg) m->dummytri;

          if ((* (int *) ((neighborsubseg).ss + 6)) == 0) {
            * (int *) ((neighborsubseg).ss + 6) = 1;
          }
          norg = (vertex) (neighbor).tri[plus1mod3[(neighbor).orient] + 3];
          ndest = (vertex) (neighbor).tri[minus1mod3[(neighbor).orient] + 3];
          if (((int *) (norg))[m->vertexmarkindex] == 0) {
            ((int *) (norg))[m->vertexmarkindex] = 1;
          }
          if (((int *) (ndest))[m->vertexmarkindex] == 0) {
            ((int *) (ndest))[m->vertexmarkindex] = 1;
          }
        }
      }
    }


    (testtri).tri[6] = (triangle) ((unsigned long) (testtri).tri[6] | (unsigned long) 2l);
    virusloop = (triangle **) traverse(&m->viri);
  }

  if (b->verbose) {
    fprintf(stderr, "  Deleting marked triangles.\n");
  }

  traversalinit(&m->viri);
  virusloop = (triangle **) traverse(&m->viri);
  while (virusloop != (triangle **) ((void *)0)) {
    testtri.tri = *virusloop;




    for (testtri.orient = 0; testtri.orient < 3; testtri.orient++) {
      testvertex = (vertex) (testtri).tri[plus1mod3[(testtri).orient] + 3];

      if (testvertex != (vertex) ((void *)0)) {
        killorg = 1;

        (testtri).tri[plus1mod3[(testtri).orient] + 3] = (triangle) ((void *)0);

        (neighbor).tri = (testtri).tri; (neighbor).orient = minus1mod3[(testtri).orient]; ptr = (neighbor).tri[(neighbor).orient]; (neighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbor).orient);;;

        while ((neighbor.tri != m->dummytri) &&
               (!(((neighbor).tri == (testtri).tri) && ((neighbor).orient == (testtri).orient)))) {
          if ((((unsigned long) (neighbor).tri[6] & (unsigned long) 2l) != 0l)) {

            (neighbor).tri[plus1mod3[(neighbor).orient] + 3] = (triangle) ((void *)0);
          } else {

            killorg = 0;
          }

          (neighbor).orient = minus1mod3[(neighbor).orient]; ptr = (neighbor).tri[(neighbor).orient]; (neighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbor).orient);;;
        }

        if (neighbor.tri == m->dummytri) {

          ptr = (testtri).tri[(testtri).orient]; (neighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbor).orient);; (neighbor).orient = plus1mod3[(neighbor).orient];;

          while (neighbor.tri != m->dummytri) {
            if ((((unsigned long) (neighbor).tri[6] & (unsigned long) 2l) != 0l)) {

              (neighbor).tri[plus1mod3[(neighbor).orient] + 3] = (triangle) ((void *)0);
            } else {

              killorg = 0;
            }

            ptr = (neighbor).tri[(neighbor).orient]; (neighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbor).orient);; (neighbor).orient = plus1mod3[(neighbor).orient];;
          }
        }
        if (killorg) {
          if (b->verbose > 1) {
            fprintf(stderr, "    Deleting vertex (%.12g, %.12g)\n",
                   testvertex[0], testvertex[1]);
          }
          ((int *) (testvertex))[m->vertexmarkindex + 1] = -32767;
          m->undeads++;
        }
      }
    }



    for (testtri.orient = 0; testtri.orient < 3; testtri.orient++) {
      ptr = (testtri).tri[(testtri).orient]; (neighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbor).orient);;
      if (neighbor.tri == m->dummytri) {



        m->hullsize--;
      } else {

        (neighbor).tri[(neighbor).orient] = (triangle) m->dummytri;


        m->hullsize++;
      }
    }

    triangledealloc(m, testtri.tri);
    virusloop = (triangle **) traverse(&m->viri);
  }

  poolrestart(&m->viri);
}
# 12807 "triangle.c"
void regionplague(m, b, attribute, area)
struct mesh *m;
struct behavior *b;
double attribute;
double area;


{
  struct otri testtri;
  struct otri neighbor;
  triangle **virusloop;
  triangle **regiontri;
  struct osub neighborsubseg;
  vertex regionorg, regiondest, regionapex;
  triangle ptr;
  subseg sptr;

  if (b->verbose > 1) {
    fprintf(stderr, "  Marking neighbors of marked triangles.\n");
  }



  traversalinit(&m->viri);
  virusloop = (triangle **) traverse(&m->viri);
  while (virusloop != (triangle **) ((void *)0)) {
    testtri.tri = *virusloop;




    (testtri).tri[6] = (triangle) ((unsigned long) (testtri).tri[6] & ~ (unsigned long) 2l);
    if (b->regionattrib) {

      ((double *) (testtri).tri)[m->elemattribindex + (m->eextras)] = attribute;
    }
    if (b->vararea) {

      ((double *) (testtri).tri)[m->areaboundindex] = area;
    }
    if (b->verbose > 2) {


      testtri.orient = 0;
      regionorg = (vertex) (testtri).tri[plus1mod3[(testtri).orient] + 3];
      regiondest = (vertex) (testtri).tri[minus1mod3[(testtri).orient] + 3];
      regionapex = (vertex) (testtri).tri[(testtri).orient + 3];
      fprintf(stderr, "    Checking (%.12g, %.12g) (%.12g, %.12g) (%.12g, %.12g)\n",
             regionorg[0], regionorg[1], regiondest[0], regiondest[1],
             regionapex[0], regionapex[1]);
    }

    for (testtri.orient = 0; testtri.orient < 3; testtri.orient++) {

      ptr = (testtri).tri[(testtri).orient]; (neighbor).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (neighbor).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (neighbor).orient);;

      sptr = (subseg) (testtri).tri[6 + (testtri).orient]; (neighborsubseg).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (neighborsubseg).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);


      if ((neighbor.tri != m->dummytri) && !(((unsigned long) (neighbor).tri[6] & (unsigned long) 2l) != 0l)
          && (neighborsubseg.ss == m->dummysub)) {
        if (b->verbose > 2) {
          regionorg = (vertex) (neighbor).tri[plus1mod3[(neighbor).orient] + 3];
          regiondest = (vertex) (neighbor).tri[minus1mod3[(neighbor).orient] + 3];
          regionapex = (vertex) (neighbor).tri[(neighbor).orient + 3];
          fprintf(stderr, "    Marking (%.12g, %.12g) (%.12g, %.12g) (%.12g, %.12g)\n",
                 regionorg[0], regionorg[1], regiondest[0], regiondest[1],
                 regionapex[0], regionapex[1]);
        }

        (neighbor).tri[6] = (triangle) ((unsigned long) (neighbor).tri[6] | (unsigned long) 2l);

        regiontri = (triangle **) poolalloc(&m->viri);
        *regiontri = neighbor.tri;
      }
    }


    (testtri).tri[6] = (triangle) ((unsigned long) (testtri).tri[6] | (unsigned long) 2l);
    virusloop = (triangle **) traverse(&m->viri);
  }


  if (b->verbose > 1) {
    fprintf(stderr, "  Unmarking marked triangles.\n");
  }
  traversalinit(&m->viri);
  virusloop = (triangle **) traverse(&m->viri);
  while (virusloop != (triangle **) ((void *)0)) {
    testtri.tri = *virusloop;
    (testtri).tri[6] = (triangle) ((unsigned long) (testtri).tri[6] & ~ (unsigned long) 2l);
    virusloop = (triangle **) traverse(&m->viri);
  }

  poolrestart(&m->viri);
}
# 12920 "triangle.c"
void carveholes(m, b, holelist, holes, regionlist, regions)
struct mesh *m;
struct behavior *b;
double *holelist;
int holes;
double *regionlist;
int regions;


{
  struct otri searchtri;
  struct otri triangleloop;
  struct otri *regiontris;
  triangle **holetri;
  triangle **regiontri;
  vertex searchorg, searchdest;
  enum locateresult intersect;
  int i;
  triangle ptr;

  if (!(b->quiet || (b->noholes && b->convex))) {
    fprintf(stderr, "Removing unwanted triangles.\n");
    if (b->verbose && (holes > 0)) {
      fprintf(stderr, "  Marking holes for elimination.\n");
    }
  }

  if (regions > 0) {

    regiontris = (struct otri *) trimalloc(regions * sizeof(struct otri));
  }

  if (((holes > 0) && !b->noholes) || !b->convex || (regions > 0)) {


    poolinit(&m->viri, sizeof(triangle *), 1020, POINTER, 0);
  }

  if (!b->convex) {


    infecthull(m, b);
  }

  if ((holes > 0) && !b->noholes) {

    for (i = 0; i < 2 * holes; i += 2) {

      if ((holelist[i] >= m->xmin) && (holelist[i] <= m->xmax)
          && (holelist[i + 1] >= m->ymin) && (holelist[i + 1] <= m->ymax)) {

        searchtri.tri = m->dummytri;
        searchtri.orient = 0;
        ptr = (searchtri).tri[(searchtri).orient]; (searchtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (searchtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (searchtri).orient);;



        searchorg = (vertex) (searchtri).tri[plus1mod3[(searchtri).orient] + 3];
        searchdest = (vertex) (searchtri).tri[minus1mod3[(searchtri).orient] + 3];
        if (counterclockwise(m, b, searchorg, searchdest, &holelist[i]) >
            0.0) {

          intersect = locate(m, b, &holelist[i], &searchtri);
          if ((intersect != OUTSIDE) && (!(((unsigned long) (searchtri).tri[6] & (unsigned long) 2l) != 0l))) {


            (searchtri).tri[6] = (triangle) ((unsigned long) (searchtri).tri[6] | (unsigned long) 2l);
            holetri = (triangle **) poolalloc(&m->viri);
            *holetri = searchtri.tri;
          }
        }
      }
    }
  }







  if (regions > 0) {

    for (i = 0; i < regions; i++) {
      regiontris[i].tri = m->dummytri;

      if ((regionlist[4 * i] >= m->xmin) && (regionlist[4 * i] <= m->xmax) &&
          (regionlist[4 * i + 1] >= m->ymin) &&
          (regionlist[4 * i + 1] <= m->ymax)) {

        searchtri.tri = m->dummytri;
        searchtri.orient = 0;
        ptr = (searchtri).tri[(searchtri).orient]; (searchtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (searchtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (searchtri).orient);;



        searchorg = (vertex) (searchtri).tri[plus1mod3[(searchtri).orient] + 3];
        searchdest = (vertex) (searchtri).tri[minus1mod3[(searchtri).orient] + 3];
        if (counterclockwise(m, b, searchorg, searchdest, &regionlist[4 * i]) >
            0.0) {

          intersect = locate(m, b, &regionlist[4 * i], &searchtri);
          if ((intersect != OUTSIDE) && (!(((unsigned long) (searchtri).tri[6] & (unsigned long) 2l) != 0l))) {


            (regiontris[i]).tri = (searchtri).tri; (regiontris[i]).orient = (searchtri).orient;
          }
        }
      }
    }
  }

  if (m->viri.items > 0) {

    plague(m, b);
  }


  if (regions > 0) {
    if (!b->quiet) {
      if (b->regionattrib) {
        if (b->vararea) {
          fprintf(stderr, "Spreading regional attributes and area constraints.\n");
        } else {
          fprintf(stderr, "Spreading regional attributes.\n");
        }
      } else {
        fprintf(stderr, "Spreading regional area constraints.\n");
      }
    }
    if (b->regionattrib && !b->refine) {

      traversalinit(&m->triangles);
      triangleloop.orient = 0;
      triangleloop.tri = triangletraverse(m);
      while (triangleloop.tri != (triangle *) ((void *)0)) {
        ((double *) (triangleloop).tri)[m->elemattribindex + (m->eextras)] = 0.0;
        triangleloop.tri = triangletraverse(m);
      }
    }
    for (i = 0; i < regions; i++) {
      if (regiontris[i].tri != m->dummytri) {


        if (!((regiontris[i].tri)[1] == (triangle) ((void *)0))) {

          (regiontris[i]).tri[6] = (triangle) ((unsigned long) (regiontris[i]).tri[6] | (unsigned long) 2l);
          regiontri = (triangle **) poolalloc(&m->viri);
          *regiontri = regiontris[i].tri;

          regionplague(m, b, regionlist[4 * i + 2], regionlist[4 * i + 3]);

        }
      }
    }
    if (b->regionattrib && !b->refine) {

      m->eextras++;
    }
  }


  if (((holes > 0) && !b->noholes) || !b->convex || (regions > 0)) {
    pooldeinit(&m->viri);
  }
  if (regions > 0) {
    trifree((int *) regiontris);
  }
}
# 13110 "triangle.c"
void tallyencs(m, b)
struct mesh *m;
struct behavior *b;


{
  struct osub subsegloop;
  int dummy;

  traversalinit(&m->subsegs);
  subsegloop.ssorient = 0;
  subsegloop.ss = subsegtraverse(m);
  while (subsegloop.ss != (subseg *) ((void *)0)) {

    dummy = checkseg4encroach(m, b, &subsegloop, 0.0);
    subsegloop.ss = subsegtraverse(m);
  }
}
# 13139 "triangle.c"
void precisionerror()
{
  fprintf(stderr, "Try increasing the area criterion and/or reducing the minimum\n");
  fprintf(stderr, "  allowable angle so that tiny triangles are not created.\n");





}
# 13171 "triangle.c"
void splitencsegs(m, b, triflaws)
struct mesh *m;
struct behavior *b;
int triflaws;


{
  struct otri enctri;
  struct otri testtri;
  struct osub testsh;
  struct osub currentenc;
  struct badsubseg *encloop;
  vertex eorg, edest, eapex;
  vertex newvertex;
  enum insertvertexresult success;
  double segmentlength, nearestpoweroftwo;
  double split;
  double multiplier, divisor;
  int acuteorg, acuteorg2, acutedest, acutedest2;
  int dummy;
  int i;
  triangle ptr;
  subseg sptr;



  while ((m->badsubsegs.items > 0) && (m->steinerleft != 0)) {
    traversalinit(&m->badsubsegs);
    encloop = badsubsegtraverse(m);
    while ((encloop != (struct badsubseg *) ((void *)0)) && (m->steinerleft != 0)) {
      (currentenc).ssorient = (int) ((unsigned long) (encloop->encsubseg) & (unsigned long) 1l); (currentenc).ss = (subseg *) ((unsigned long) (encloop->encsubseg) & ~ (unsigned long) 3l);
      eorg = (vertex) (currentenc).ss[2 + (currentenc).ssorient];
      edest = (vertex) (currentenc).ss[3 - (currentenc).ssorient];




      if (!((currentenc.ss)[1] == (subseg) ((void *)0)) &&
          (eorg == encloop->subsegorg) && (edest == encloop->subsegdest)) {
# 13226 "triangle.c"
        ptr = (triangle) (currentenc).ss[4 + (currentenc).ssorient]; (enctri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (enctri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (enctri).orient);
        (testtri).tri = (enctri).tri; (testtri).orient = plus1mod3[(enctri).orient];
        sptr = (subseg) (testtri).tri[6 + (testtri).orient]; (testsh).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (testsh).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
        acuteorg = testsh.ss != m->dummysub;

        (testtri).orient = plus1mod3[(testtri).orient];
        sptr = (subseg) (testtri).tri[6 + (testtri).orient]; (testsh).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (testsh).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
        acutedest = testsh.ss != m->dummysub;




        if (!b->nolenses && !acuteorg && !acutedest) {
          eapex = (vertex) (enctri).tri[(enctri).orient + 3];
          while ((((int *) (eapex))[m->vertexmarkindex + 1] == 2) &&
                 ((eorg[0] - eapex[0]) * (edest[0] - eapex[0]) +
                  (eorg[1] - eapex[1]) * (edest[1] - eapex[1]) < 0.0)) {
            deletevertex(m, b, &testtri);
            ptr = (triangle) (currentenc).ss[4 + (currentenc).ssorient]; (enctri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (enctri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (enctri).orient);
            eapex = (vertex) (enctri).tri[(enctri).orient + 3];
            (testtri).tri = (enctri).tri; (testtri).orient = minus1mod3[(enctri).orient];
          }
        }



        ptr = (enctri).tri[(enctri).orient]; (testtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (testtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (testtri).orient);;
        if (testtri.tri != m->dummytri) {

          (testtri).orient = plus1mod3[(testtri).orient];
          sptr = (subseg) (testtri).tri[6 + (testtri).orient]; (testsh).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (testsh).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
          acutedest2 = testsh.ss != m->dummysub;
          acutedest = acutedest || acutedest2;

          (testtri).orient = plus1mod3[(testtri).orient];
          sptr = (subseg) (testtri).tri[6 + (testtri).orient]; (testsh).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (testsh).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
          acuteorg2 = testsh.ss != m->dummysub;
          acuteorg = acuteorg || acuteorg2;


          if (!b->nolenses && !acuteorg2 && !acutedest2) {
            eapex = (vertex) (testtri).tri[plus1mod3[(testtri).orient] + 3];
            while ((((int *) (eapex))[m->vertexmarkindex + 1] == 2) &&
                   ((eorg[0] - eapex[0]) * (edest[0] - eapex[0]) +
                    (eorg[1] - eapex[1]) * (edest[1] - eapex[1]) < 0.0)) {
              deletevertex(m, b, &testtri);
              ptr = (enctri).tri[(enctri).orient]; (testtri).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (testtri).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (testtri).orient);;
              eapex = (vertex) (testtri).tri[(testtri).orient + 3];
              (testtri).orient = minus1mod3[(testtri).orient];
            }
          }
        }



        if (acuteorg || acutedest) {
          segmentlength = sqrt((edest[0] - eorg[0]) * (edest[0] - eorg[0]) +
                               (edest[1] - eorg[1]) * (edest[1] - eorg[1]));


          nearestpoweroftwo = 1.0;
          while (segmentlength > 3.0 * nearestpoweroftwo) {
            nearestpoweroftwo *= 2.0;
          }
          while (segmentlength < 1.5 * nearestpoweroftwo) {
            nearestpoweroftwo *= 0.5;
          }

          split = nearestpoweroftwo / segmentlength;
          if (acutedest) {
            split = 1.0 - split;
          }
        } else {


          split = 0.5;
        }


        newvertex = (vertex) poolalloc(&m->vertices);

        for (i = 0; i < 2 + m->nextras; i++) {
          newvertex[i] = eorg[i] + split * (edest[i] - eorg[i]);
        }

        if (!b->noexact) {



          multiplier = counterclockwise(m, b, eorg, edest, newvertex);
          divisor = ((eorg[0] - edest[0]) * (eorg[0] - edest[0]) +
                     (eorg[1] - edest[1]) * (eorg[1] - edest[1]));
          if ((multiplier != 0.0) && (divisor != 0.0)) {
            multiplier = multiplier / divisor;

            if (multiplier == multiplier) {
              newvertex[0] += multiplier * (edest[1] - eorg[1]);
              newvertex[1] += multiplier * (eorg[0] - edest[0]);
            }
          }
        }

        ((int *) (newvertex))[m->vertexmarkindex] = (* (int *) ((currentenc).ss + 6));
        ((int *) (newvertex))[m->vertexmarkindex + 1] = 1;
        if (b->verbose > 1) {
          fprintf(stderr,
  "  Splitting subsegment (%.12g, %.12g) (%.12g, %.12g) at (%.12g, %.12g).\n",
                 eorg[0], eorg[1], edest[0], edest[1],
                 newvertex[0], newvertex[1]);
        }

        if (((newvertex[0] == eorg[0]) && (newvertex[1] == eorg[1])) ||
            ((newvertex[0] == edest[0]) && (newvertex[1] == edest[1]))) {
          fprintf(stderr, "Error:  Ran out of precision at (%.12g, %.12g).\n",
                 newvertex[0], newvertex[1]);
          fprintf(stderr, "I attempted to split a segment to a smaller size than\n");
          fprintf(stderr, "  can be accommodated by the finite precision of\n");
          fprintf(stderr, "  floating point arithmetic.\n");
          precisionerror();
          exit(1);
        }

        success = insertvertex(m, b, newvertex, &enctri, &currentenc,
                               1, triflaws, 0.0);
        if ((success != SUCCESSFULVERTEX) && (success != ENCROACHINGVERTEX)) {
          fprintf(stderr, "Internal error in splitencsegs():\n");
          fprintf(stderr, "  Failure to split a segment.\n");
          internalerror();
        }
        if (m->steinerleft > 0) {
          m->steinerleft--;
        }

        dummy = checkseg4encroach(m, b, &currentenc, 0.0);
        sptr = (currentenc).ss[1 - (currentenc).ssorient]; (currentenc).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (currentenc).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
        dummy = checkseg4encroach(m, b, &currentenc, 0.0);
      }

      badsubsegdealloc(m, encloop);
      encloop = badsubsegtraverse(m);
    }
  }
}
# 13383 "triangle.c"
void tallyfaces(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri triangleloop;

  if (b->verbose) {
    fprintf(stderr, "  Making a list of bad triangles.\n");
  }
  traversalinit(&m->triangles);
  triangleloop.orient = 0;
  triangleloop.tri = triangletraverse(m);
  while (triangleloop.tri != (triangle *) ((void *)0)) {

    testtriangle(m, b, &triangleloop);
    triangleloop.tri = triangletraverse(m);
  }
}
# 13420 "triangle.c"
void splittriangle(m, b, badtri)
struct mesh *m;
struct behavior *b;
struct badtriang *badtri;


{
  struct otri badotri;
  vertex borg, bdest, bapex;
  vertex newvertex;
  double xi, eta;
  double minedge;
  enum insertvertexresult success;
  int errorflag;
  int i;

  (badotri).orient = (int) ((unsigned long) (badtri->poortri) & (unsigned long) 3l); (badotri).tri = (triangle *) ((unsigned long) (badtri->poortri) ^ (unsigned long) (badotri).orient);
  borg = (vertex) (badotri).tri[plus1mod3[(badotri).orient] + 3];
  bdest = (vertex) (badotri).tri[minus1mod3[(badotri).orient] + 3];
  bapex = (vertex) (badotri).tri[(badotri).orient + 3];



  if (!((badotri.tri)[1] == (triangle) ((void *)0)) && (borg == badtri->triangorg) &&
      (bdest == badtri->triangdest) && (bapex == badtri->triangapex)) {
    if (b->verbose > 1) {
      fprintf(stderr, "  Splitting this triangle at its circumcenter:\n");
      fprintf(stderr, "    (%.12g, %.12g) (%.12g, %.12g) (%.12g, %.12g)\n", borg[0],
             borg[1], bdest[0], bdest[1], bapex[0], bapex[1]);
    }

    errorflag = 0;

    newvertex = (vertex) poolalloc(&m->vertices);
    findcircumcenter(m, b, borg, bdest, bapex, newvertex, &xi, &eta, &minedge);


    if (((newvertex[0] == borg[0]) && (newvertex[1] == borg[1])) ||
        ((newvertex[0] == bdest[0]) && (newvertex[1] == bdest[1])) ||
        ((newvertex[0] == bapex[0]) && (newvertex[1] == bapex[1]))) {
      if (!b->quiet) {
        fprintf(stderr,
            "Warning:  New vertex (%.12g, %.12g) falls on existing vertex.\n",
               newvertex[0], newvertex[1]);
        errorflag = 1;
      }
      vertexdealloc(m, newvertex);
    } else {
      for (i = 2; i < 2 + m->nextras; i++) {

        newvertex[i] = borg[i] + xi * (bdest[i] - borg[i])
                              + eta * (bapex[i] - borg[i]);
      }


      ((int *) (newvertex))[m->vertexmarkindex] = 0;
      ((int *) (newvertex))[m->vertexmarkindex + 1] = 2;
# 13485 "triangle.c"
      if (eta < xi) {
        (badotri).orient = minus1mod3[(badotri).orient];
      }



      success = insertvertex(m, b, newvertex, &badotri, (struct osub *) ((void *)0),
                             1, 1, minedge);
      if (success == SUCCESSFULVERTEX) {
        if (m->steinerleft > 0) {
          m->steinerleft--;
        }
      } else if (success == ENCROACHINGVERTEX) {


        undovertex(m, b);
        if (b->verbose > 1) {
          fprintf(stderr, "  Rejecting (%.12g, %.12g).\n", newvertex[0], newvertex[1]);
        }
        vertexdealloc(m, newvertex);
      } else if (success == VIOLATINGVERTEX) {


        vertexdealloc(m, newvertex);
      } else {

        if (!b->quiet) {
          fprintf(stderr,
            "Warning:  New vertex (%.12g, %.12g) falls on existing vertex.\n",
                 newvertex[0], newvertex[1]);
          errorflag = 1;
        }
        vertexdealloc(m, newvertex);
      }
    }
    if (errorflag) {
      if (b->verbose) {
        fprintf(stderr, "  The new vertex is at the circumcenter of triangle\n");
        fprintf(stderr, "    (%.12g, %.12g) (%.12g, %.12g) (%.12g, %.12g)\n",
               borg[0], borg[1], bdest[0], bdest[1], bapex[0], bapex[1]);
      }
      fprintf(stderr, "This probably means that I am trying to refine triangles\n");
      fprintf(stderr, "  to a smaller size than can be accommodated by the finite\n");
      fprintf(stderr, "  precision of floating point arithmetic.  (You can be\n");
      fprintf(stderr, "  sure of this if I fail to terminate.)\n");
      precisionerror();
    }
  }
}
# 13549 "triangle.c"
void enforcequality(m, b)
struct mesh *m;
struct behavior *b;


{
  struct badtriang *badtri;
  int i;

  if (!b->quiet) {
    fprintf(stderr, "Adding Steiner points to enforce quality.\n");
  }

  poolinit(&m->badsubsegs, sizeof(struct badsubseg), 252,
           POINTER, 0);
  if (b->verbose) {
    fprintf(stderr, "  Looking for encroached subsegments.\n");
  }

  tallyencs(m, b);
  if (b->verbose && (m->badsubsegs.items > 0)) {
    fprintf(stderr, "  Splitting encroached subsegments.\n");
  }

  splitencsegs(m, b, 0);




  if ((b->minangle > 0.0) || b->vararea || b->fixedarea || b->usertest) {

    poolinit(&m->badtriangles, sizeof(struct badtriang), 4092,
             POINTER, 0);

    for (i = 0; i < 64; i++) {
      m->queuefront[i] = (struct badtriang *) ((void *)0);
    }
    m->firstnonemptyq = -1;

    tallyfaces(m, b);

    poolinit(&m->flipstackers, sizeof(struct flipstacker), 252,
             POINTER, 0);
    m->checkquality = 1;
    if (b->verbose) {
      fprintf(stderr, "  Splitting bad triangles.\n");
    }
    while ((m->badtriangles.items > 0) && (m->steinerleft != 0)) {

      badtri = dequeuebadtriang(m);
      splittriangle(m, b, badtri);
      if (m->badsubsegs.items > 0) {

        enqueuebadtriang(m, b, badtri);


        splitencsegs(m, b, 1);
      } else {

        pooldealloc(&m->badtriangles, (int *) badtri);
      }
    }
  }





  if (!b->quiet && (m->badsubsegs.items > 0) && (m->steinerleft == 0)) {
    fprintf(stderr, "\nWarning:  I ran out of Steiner points, but the mesh has\n");
    if (m->badsubsegs.items == 1) {
      fprintf(stderr, "  an encroached subsegment, and therefore might not be truly\n");
    } else {
      fprintf(stderr, "  %ld encroached subsegments, and therefore might not be truly\n"
             , m->badsubsegs.items);
    }
    fprintf(stderr, "  Delaunay.  If the Delaunay property is important to you,\n");
    fprintf(stderr, "  try increasing the number of Steiner points (controlled by\n");
    fprintf(stderr, "  the -S switch) slightly and try again.\n\n");
  }
}
# 13646 "triangle.c"
void highorder(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri triangleloop, trisym;
  struct osub checkmark;
  vertex newvertex;
  vertex torg, tdest;
  int i;
  triangle ptr;
  subseg sptr;

  if (!b->quiet) {
    fprintf(stderr, "Adding vertices for second-order triangles.\n");
  }





  m->vertices.deaditemstack = (int *) ((void *)0);

  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);






  while (triangleloop.tri != (triangle *) ((void *)0)) {
    for (triangleloop.orient = 0; triangleloop.orient < 3;
         triangleloop.orient++) {
      ptr = (triangleloop).tri[(triangleloop).orient]; (trisym).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (trisym).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (trisym).orient);;
      if ((triangleloop.tri < trisym.tri) || (trisym.tri == m->dummytri)) {
        torg = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
        tdest = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];


        newvertex = (vertex) poolalloc(&m->vertices);
        for (i = 0; i < 2 + m->nextras; i++) {
          newvertex[i] = 0.5 * (torg[i] + tdest[i]);
        }


        ((int *) (newvertex))[m->vertexmarkindex] = trisym.tri == m->dummytri;
        ((int *) (newvertex))[m->vertexmarkindex + 1] = trisym.tri == m->dummytri ? 2 : 1;

        if (b->usesegments) {
          sptr = (subseg) (triangleloop).tri[6 + (triangleloop).orient]; (checkmark).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (checkmark).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);

          if (checkmark.ss != m->dummysub) {
            ((int *) (newvertex))[m->vertexmarkindex] = (* (int *) ((checkmark).ss + 6));
            ((int *) (newvertex))[m->vertexmarkindex + 1] = 1;
          }
        }
        if (b->verbose > 1) {
          fprintf(stderr, "  Creating (%.12g, %.12g).\n", newvertex[0], newvertex[1]);
        }

        triangleloop.tri[m->highorderindex + triangleloop.orient] =
                (triangle) newvertex;
        if (trisym.tri != m->dummytri) {
          trisym.tri[m->highorderindex + trisym.orient] = (triangle) newvertex;
        }
      }
    }
    triangleloop.tri = triangletraverse(m);
  }
}
# 14021 "triangle.c"
void transfernodes(m, b, pointlist, pointattriblist, pointmarkerlist,
                   numberofpoints, numberofpointattribs)
struct mesh *m;
struct behavior *b;
double *pointlist;
double *pointattriblist;
int *pointmarkerlist;
int numberofpoints;
int numberofpointattribs;


{
  vertex vertexloop;
  double x, y;
  int i, j;
  int coordindex;
  int attribindex;

  m->invertices = numberofpoints;
  m->mesh_dim = 2;
  m->nextras = numberofpointattribs;
  m->readnodefile = 0;
  if (m->invertices < 3) {
    fprintf(stderr, "Error:  Input must have at least three input vertices.\n");
    exit(1);
  }
  if (m->nextras == 0) {
    b->weighted = 0;
  }

  initializevertexpool(m, b);


  coordindex = 0;
  attribindex = 0;
  for (i = 0; i < m->invertices; i++) {
    vertexloop = (vertex) poolalloc(&m->vertices);

    x = vertexloop[0] = pointlist[coordindex++];
    y = vertexloop[1] = pointlist[coordindex++];

    for (j = 0; j < numberofpointattribs; j++) {
      vertexloop[2 + j] = pointattriblist[attribindex++];
    }
    if (pointmarkerlist != (int *) ((void *)0)) {

      ((int *) (vertexloop))[m->vertexmarkindex] = pointmarkerlist[i];
    } else {

      ((int *) (vertexloop))[m->vertexmarkindex] = 0;
    }
    ((int *) (vertexloop))[m->vertexmarkindex + 1] = 0;

    if (i == 0) {
      m->xmin = m->xmax = x;
      m->ymin = m->ymax = y;
    } else {
      m->xmin = (x < m->xmin) ? x : m->xmin;
      m->xmax = (x > m->xmax) ? x : m->xmax;
      m->ymin = (y < m->ymin) ? y : m->ymin;
      m->ymax = (y > m->ymax) ? y : m->ymax;
    }
  }



  m->xminextreme = 10 * m->xmin - 9 * m->xmax;
}
# 14258 "triangle.c"
void writenodes(m, b, pointlist, pointattriblist, pointmarkerlist)
struct mesh *m;
struct behavior *b;
double **pointlist;
double **pointattriblist;
int **pointmarkerlist;
# 14282 "triangle.c"
{

  double *plist;
  double *palist;
  int *pmlist;
  int coordindex;
  int attribindex;



  vertex vertexloop;
  long outvertices;
  int vertexnumber;
  int i;

  if (b->jettison) {
    outvertices = m->vertices.items - m->undeads;
  } else {
    outvertices = m->vertices.items;
  }


  if (!b->quiet) {
    fprintf(stderr, "Writing vertices.\n");
  }

  if (*pointlist == (double *) ((void *)0)) {
    *pointlist = (double *) trimalloc(outvertices * 2 * sizeof(double));
  }

  if ((m->nextras > 0) && (*pointattriblist == (double *) ((void *)0))) {
    *pointattriblist = (double *) trimalloc(outvertices * m->nextras *
                                          sizeof(double));
  }

  if (!b->nobound && (*pointmarkerlist == (int *) ((void *)0))) {
    *pointmarkerlist = (int *) trimalloc(outvertices * sizeof(int));
  }
  plist = *pointlist;
  palist = *pointattriblist;
  pmlist = *pointmarkerlist;
  coordindex = 0;
  attribindex = 0;
# 14340 "triangle.c"
  traversalinit(&m->vertices);
  vertexnumber = b->firstnumber;
  vertexloop = vertextraverse(m);
  while (vertexloop != (vertex) ((void *)0)) {
    if (!b->jettison || (((int *) (vertexloop))[m->vertexmarkindex + 1] != -32767)) {


      plist[coordindex++] = vertexloop[0];
      plist[coordindex++] = vertexloop[1];

      for (i = 0; i < m->nextras; i++) {
        palist[attribindex++] = vertexloop[2 + i];
      }
      if (!b->nobound) {

        pmlist[vertexnumber - b->firstnumber] = ((int *) (vertexloop))[m->vertexmarkindex];
      }
# 14373 "triangle.c"
      ((int *) (vertexloop))[m->vertexmarkindex] = vertexnumber;
      vertexnumber++;
    }
    vertexloop = vertextraverse(m);
  }




}
# 14397 "triangle.c"
void numbernodes(m, b)
struct mesh *m;
struct behavior *b;


{
  vertex vertexloop;
  int vertexnumber;

  traversalinit(&m->vertices);
  vertexnumber = b->firstnumber;
  vertexloop = vertextraverse(m);
  while (vertexloop != (vertex) ((void *)0)) {
    ((int *) (vertexloop))[m->vertexmarkindex] = vertexnumber;
    if (!b->jettison || (((int *) (vertexloop))[m->vertexmarkindex + 1] != -32767)) {
      vertexnumber++;
    }
    vertexloop = vertextraverse(m);
  }
}
# 14430 "triangle.c"
void writeelements(m, b, trianglelist, triangleattriblist)
struct mesh *m;
struct behavior *b;
int **trianglelist;
double **triangleattriblist;
# 14453 "triangle.c"
{

  int *tlist;
  double *talist;
  int vertexindex;
  int attribindex;



  struct otri triangleloop;
  vertex p1, p2, p3;
  vertex mid1, mid2, mid3;
  long elementnumber;
  int i;


  if (!b->quiet) {
    fprintf(stderr, "Writing triangles.\n");
  }

  if (*trianglelist == (int *) ((void *)0)) {
    *trianglelist = (int *) trimalloc(m->triangles.items *
                                      ((b->order + 1) * (b->order + 2) / 2) *
                                      sizeof(int));
  }

  if ((m->eextras > 0) && (*triangleattriblist == (double *) ((void *)0))) {
    *triangleattriblist = (double *) trimalloc(m->triangles.items * m->eextras *
                                             sizeof(double));
  }
  tlist = *trianglelist;
  talist = *triangleattriblist;
  vertexindex = 0;
  attribindex = 0;
# 14501 "triangle.c"
  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  triangleloop.orient = 0;
  elementnumber = b->firstnumber;
  while (triangleloop.tri != (triangle *) ((void *)0)) {
    p1 = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
    p2 = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];
    p3 = (vertex) (triangleloop).tri[(triangleloop).orient + 3];
    if (b->order == 1) {

      tlist[vertexindex++] = ((int *) (p1))[m->vertexmarkindex];
      tlist[vertexindex++] = ((int *) (p2))[m->vertexmarkindex];
      tlist[vertexindex++] = ((int *) (p3))[m->vertexmarkindex];





    } else {
      mid1 = (vertex) triangleloop.tri[m->highorderindex + 1];
      mid2 = (vertex) triangleloop.tri[m->highorderindex + 2];
      mid3 = (vertex) triangleloop.tri[m->highorderindex];

      tlist[vertexindex++] = ((int *) (p1))[m->vertexmarkindex];
      tlist[vertexindex++] = ((int *) (p2))[m->vertexmarkindex];
      tlist[vertexindex++] = ((int *) (p3))[m->vertexmarkindex];
      tlist[vertexindex++] = ((int *) (mid1))[m->vertexmarkindex];
      tlist[vertexindex++] = ((int *) (mid2))[m->vertexmarkindex];
      tlist[vertexindex++] = ((int *) (mid3))[m->vertexmarkindex];






    }


    for (i = 0; i < m->eextras; i++) {
      talist[attribindex++] = ((double *) (triangleloop).tri)[m->elemattribindex + (i)];
    }







    triangleloop.tri = triangletraverse(m);
    elementnumber++;
  }




}
# 14570 "triangle.c"
void writepoly(m, b, segmentlist, segmentmarkerlist)
struct mesh *m;
struct behavior *b;
int **segmentlist;
int **segmentmarkerlist;
# 14599 "triangle.c"
{

  int *slist;
  int *smlist;
  int index;




  struct osub subsegloop;
  vertex endpoint1, endpoint2;
  long subsegnumber;


  if (!b->quiet) {
    fprintf(stderr, "Writing segments.\n");
  }

  if (*segmentlist == (int *) ((void *)0)) {
    *segmentlist = (int *) trimalloc(m->subsegs.items * 2 * sizeof(int));
  }

  if (!b->nobound && (*segmentmarkerlist == (int *) ((void *)0))) {
    *segmentmarkerlist = (int *) trimalloc(m->subsegs.items * sizeof(int));
  }
  slist = *segmentlist;
  smlist = *segmentmarkerlist;
  index = 0;
# 14645 "triangle.c"
  traversalinit(&m->subsegs);
  subsegloop.ss = subsegtraverse(m);
  subsegloop.ssorient = 0;
  subsegnumber = b->firstnumber;
  while (subsegloop.ss != (subseg *) ((void *)0)) {
    endpoint1 = (vertex) (subsegloop).ss[2 + (subsegloop).ssorient];
    endpoint2 = (vertex) (subsegloop).ss[3 - (subsegloop).ssorient];


    slist[index++] = ((int *) (endpoint1))[m->vertexmarkindex];
    slist[index++] = ((int *) (endpoint2))[m->vertexmarkindex];
    if (!b->nobound) {

      smlist[subsegnumber - b->firstnumber] = (* (int *) ((subsegloop).ss + 6));
    }
# 14671 "triangle.c"
    subsegloop.ss = subsegtraverse(m);
    subsegnumber++;
  }
# 14700 "triangle.c"
}
# 14714 "triangle.c"
void writeedges(m, b, edgelist, edgemarkerlist)
struct mesh *m;
struct behavior *b;
int **edgelist;
int **edgemarkerlist;
# 14737 "triangle.c"
{

  int *elist;
  int *emlist;
  int index;



  struct otri triangleloop, trisym;
  struct osub checkmark;
  vertex p1, p2;
  long edgenumber;
  triangle ptr;
  subseg sptr;


  if (!b->quiet) {
    fprintf(stderr, "Writing edges.\n");
  }

  if (*edgelist == (int *) ((void *)0)) {
    *edgelist = (int *) trimalloc(m->edges * 2 * sizeof(int));
  }

  if (!b->nobound && (*edgemarkerlist == (int *) ((void *)0))) {
    *edgemarkerlist = (int *) trimalloc(m->edges * sizeof(int));
  }
  elist = *edgelist;
  emlist = *edgemarkerlist;
  index = 0;
# 14780 "triangle.c"
  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  edgenumber = b->firstnumber;






  while (triangleloop.tri != (triangle *) ((void *)0)) {
    for (triangleloop.orient = 0; triangleloop.orient < 3;
         triangleloop.orient++) {
      ptr = (triangleloop).tri[(triangleloop).orient]; (trisym).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (trisym).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (trisym).orient);;
      if ((triangleloop.tri < trisym.tri) || (trisym.tri == m->dummytri)) {
        p1 = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
        p2 = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];

        elist[index++] = ((int *) (p1))[m->vertexmarkindex];
        elist[index++] = ((int *) (p2))[m->vertexmarkindex];

        if (b->nobound) {





        } else {


          if (b->usesegments) {
            sptr = (subseg) (triangleloop).tri[6 + (triangleloop).orient]; (checkmark).ssorient = (int) ((unsigned long) (sptr) & (unsigned long) 1l); (checkmark).ss = (subseg *) ((unsigned long) (sptr) & ~ (unsigned long) 3l);
            if (checkmark.ss == m->dummysub) {

              emlist[edgenumber - b->firstnumber] = 0;




            } else {

              emlist[edgenumber - b->firstnumber] = (* (int *) ((checkmark).ss + 6));




            }
          } else {

            emlist[edgenumber - b->firstnumber] = trisym.tri == m->dummytri;




          }
        }
        edgenumber++;
      }
    }
    triangleloop.tri = triangletraverse(m);
  }




}
# 14869 "triangle.c"
void writevoronoi(m, b, vpointlist, vpointattriblist, vpointmarkerlist,
                  vedgelist, vedgemarkerlist, vnormlist)
struct mesh *m;
struct behavior *b;
double **vpointlist;
double **vpointattriblist;
int **vpointmarkerlist;
int **vedgelist;
int **vedgemarkerlist;
double **vnormlist;
# 14898 "triangle.c"
{

  double *plist;
  double *palist;
  int *elist;
  double *normlist;
  int coordindex;
  int attribindex;



  struct otri triangleloop, trisym;
  vertex torg, tdest, tapex;
  double circumcenter[2];
  double xi, eta;
  double dum;
  long vnodenumber, vedgenumber;
  int p1, p2;
  int i;
  triangle ptr;


  if (!b->quiet) {
    fprintf(stderr, "Writing Voronoi vertices.\n");
  }

  if (*vpointlist == (double *) ((void *)0)) {
    *vpointlist = (double *) trimalloc(m->triangles.items * 2 * sizeof(double));
  }

  if (*vpointattriblist == (double *) ((void *)0)) {
    *vpointattriblist = (double *) trimalloc(m->triangles.items * m->nextras *
                                           sizeof(double));
  }
  *vpointmarkerlist = (int *) ((void *)0);
  plist = *vpointlist;
  palist = *vpointattriblist;
  coordindex = 0;
  attribindex = 0;
# 14951 "triangle.c"
  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  triangleloop.orient = 0;
  vnodenumber = b->firstnumber;
  while (triangleloop.tri != (triangle *) ((void *)0)) {
    torg = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
    tdest = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];
    tapex = (vertex) (triangleloop).tri[(triangleloop).orient + 3];
    findcircumcenter(m, b, torg, tdest, tapex, circumcenter, &xi, &eta, &dum);


    plist[coordindex++] = circumcenter[0];
    plist[coordindex++] = circumcenter[1];
    for (i = 2; i < 2 + m->nextras; i++) {

      palist[attribindex++] = torg[i] + xi * (tdest[i] - torg[i])
                                     + eta * (tapex[i] - torg[i]);
    }
# 14981 "triangle.c"
    * (int *) (triangleloop.tri + 6) = (int) vnodenumber;
    triangleloop.tri = triangletraverse(m);
    vnodenumber++;
  }






  if (!b->quiet) {
    fprintf(stderr, "Writing Voronoi edges.\n");
  }

  if (*vedgelist == (int *) ((void *)0)) {
    *vedgelist = (int *) trimalloc(m->edges * 2 * sizeof(int));
  }
  *vedgemarkerlist = (int *) ((void *)0);

  if (*vnormlist == (double *) ((void *)0)) {
    *vnormlist = (double *) trimalloc(m->edges * 2 * sizeof(double));
  }
  elist = *vedgelist;
  normlist = *vnormlist;
  coordindex = 0;
# 15019 "triangle.c"
  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  vedgenumber = b->firstnumber;






  while (triangleloop.tri != (triangle *) ((void *)0)) {
    for (triangleloop.orient = 0; triangleloop.orient < 3;
         triangleloop.orient++) {
      ptr = (triangleloop).tri[(triangleloop).orient]; (trisym).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (trisym).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (trisym).orient);;
      if ((triangleloop.tri < trisym.tri) || (trisym.tri == m->dummytri)) {

        p1 = * (int *) (triangleloop.tri + 6);
        if (trisym.tri == m->dummytri) {
          torg = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
          tdest = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];


          elist[coordindex] = p1;
          normlist[coordindex++] = tdest[1] - torg[1];
          elist[coordindex] = -1;
          normlist[coordindex++] = torg[0] - tdest[0];







        } else {

          p2 = * (int *) (trisym.tri + 6);


          elist[coordindex] = p1;
          normlist[coordindex++] = 0.0;
          elist[coordindex] = p2;
          normlist[coordindex++] = 0.0;



        }
        vedgenumber++;
      }
    }
    triangleloop.tri = triangletraverse(m);
  }




}






void writeneighbors(m, b, neighborlist)
struct mesh *m;
struct behavior *b;
int **neighborlist;
# 15102 "triangle.c"
{

  int *nlist;
  int index;



  struct otri triangleloop, trisym;
  long elementnumber;
  int neighbor1, neighbor2, neighbor3;
  triangle ptr;


  if (!b->quiet) {
    fprintf(stderr, "Writing neighbors.\n");
  }

  if (*neighborlist == (int *) ((void *)0)) {
    *neighborlist = (int *) trimalloc(m->triangles.items * 3 * sizeof(int));
  }
  nlist = *neighborlist;
  index = 0;
# 15137 "triangle.c"
  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  triangleloop.orient = 0;
  elementnumber = b->firstnumber;
  while (triangleloop.tri != (triangle *) ((void *)0)) {
    * (int *) (triangleloop.tri + 6) = (int) elementnumber;
    triangleloop.tri = triangletraverse(m);
    elementnumber++;
  }
  * (int *) (m->dummytri + 6) = -1;

  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  elementnumber = b->firstnumber;
  while (triangleloop.tri != (triangle *) ((void *)0)) {
    triangleloop.orient = 1;
    ptr = (triangleloop).tri[(triangleloop).orient]; (trisym).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (trisym).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (trisym).orient);;
    neighbor1 = * (int *) (trisym.tri + 6);
    triangleloop.orient = 2;
    ptr = (triangleloop).tri[(triangleloop).orient]; (trisym).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (trisym).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (trisym).orient);;
    neighbor2 = * (int *) (trisym.tri + 6);
    triangleloop.orient = 0;
    ptr = (triangleloop).tri[(triangleloop).orient]; (trisym).orient = (int) ((unsigned long) (ptr) & (unsigned long) 3l); (trisym).tri = (triangle *) ((unsigned long) (ptr) ^ (unsigned long) (trisym).orient);;
    neighbor3 = * (int *) (trisym.tri + 6);

    nlist[index++] = neighbor1;
    nlist[index++] = neighbor2;
    nlist[index++] = neighbor3;






    triangleloop.tri = triangletraverse(m);
    elementnumber++;
  }




}
# 15272 "triangle.c"
void quality_statistics(m, b)
struct mesh *m;
struct behavior *b;


{
  struct otri triangleloop;
  vertex p[3];
  double cossquaretable[8];
  double ratiotable[16];
  double dx[3], dy[3];
  double edgelength[3];
  double dotproduct;
  double cossquare;
  double triarea;
  double shortest, longest;
  double trilongest2;
  double smallestarea, biggestarea;
  double triminaltitude2;
  double minaltitude;
  double triaspect2;
  double worstaspect;
  double smallestangle, biggestangle;
  double radconst, degconst;
  int angletable[18];
  int aspecttable[16];
  int aspectindex;
  int tendegree;
  int acutebiggest;
  int i, ii, j, k;

  fprintf(stderr, "Mesh quality statistics:\n\n");
  radconst = 3.141592653589793238462643383279502884197169399375105820974944592308 / 18.0;
  degconst = 180.0 / 3.141592653589793238462643383279502884197169399375105820974944592308;
  for (i = 0; i < 8; i++) {
    cossquaretable[i] = cos(radconst * (double) (i + 1));
    cossquaretable[i] = cossquaretable[i] * cossquaretable[i];
  }
  for (i = 0; i < 18; i++) {
    angletable[i] = 0;
  }

  ratiotable[0] = 1.5; ratiotable[1] = 2.0;
  ratiotable[2] = 2.5; ratiotable[3] = 3.0;
  ratiotable[4] = 4.0; ratiotable[5] = 6.0;
  ratiotable[6] = 10.0; ratiotable[7] = 15.0;
  ratiotable[8] = 25.0; ratiotable[9] = 50.0;
  ratiotable[10] = 100.0; ratiotable[11] = 300.0;
  ratiotable[12] = 1000.0; ratiotable[13] = 10000.0;
  ratiotable[14] = 100000.0; ratiotable[15] = 0.0;
  for (i = 0; i < 16; i++) {
    aspecttable[i] = 0;
  }

  worstaspect = 0.0;
  minaltitude = m->xmax - m->xmin + m->ymax - m->ymin;
  minaltitude = minaltitude * minaltitude;
  shortest = minaltitude;
  longest = 0.0;
  smallestarea = minaltitude;
  biggestarea = 0.0;
  worstaspect = 0.0;
  smallestangle = 0.0;
  biggestangle = 2.0;
  acutebiggest = 1;

  traversalinit(&m->triangles);
  triangleloop.tri = triangletraverse(m);
  triangleloop.orient = 0;
  while (triangleloop.tri != (triangle *) ((void *)0)) {
    p[0] = (vertex) (triangleloop).tri[plus1mod3[(triangleloop).orient] + 3];
    p[1] = (vertex) (triangleloop).tri[minus1mod3[(triangleloop).orient] + 3];
    p[2] = (vertex) (triangleloop).tri[(triangleloop).orient + 3];
    trilongest2 = 0.0;

    for (i = 0; i < 3; i++) {
      j = plus1mod3[i];
      k = minus1mod3[i];
      dx[i] = p[j][0] - p[k][0];
      dy[i] = p[j][1] - p[k][1];
      edgelength[i] = dx[i] * dx[i] + dy[i] * dy[i];
      if (edgelength[i] > trilongest2) {
        trilongest2 = edgelength[i];
      }
      if (edgelength[i] > longest) {
        longest = edgelength[i];
      }
      if (edgelength[i] < shortest) {
        shortest = edgelength[i];
      }
    }

    triarea = counterclockwise(m, b, p[0], p[1], p[2]);
    if (triarea < smallestarea) {
      smallestarea = triarea;
    }
    if (triarea > biggestarea) {
      biggestarea = triarea;
    }
    triminaltitude2 = triarea * triarea / trilongest2;
    if (triminaltitude2 < minaltitude) {
      minaltitude = triminaltitude2;
    }
    triaspect2 = trilongest2 / triminaltitude2;
    if (triaspect2 > worstaspect) {
      worstaspect = triaspect2;
    }
    aspectindex = 0;
    while ((triaspect2 > ratiotable[aspectindex] * ratiotable[aspectindex])
           && (aspectindex < 15)) {
      aspectindex++;
    }
    aspecttable[aspectindex]++;

    for (i = 0; i < 3; i++) {
      j = plus1mod3[i];
      k = minus1mod3[i];
      dotproduct = dx[j] * dx[k] + dy[j] * dy[k];
      cossquare = dotproduct * dotproduct / (edgelength[j] * edgelength[k]);
      tendegree = 8;
      for (ii = 7; ii >= 0; ii--) {
        if (cossquare > cossquaretable[ii]) {
          tendegree = ii;
        }
      }
      if (dotproduct <= 0.0) {
        angletable[tendegree]++;
        if (cossquare > smallestangle) {
          smallestangle = cossquare;
        }
        if (acutebiggest && (cossquare < biggestangle)) {
          biggestangle = cossquare;
        }
      } else {
        angletable[17 - tendegree]++;
        if (acutebiggest || (cossquare > biggestangle)) {
          biggestangle = cossquare;
          acutebiggest = 0;
        }
      }
    }
    triangleloop.tri = triangletraverse(m);
  }

  shortest = sqrt(shortest);
  longest = sqrt(longest);
  minaltitude = sqrt(minaltitude);
  worstaspect = sqrt(worstaspect);
  smallestarea *= 0.5;
  biggestarea *= 0.5;
  if (smallestangle >= 1.0) {
    smallestangle = 0.0;
  } else {
    smallestangle = degconst * acos(sqrt(smallestangle));
  }
  if (biggestangle >= 1.0) {
    biggestangle = 180.0;
  } else {
    if (acutebiggest) {
      biggestangle = degconst * acos(sqrt(biggestangle));
    } else {
      biggestangle = 180.0 - degconst * acos(sqrt(biggestangle));
    }
  }

  fprintf(stderr, "  Smallest area: %16.5g   |  Largest area: %16.5g\n",
         smallestarea, biggestarea);
  fprintf(stderr, "  Shortest edge: %16.5g   |  Longest edge: %16.5g\n",
         shortest, longest);
  fprintf(stderr, "  Shortest altitude: %12.5g   |  Largest aspect ratio: %8.5g\n\n",
         minaltitude, worstaspect);

  fprintf(stderr, "  Triangle aspect ratio histogram:\n");
  fprintf(stderr, "  1.1547 - %-6.6g    :  %8d    | %6.6g - %-6.6g     :  %8d\n",
         ratiotable[0], aspecttable[0], ratiotable[7], ratiotable[8],
         aspecttable[8]);
  for (i = 1; i < 7; i++) {
    fprintf(stderr, "  %6.6g - %-6.6g    :  %8d    | %6.6g - %-6.6g     :  %8d\n",
           ratiotable[i - 1], ratiotable[i], aspecttable[i],
           ratiotable[i + 7], ratiotable[i + 8], aspecttable[i + 8]);
  }
  fprintf(stderr, "  %6.6g - %-6.6g    :  %8d    | %6.6g -            :  %8d\n",
         ratiotable[6], ratiotable[7], aspecttable[7], ratiotable[14],
         aspecttable[15]);
  fprintf(stderr, "  (Aspect ratio is longest edge divided by shortest altitude)\n\n");

  fprintf(stderr, "  Smallest angle: %15.5g   |  Largest angle: %15.5g\n\n",
         smallestangle, biggestangle);

  fprintf(stderr, "  Angle histogram:\n");
  for (i = 0; i < 9; i++) {
    fprintf(stderr, "    %3d - %3d degrees:  %8d    |    %3d - %3d degrees:  %8d\n",
           i * 10, i * 10 + 10, angletable[i],
           i * 10 + 90, i * 10 + 100, angletable[i + 9]);
  }
  fprintf(stderr, "\n");
}
# 15479 "triangle.c"
void statistics(m, b)
struct mesh *m;
struct behavior *b;


{
  fprintf(stderr, "\nStatistics:\n\n");
  fprintf(stderr, "  Input vertices: %d\n", m->invertices);
  if (b->refine) {
    fprintf(stderr, "  Input triangles: %d\n", m->inelements);
  }
  if (b->poly) {
    fprintf(stderr, "  Input segments: %d\n", m->insegments);
    if (!b->refine) {
      fprintf(stderr, "  Input holes: %d\n", m->holes);
    }
  }

  fprintf(stderr, "\n  Mesh vertices: %ld\n", m->vertices.items - m->undeads);
  fprintf(stderr, "  Mesh triangles: %ld\n", m->triangles.items);
  fprintf(stderr, "  Mesh edges: %ld\n", m->edges);
  fprintf(stderr, "  Mesh exterior boundary edges: %ld\n", m->hullsize);
  if (b->poly || b->refine) {
    fprintf(stderr, "  Mesh interior boundary edges: %ld\n",
           m->subsegs.items - m->hullsize);
    fprintf(stderr, "  Mesh subsegments (constrained edges): %ld\n",
           m->subsegs.items);
  }
  fprintf(stderr, "\n");

  if (b->verbose) {
    quality_statistics(m, b);
    fprintf(stderr, "Memory allocation statistics:\n\n");
    fprintf(stderr, "  Maximum number of vertices: %ld\n", m->vertices.maxitems);
    fprintf(stderr, "  Maximum number of triangles: %ld\n", m->triangles.maxitems);
    if (m->subsegs.maxitems > 0) {
      fprintf(stderr, "  Maximum number of subsegments: %ld\n", m->subsegs.maxitems);
    }
    if (m->viri.maxitems > 0) {
      fprintf(stderr, "  Maximum number of viri: %ld\n", m->viri.maxitems);
    }
    if (m->badsubsegs.maxitems > 0) {
      fprintf(stderr, "  Maximum number of encroached subsegments: %ld\n",
             m->badsubsegs.maxitems);
    }
    if (m->badtriangles.maxitems > 0) {
      fprintf(stderr, "  Maximum number of bad triangles: %ld\n",
             m->badtriangles.maxitems);
    }
    if (m->flipstackers.maxitems > 0) {
      fprintf(stderr, "  Maximum number of stacked triangle flips: %ld\n",
             m->flipstackers.maxitems);
    }
    if (m->splaynodes.maxitems > 0) {
      fprintf(stderr, "  Maximum number of splay tree nodes: %ld\n",
             m->splaynodes.maxitems);
    }
    fprintf(stderr, "  Approximate heap memory use (bytes): %ld\n\n",
           m->vertices.maxitems * m->vertices.itembytes +
           m->triangles.maxitems * m->triangles.itembytes +
           m->subsegs.maxitems * m->subsegs.itembytes +
           m->viri.maxitems * m->viri.itembytes +
           m->badsubsegs.maxitems * m->badsubsegs.itembytes +
           m->badtriangles.maxitems * m->badtriangles.itembytes +
           m->flipstackers.maxitems * m->flipstackers.itembytes +
           m->splaynodes.maxitems * m->splaynodes.itembytes);

    fprintf(stderr, "Algorithmic statistics:\n\n");
    if (!b->weighted) {
      fprintf(stderr, "  Number of incircle tests: %ld\n", m->incirclecount);
    } else {
      fprintf(stderr, "  Number of 3D orientation tests: %ld\n", m->orient3dcount);
    }
    fprintf(stderr, "  Number of 2D orientation tests: %ld\n", m->counterclockcount);
    if (m->hyperbolacount > 0) {
      fprintf(stderr, "  Number of right-of-hyperbola tests: %ld\n",
             m->hyperbolacount);
    }
    if (m->circletopcount > 0) {
      fprintf(stderr, "  Number of circle top computations: %ld\n",
             m->circletopcount);
    }
    if (m->circumcentercount > 0) {
      fprintf(stderr, "  Number of triangle circumcenter computations: %ld\n",
             m->circumcentercount);
    }
    fprintf(stderr, "\n");
  }
}
# 15600 "triangle.c"
void triangulate(triswitches, in, out, vorout)
char *triswitches;
struct triangulateio *in;
struct triangulateio *out;
struct triangulateio *vorout;
# 15619 "triangle.c"
{
  struct mesh m;
  struct behavior b;
  double *holearray;
  double *regionarray;






  struct timeval tv0, tv1, tv2, tv3, tv4, tv5, tv6;
  struct timezone tz;



  gettimeofday(&tv0, &tz);


  triangleinit(&m);

  parsecommandline(1, &triswitches, &b);



  m.steinerleft = b.steiner;


  transfernodes(&m, &b, in->pointlist, in->pointattributelist,
                in->pointmarkerlist, in->numberofpoints,
                in->numberofpointattributes);





  if (!b.quiet) {
    gettimeofday(&tv1, &tz);
  }





  if (b.refine) {


    m.hullsize = reconstruct(&m, &b, in->trianglelist,
                             in->triangleattributelist, in->trianglearealist,
                             in->numberoftriangles, in->numberofcorners,
                             in->numberoftriangleattributes,
                             in->segmentlist, in->segmentmarkerlist,
                             in->numberofsegments);




  } else {
    m.hullsize = delaunay(&m, &b);
  }



  if (!b.quiet) {
    gettimeofday(&tv2, &tz);
    if (b.refine) {
      fprintf(stderr, "Mesh reconstruction");
    } else {
      fprintf(stderr, "Delaunay");
    }
    fprintf(stderr, " milliseconds:  %ld\n", 1000l * (tv2.tv_sec - tv1.tv_sec) +
           (tv2.tv_usec - tv1.tv_usec) / 1000l);
  }




  m.infvertex1 = (vertex) ((void *)0);
  m.infvertex2 = (vertex) ((void *)0);
  m.infvertex3 = (vertex) ((void *)0);

  if (b.usesegments) {
    m.checksegments = 1;
    if (!b.refine) {


      formskeleton(&m, &b, in->segmentlist,
                   in->segmentmarkerlist, in->numberofsegments);



    }
  }


  if (!b.quiet) {
    gettimeofday(&tv3, &tz);
    if (b.usesegments && !b.refine) {
      fprintf(stderr, "Segment milliseconds:  %ld\n",
             1000l * (tv3.tv_sec - tv2.tv_sec) +
             (tv3.tv_usec - tv2.tv_usec) / 1000l);
    }
  }


  if (b.poly && (m.triangles.items > 0)) {

    holearray = in->holelist;
    m.holes = in->numberofholes;
    regionarray = in->regionlist;
    m.regions = in->numberofregions;




    if (!b.refine) {

      carveholes(&m, &b, holearray, m.holes, regionarray, m.regions);
    }
  } else {



    m.holes = 0;
    m.regions = 0;
  }


  if (!b.quiet) {
    gettimeofday(&tv4, &tz);
    if (b.poly && !b.refine) {
      fprintf(stderr, "Hole milliseconds:  %ld\n", 1000l * (tv4.tv_sec - tv3.tv_sec) +
             (tv4.tv_usec - tv3.tv_usec) / 1000l);
    }
  }



  if (b.quality && (m.triangles.items > 0)) {
    enforcequality(&m, &b);
  }



  if (!b.quiet) {
    gettimeofday(&tv5, &tz);

    if (b.quality) {
      fprintf(stderr, "Quality milliseconds:  %ld\n",
             1000l * (tv5.tv_sec - tv4.tv_sec) +
             (tv5.tv_usec - tv4.tv_usec) / 1000l);
    }

  }



  m.edges = (3l * m.triangles.items + m.hullsize) / 2l;

  if (b.order > 1) {
    highorder(&m, &b);
  }
  if (!b.quiet) {
    fprintf(stderr, "\n");
  }


  out->numberofpoints = m.vertices.items;
  out->numberofpointattributes = m.nextras;
  out->numberoftriangles = m.triangles.items;
  out->numberofcorners = (b.order + 1) * (b.order + 2) / 2;
  out->numberoftriangleattributes = m.eextras;
  out->numberofedges = m.edges;
  if (b.usesegments) {
    out->numberofsegments = m.subsegs.items;
  } else {
    out->numberofsegments = m.hullsize;
  }
  if (vorout != (struct triangulateio *) ((void *)0)) {
    vorout->numberofpoints = m.triangles.items;
    vorout->numberofpointattributes = m.nextras;
    vorout->numberofedges = m.edges;
  }



  if (b.nonodewritten || (b.noiterationnum && m.readnodefile)) {
    if (!b.quiet) {

      fprintf(stderr, "NOT writing vertices.\n");



    }
    numbernodes(&m, &b);
  } else {


    writenodes(&m, &b, &out->pointlist, &out->pointattributelist,
               &out->pointmarkerlist);



  }
  if (b.noelewritten) {
    if (!b.quiet) {

      fprintf(stderr, "NOT writing triangles.\n");



    }
  } else {

    writeelements(&m, &b, &out->trianglelist, &out->triangleattributelist);



  }


  if (b.poly || b.convex) {

    if (b.nopolywritten || b.noiterationnum) {
      if (!b.quiet) {

        fprintf(stderr, "NOT writing segments.\n");



      }
    } else {

      writepoly(&m, &b, &out->segmentlist, &out->segmentmarkerlist);
      out->numberofholes = m.holes;
      out->numberofregions = m.regions;
      if (b.poly) {
        out->holelist = in->holelist;
        out->regionlist = in->regionlist;
      } else {
        out->holelist = (double *) ((void *)0);
        out->regionlist = (double *) ((void *)0);
      }




    }
  }
# 15881 "triangle.c"
  if (b.edgesout) {

    writeedges(&m, &b, &out->edgelist, &out->edgemarkerlist);



  }
  if (b.voronoi) {

    writevoronoi(&m, &b, &vorout->pointlist, &vorout->pointattributelist,
                 &vorout->pointmarkerlist, &vorout->edgelist,
                 &vorout->edgemarkerlist, &vorout->normlist);



  }
  if (b.neighbors) {

    writeneighbors(&m, &b, &out->neighborlist);



  }

  if (!b.quiet) {

    gettimeofday(&tv6, &tz);
    fprintf(stderr, "\nOutput milliseconds:  %ld\n",
           1000l * (tv6.tv_sec - tv5.tv_sec) +
           (tv6.tv_usec - tv5.tv_usec) / 1000l);
    fprintf(stderr, "Total running milliseconds:  %ld\n",
           1000l * (tv6.tv_sec - tv0.tv_sec) +
           (tv6.tv_usec - tv0.tv_usec) / 1000l);


    statistics(&m, &b);
  }


  if (b.docheck) {
    checkmesh(&m, &b);
    checkdelaunay(&m, &b);
  }


  triangledeinit(&m, &b);



}
