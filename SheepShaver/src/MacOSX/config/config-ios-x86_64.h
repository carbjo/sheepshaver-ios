/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef CONFIG_H
#define CONFIG_H


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if using a PowerPC CPU emulator. */
#define EMULATED_PPC 1

/* Define to enable dyngen engine */
#define ENABLE_DYNGEN 0

/* Define is using ESD. */
/* #undef ENABLE_ESD */

/* Define if using Linux fbdev extension. */
/* #undef ENABLE_FBDEV_DGA */

/* Define if using GTK. */
/* #undef ENABLE_GTK */

/* Define if using "mon". */
/* #undef ENABLE_MON */

/* Define if your system supports TUN/TAP devices. */
/* #undef ENABLE_TUNTAP */

/* Define if using video enabled on SEGV signals. */
/* #undef ENABLE_VOSF */

/* Define if using XFree86 DGA extension. */
/* #undef ENABLE_XF86_DGA */

/* Define if using XFree86 DGA extension. */
/* #undef ENABLE_XF86_VIDMODE */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <AvailabilityMacros.h> header file. */
#define HAVE_AVAILABILITYMACROS_H 1

/* Define to 1 if you have the <byteswap.h> header file. */
/* #undef HAVE_BYTESWAP_H */

/* Define to 1 if you have the `ceil' function. */
#define HAVE_CEIL 1

/* Define to 1 if you have the `ceilf' function. */
#define HAVE_CEILF 1

/* Define to 1 if you have the `cfmakeraw' function. */
#define HAVE_CFMAKERAW 1

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the `clock_nanosleep' function. */
/* #undef HAVE_CLOCK_NANOSLEEP */

/* Define if you have /dev/ptmx. */
/* #undef HAVE_DEV_PTMX */

/* Define if you have /dev/ptc. */
/* #undef HAVE_DEV_PTS_AND_PTC */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `exp2' function. */
#define HAVE_EXP2 1

/* Define to 1 if you have the `exp2f' function. */
#define HAVE_EXP2F 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <fenv.h> header file. */
#define HAVE_FENV_H 1

/* Define to 1 if you have the `floor' function. */
#define HAVE_FLOOR 1

/* Define to 1 if you have the `floorf' function. */
#define HAVE_FLOORF 1

/* Define if framework AppKit is available. */
#define HAVE_FRAMEWORK_APPKIT 0

/* Define if framework AudioToolbox is available. */
#define HAVE_FRAMEWORK_AUDIOTOOLBOX 1

/* Define if framework AudioUnit is available. */
#define HAVE_FRAMEWORK_AUDIOUNIT 1

/* Define if framework Carbon is available. */
#define HAVE_FRAMEWORK_CARBON 0

/* Define if framework CoreAudio is available. */
#define HAVE_FRAMEWORK_COREAUDIO 1

/* Define if framework CoreFoundation is available. */
#define HAVE_FRAMEWORK_COREFOUNDATION 1

/* Define if framework IOKit is available. */
#define HAVE_FRAMEWORK_IOKIT 1

/* Define if framework SDL is available. */
/* #undef HAVE_FRAMEWORK_SDL */

/* Define to 1 if you have the <history.h> header file. */
/* #undef HAVE_HISTORY_H */

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Define to 1 if you have the <IOKit/storage/IOBlockStorageDevice.h> header
   file. */
#define HAVE_IOKIT_STORAGE_IOBLOCKSTORAGEDEVICE_H 1

/* Define to 1 if you have the `curses' library (-lcurses). */
/* #undef HAVE_LIBCURSES */

/* Define to 1 if you have the `c_r' library (-lc_r). */
/* #undef HAVE_LIBC_R */

/* Define to 1 if you have the `Hcurses' library (-lHcurses). */
/* #undef HAVE_LIBHCURSES */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `ncurses' library (-lncurses). */
/* #undef HAVE_LIBNCURSES */

/* Define to 1 if you have the `posix4' library (-lposix4). */
/* #undef HAVE_LIBPOSIX4 */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the `PTL' library (-lPTL). */
/* #undef HAVE_LIBPTL */

/* Define to 1 if you have the `readline' library (-lreadline). */
/* #undef HAVE_LIBREADLINE */

