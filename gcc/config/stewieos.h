/* Useful if you wish to make target-specific gcc changes. */
#undef TARGET_STEWIEOS
#define TARGET_STEWIEOS 1
 
/* Default arguments you want when running your
   i686-myos-gcc/x86_64-myos-gcc toolchain */
#define LIB_SPEC "-lc" /* link against C standard library */
 
/* Don't automatically add extern "C" { } around header files. */
#undef  NO_IMPLICIT_EXTERN_C
#define NO_IMPLICIT_EXTERN_C 1
 
/* Additional predefined macros. */
#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS()      \
  do {                                \
    builtin_define ("__STEWIEOS__");  \
    builtin_define ("__STDC_NO_COMPLEX__"); \
    builtin_define ("__unix__");      \
    builtin_assert ("system=myos");   \
    builtin_assert ("system=unix");   \
    builtin_assert ("system=posix");   \
  } while(0);