/* Define to 1 if you have the `termcap' library (-ltermcap). */
/* #undef HAVE_LIBTERMCAP */

/* Define to 1 if you have the `terminfo' library (-lterminfo). */
/* #undef HAVE_LIBTERMINFO */

/* Define to 1 if you have the `termlib' library (-ltermlib). */
/* #undef HAVE_LIBTERMLIB */

/* Define to 1 if you have the `vhd' library (-lvhd). */
/* #undef HAVE_LIBVHD */

/* Define if there is a linker script to relocate the executable above
   0x70000000. */
#define HAVE_LINKER_SCRIPT 1

/* Define to 1 if you have the <linux/if.h> header file. */
/* #undef HAVE_LINUX_IF_H */

/* Define to 1 if you have the <linux/if_tun.h> header file. */
/* #undef HAVE_LINUX_IF_TUN_H */

/* Define to 1 if you have the `log2' function. */
#define HAVE_LOG2 1

/* Define to 1 if you have the `log2f' function. */
#define HAVE_LOG2F 1

/* Define to 1 if you have the <login.h> header file. */
/* #undef HAVE_LOGIN_H */

/* Define if your system supports Mach exceptions. */
#define HAVE_MACH_EXCEPTIONS 1

/* Define to 1 if you have the <mach/mach_init.h> header file. */
#define HAVE_MACH_MACH_INIT_H 1

/* Define to 1 if you have the `mach_task_self' function. */
#define HAVE_MACH_TASK_SELF 1

/* Define if your system has a working vm_allocate()-based memory allocator.
   */
#define HAVE_MACH_VM 1

/* Define to 1 if you have the <mach/vm_map.h> header file. */
#define HAVE_MACH_VM_MAP_H 1

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define if <sys/mman.h> defines MAP_ANON and mmap()'ing with MAP_ANON works.
   */
/* #undef HAVE_MMAP_ANON */

/* Define if <sys/mman.h> defines MAP_ANONYMOUS and mmap()'ing with
   MAP_ANONYMOUS works. */
/* #undef HAVE_MMAP_ANONYMOUS */

/* Define if your system has a working mmap()-based memory allocator. */
/* #undef HAVE_MMAP_VM */

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 if you have the `munmap' function. */
#define HAVE_MUNMAP 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the <net/if_tun.h> header file. */
/* #undef HAVE_NET_IF_TUN_H */

/* Define if you are on NEWS-OS (additions from openssh-3.2.2p1, for
   sshpty.c). */
/* #undef HAVE_NEWS4 */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define if pthreads are available. */
#define HAVE_PTHREADS 1

/* Define to 1 if you have the `pthread_cancel' function. */
#define HAVE_PTHREAD_CANCEL 1

/* Define to 1 if you have the `pthread_cond_init' function. */
#define HAVE_PTHREAD_COND_INIT 1

/* Define to 1 if you have the `pthread_mutexattr_setprotocol' function. */
#define HAVE_PTHREAD_MUTEXATTR_SETPROTOCOL 1

/* Define to 1 if you have the `pthread_mutexattr_setpshared' function. */
#define HAVE_PTHREAD_MUTEXATTR_SETPSHARED 1

/* Define to 1 if you have the `pthread_mutexattr_settype' function. */
#define HAVE_PTHREAD_MUTEXATTR_SETTYPE 1

/* Define to 1 if you have the `pthread_testcancel' function. */
#define HAVE_PTHREAD_TESTCANCEL 1

/* Define to 1 if you have the <pty.h> header file. */
/* #undef HAVE_PTY_H */

/* Define to 1 if you have the <readline.h> header file. */
/* #undef HAVE_READLINE_H */

/* Define to 1 if you have the <readline/history.h> header file. */
/* #undef HAVE_READLINE_HISTORY_H */

/* Define to 1 if you have the <readline/readline.h> header file. */
/* #undef HAVE_READLINE_READLINE_H */

/* Define to 1 if you have the `round' function. */
#define HAVE_ROUND 1

/* Define to 1 if you have the `roundf' function. */
#define HAVE_ROUNDF 1

/* Define to 1 if you have the `sem_init' function. */
#define HAVE_SEM_INIT 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define if we know a hack to replace siginfo_t->si_addr member. */
/* #undef HAVE_SIGCONTEXT_SUBTERFUGE */

/* Define if your system support extended signals. */
/* #undef HAVE_SIGINFO_T */

/* Define to 1 if you have the `signal' function. */
#define HAVE_SIGNAL 1

/* Define if sa_restorer is available in struct sigaction. */
/* #undef HAVE_SIGNAL_SA_RESTORER */

/* Define if we can ignore the fault (instruction skipping in SIGSEGV
   handler). */
#define HAVE_SIGSEGV_SKIP_INSTRUCTION 1

/* Define if slirp library is supported */
#define HAVE_SLIRP 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
/* #undef HAVE_STDLIB_H */

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
/* #undef HAVE_STRING_H */

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/bsdtty.h> header file. */
/* #undef HAVE_SYS_BSDTTY_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
#define HAVE_SYS_FILIO_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
/* #undef HAVE_SYS_TYPES_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `task_self' function. */
/* #undef HAVE_TASK_SELF */

/* Define to 1 if you have the `trunc' function. */
#define HAVE_TRUNC 1

/* Define to 1 if you have the `truncf' function. */
#define HAVE_TRUNCF 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <util.h> header file. */
#define HAVE_UTIL_H 1

/* Define to 1 if you have the `vhangup' function. */
/* #undef HAVE_VHANGUP */

/* Define to 1 if you have the `vm_allocate' function. */
#define HAVE_VM_ALLOCATE 1

/* Define to 1 if you have the `vm_deallocate' function. */
#define HAVE_VM_DEALLOCATE 1

/* Define to 1 if you have the `vm_protect' function. */
#define HAVE_VM_PROTECT 1

/* Define if your system supports Windows exceptions. */
/* #undef HAVE_WIN32_EXCEPTIONS */

/* Define to 1 if you have the `_getpty' function. */
/* #undef HAVE__GETPTY */

/* Define to the floating point format of the host machine. */
#define HOST_FLOAT_FORMAT IEEE_FLOAT_FORMAT

/* Define to 1 if the host machine stores floating point numbers in memory
   with the word containing the sign bit at the lowest address, or to 0 if it
   does it the other way around. This macro should not be defined if the
   ordering is the same as for multi-word integers. */
/* #undef HOST_FLOAT_WORDS_BIG_ENDIAN */

/* Define constant offset for Mac address translation */
#define NATMEM_OFFSET 0x400000000000

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "Christian.Bauer@uni-mainz.de"

/* Define to the full name of this package. */
#define PACKAGE_NAME "SheepShaver"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "SheepShaver 2.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "SheepShaver"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.5"

/* Define if the __PAGEZERO Mach-O Low Memory Globals hack works on this
   system. */
#define PAGEZERO_HACK 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define if your system requires sigactions to be reinstalled. */
/* #undef SIGACTION_NEED_REINSTALL */

/* Define if your system requires signals to be reinstalled. */
/* #undef SIGNAL_NEED_REINSTALL */

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define if BSD-style non-blocking I/O is to be used */
/* #undef USE_FIONBIO */

/* Define to enble SDL support. */
#define USE_SDL 1

/* Define to enable SDL audio support */
#define USE_SDL_AUDIO 1

/* Define to enable SDL video graphics support. */
#define USE_SDL_VIDEO 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `off_t' if <sys/types.h> does not define. */
#define loff_t off_t

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to 'int' if <sys/types.h> doesn't define. */
/* #undef socklen_t */

#define USE_JIT 1

#endif /* CONFIG_H */

