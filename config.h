/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* GC description */
/* #undef DEFAULT_GC_NAME */

/* String of disabled features */
#define DISABLED_FEATURES "debug,aot,soft_debug"

/* Disable AOT Compiler */
#define DISABLE_AOT 1

/* Disable support for multiple appdomains. */
/* #undef DISABLE_APPDOMAINS */

/* Disable assembly remapping. */
/* #undef DISABLE_ASSEMBLY_REMAPPING */

/* Disable agent attach support */
/* #undef DISABLE_ATTACH */

/* Disable COM support */
/* #undef DISABLE_COM */

/* Disable runtime debugging support */
#define DISABLE_DEBUG 1

/* Disable System.Decimal support */
/* #undef DISABLE_DECIMAL */

/* Disables building in the full table of WAPI messages */
/* #undef DISABLE_FULL_MESSAGES */

/* Disable generics support */
/* #undef DISABLE_GENERICS */

/* ... */
/* #undef DISABLE_HW_TRAPS */

/* Icall tables disabled */
/* #undef DISABLE_ICALL_TABLES */

/* Disable the JIT, only full-aot mode will be supported by the runtime. */
/* #undef DISABLE_JIT */

/* Disable support for huge assemblies */
/* #undef DISABLE_LARGE_CODE */

/* Disable support debug logging */
/* #undef DISABLE_LOGGING */

/* Disable String normalization support. */
/* #undef DISABLE_NORMALIZATION */

/* Disable Performance Counters. */
/* #undef DISABLE_PERFCOUNTERS */

/* Disable P/Invoke support */
/* #undef DISABLE_PINVOKE */

/* Disables the IO portability layer */
/* #undef DISABLE_PORTABILITY */

/* Disable default profiler support */
/* #undef DISABLE_PROFILER */

/* Disable reflection emit support */
/* #undef DISABLE_REFLECTION_EMIT */

/* Disable assembly saving support in reflection emit */
/* #undef DISABLE_REFLECTION_EMIT_SAVE */

/* Disable remoting support (This disables type proxies and make com
   non-functional) */
/* #undef DISABLE_REMOTING */

/* Disable CAS/CoreCLR security */
/* #undef DISABLE_SECURITY */

/* Disable major=copying support in SGEN. */
/* #undef DISABLE_SGEN_MAJOR_COPYING */

/* Disable major=marksweep-fixed support in SGEN. */
/* #undef DISABLE_SGEN_MAJOR_MARKSWEEP_FIXED */

/* Disable major=marksweep-fixed-par support in SGEN. */
/* #undef DISABLE_SGEN_MAJOR_MARKSWEEP_FIXED_PAR */

/* Disable major=marksweep-par support in SGEN. */
/* #undef DISABLE_SGEN_MAJOR_MARKSWEEP_PAR */

/* Disable wbarrier=remset support in SGEN. */
/* #undef DISABLE_SGEN_REMSET */

/* Disable Shadow Copy for AppDomains */
/* #undef DISABLE_SHADOW_COPY */

/* Disable shared perfcounters. */
/* #undef DISABLE_SHARED_PERFCOUNTERS */

/* Disable SIMD intrinsics related optimizations. */
/* #undef DISABLE_SIMD */

/* Disable sockets support */
/* #undef DISABLE_SOCKETS */

/* Disable Soft Debugger Agent. */
#define DISABLE_SOFT_DEBUG 1

/* Disable advanced SSA JIT optimizations */
/* #undef DISABLE_SSA */

/* Disables the verifier */
/* #undef DISABLE_VERIFIER */

/* Enable checked build */
/* #undef ENABLE_CHECKED_BUILD */

/* Enable GC checked build */
/* #undef ENABLE_CHECKED_BUILD_GC */

/* Enable metadata checked build */
/* #undef ENABLE_CHECKED_BUILD_METADATA */

/* Enable thread checked build */
/* #undef ENABLE_CHECKED_BUILD_THREAD */

/* Enable DTrace probes */
/* #undef ENABLE_DTRACE */

/* Extension module enabled */
/* #undef ENABLE_EXTENSION_MODULE */

/* Icall export enabled */
/* #undef ENABLE_ICALL_EXPORT */

/* Icall symbol map enabled */
/* #undef ENABLE_ICALL_SYMBOL_MAP */

/* Enable the LLVM back end */
/* #undef ENABLE_LLVM */

/* Runtime support code for llvm enabled */
/* #undef ENABLE_LLVM_RUNTIME */

/* Have GLIBC_BEFORE_2_3_4_SCHED_SETAFFINITY */
/* #undef GLIBC_BEFORE_2_3_4_SCHED_SETAFFINITY */

/* Define to 1 if you have the `accept4' function. */
#define HAVE_ACCEPT4 1

/* Has the 'aintl' function */
/* #undef HAVE_AINTL */

/* Define to 1 if you have the <alloca.h> header file. */
#define HAVE_ALLOCA_H 1

/* ARM v5 */
/* #undef HAVE_ARMV5 */

/* ARM v6 */
/* #undef HAVE_ARMV6 */

/* ARM v7 */
/* #undef HAVE_ARMV7 */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Supports C99 array initialization */
#define HAVE_ARRAY_ELEM_INIT 1

/* Define to 1 if you have the <asm/sigcontext.h> header file. */
#define HAVE_ASM_SIGCONTEXT_H 1

/* Define to 1 if you have the <attr/xattr.h> header file. */
/* #undef HAVE_ATTR_XATTR_H */

/* Define to 1 if you have the `backtrace_symbols' function. */
/* #undef HAVE_BACKTRACE_SYMBOLS */

/* Define to 1 if the system has the type `blkcnt_t'. */
#define HAVE_BLKCNT_T 1

/* Define to 1 if the system has the type `blksize_t'. */
#define HAVE_BLKSIZE_T 1

/* BoringTls is supported */
/* #undef HAVE_BTLS */

/* Define to 1 if you have the <checklist.h> header file. */
/* #undef HAVE_CHECKLIST_H */

/* Use classic Windows API support */
#define HAVE_CLASSIC_WINAPI_SUPPORT 1

/* Define to 1 if you have the `clock_nanosleep' function. */
#define HAVE_CLOCK_NANOSLEEP 1

/* Define to 1 if you have the <CommonCrypto/CommonDigest.h> header file. */
/* #undef HAVE_COMMONCRYPTO_COMMONDIGEST_H */

/* Define to 1 if you have the <complex.h> header file. */
#define HAVE_COMPLEX_H 1

/* Defaults to concurrent GC */
/* #undef HAVE_CONC_GC_AS_DEFAULT */

/* Define to 1 if you have the `confstr' function. */
/* #undef HAVE_CONFSTR */

/* Have /dev/random */
#define HAVE_CRYPT_RNG 1

/* Define to 1 if you have the <curses.h> header file. */
#define HAVE_CURSES_H 1

/* Define to 1 if you have the declaration of `InterlockedAdd', and to 0 if
   you don't. */
/* #undef HAVE_DECL_INTERLOCKEDADD */

/* Define to 1 if you have the declaration of `InterlockedAdd64', and to 0 if
   you don't. */
/* #undef HAVE_DECL_INTERLOCKEDADD64 */

/* Define to 1 if you have the declaration of `InterlockedCompareExchange64',
   and to 0 if you don't. */
/* #undef HAVE_DECL_INTERLOCKEDCOMPAREEXCHANGE64 */

/* Define to 1 if you have the declaration of `InterlockedDecrement64', and to
   0 if you don't. */
/* #undef HAVE_DECL_INTERLOCKEDDECREMENT64 */

/* Define to 1 if you have the declaration of `InterlockedExchange64', and to
   0 if you don't. */
/* #undef HAVE_DECL_INTERLOCKEDEXCHANGE64 */

/* Define to 1 if you have the declaration of `InterlockedIncrement64', and to
   0 if you don't. */
/* #undef HAVE_DECL_INTERLOCKEDINCREMENT64 */

/* Define to 1 if you have the declaration of `__readfsdword', and to 0 if you
   don't. */
/* #undef HAVE_DECL___READFSDWORD */

/* Support for the deprecated attribute */
/* #undef HAVE_DEPRECATED */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dladdr' function. */
#define HAVE_DLADDR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dl_iterate_phdr' function. */
#define HAVE_DL_ITERATE_PHDR 1

/* dlopen-based dynamic loader available */
#define HAVE_DL_LOADER 1

/* Define to 1 if you have the <elf.h> header file. */
#define HAVE_ELF_H 1

/* Define to 1 if you have the `endgrent' function. */
/* #undef HAVE_ENDGRENT */

/* Define to 1 if you have the `endpwent' function. */
#define HAVE_ENDPWENT 1

/* Define to 1 if you have the `endusershell' function. */
#define HAVE_ENDUSERSHELL 1

/* epoll supported */
#define HAVE_EPOLL 1

/* Define to 1 if you have the `epoll_ctl' function. */
#define HAVE_EPOLL_CTL 1

/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef HAVE_EXECINFO_H */

/* Define to 1 if you have the `execv' function. */
#define HAVE_EXECV 1

/* Define to 1 if you have the `execve' function. */
#define HAVE_EXECVE 1

/* Define to 1 if you have the `execvp' function. */
#define HAVE_EXECVP 1

/* Define to 1 if you have the `fgetgrent' function. */
/* #undef HAVE_FGETGRENT */

/* Define to 1 if you have the `fgetpwent' function. */
/* #undef HAVE_FGETPWENT */

/* Define to 1 if you have the `finite' function. */
#define HAVE_FINITE 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the <fstab.h> header file. */
/* #undef HAVE_FSTAB_H */

/* Define to 1 if you have the `fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if you have the `fstatfs' function. */
#define HAVE_FSTATFS 1

/* Define to 1 if you have the `fstatvfs' function. */
#define HAVE_FSTATVFS 1

/* Define to 1 if you have the `futimens' function. */
#define HAVE_FUTIMENS 1

/* Define to 1 if you have the `futimes' function. */
/* #undef HAVE_FUTIMES */

/* Have getaddrinfo */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getdomainname' function. */
/* #undef HAVE_GETDOMAINNAME */

/* Define to 1 if you have the `getfsstat' function. */
/* #undef HAVE_GETFSSTAT */

/* Define to 1 if you have the `getgrent' function. */
/* #undef HAVE_GETGRENT */

/* Define to 1 if you have the `getgrgid_r' function. */
/* #undef HAVE_GETGRGID_R */

/* Define to 1 if you have the `getgrnam_r' function. */
/* #undef HAVE_GETGRNAM_R */

/* Have gethostbyname */
#define HAVE_GETHOSTBYNAME 1

/* Have gethostbyname2 */
#define HAVE_GETHOSTBYNAME2 1

/* Have gethostbyname2_r */
/* #undef HAVE_GETHOSTBYNAME2_R */

/* Define to 1 if you have the `gethostid' function. */
/* #undef HAVE_GETHOSTID */

/* Have getifaddrs */
/* #undef HAVE_GETIFADDRS */

/* Define to 1 if you have the `getlogin_r' function. */
/* #undef HAVE_GETLOGIN_R */

/* Have getnameinfo */
#define HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `getpriority' function. */
#define HAVE_GETPRIORITY 1

/* Have getprotobyname */
#define HAVE_GETPROTOBYNAME 1

/* Define to 1 if you have the `getpwent' function. */
/* #undef HAVE_GETPWENT */

/* Define to 1 if you have the `getpwnam_r' function. */
#define HAVE_GETPWNAM_R 1

/* Define to 1 if you have the `getpwuid_r' function. */
#define HAVE_GETPWUID_R 1

/* Define to 1 if you have the `getresuid' function. */
#define HAVE_GETRESUID 1

/* Define to 1 if you have the `getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Have if_nametoindex */
#define HAVE_IF_NAMETOINDEX 1

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* Have inet_ntop */
#define HAVE_INET_NTOP 1

/* Have inet_pton */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Have IPPROTO_IP */
#define HAVE_IPPROTO_IP 1

/* Have IPPROTO_IPV6 */
#define HAVE_IPPROTO_IPV6 1

/* Have IPPROTO_TCP */
#define HAVE_IPPROTO_TCP 1

/* Have IPV6_PKTINFO */
/* #undef HAVE_IPV6_PKTINFO */

/* Have IP_DONTFRAG */
/* #undef HAVE_IP_DONTFRAG */

/* Have IP_DONTFRAGMENT */
/* #undef HAVE_IP_DONTFRAGMENT */

/* Have IP_MTU_DISCOVER */
#define HAVE_IP_MTU_DISCOVER 1

/* Have IP_PKTINFO */
#define HAVE_IP_PKTINFO 1

/* Have IP_PMTUDISC_DO */
#define HAVE_IP_PMTUDISC_DO 1

/* Define to 1 if you have the `isfinite' function. */
#define HAVE_ISFINITE 1

/* isinf available */
#define HAVE_ISINF 1

/* Define to 1 if you have the `kill' function. */
#define HAVE_KILL 1

/* Define to 1 if you have the `kqueue' function. */
/* #undef HAVE_KQUEUE */

/* Have __thread keyword */
/* #undef HAVE_KW_THREAD */

/* Have large file support */
#define HAVE_LARGE_FILE_SUPPORT 1

/* Define to 1 if you have the <libproc.h> header file. */
/* #undef HAVE_LIBPROC_H */

/* Define to 1 if you have the `unwind' library (-lunwind). */
/* #undef HAVE_LIBUNWIND */

/* Define to 1 if you have the <link.h> header file. */
#define HAVE_LINK_H 1

/* Define to 1 if you have the <linux/magic.h> header file. */
#define HAVE_LINUX_MAGIC_H 1

/* Define to 1 if you have the <linux/netlink.h> header file. */
#define HAVE_LINUX_NETLINK_H 1

/* Define to 1 if you have the <linux/rtc.h> header file. */
#define HAVE_LINUX_RTC_H 1

/* Define to 1 if you have the <linux/rtnetlink.h> header file. */
#define HAVE_LINUX_RTNETLINK_H 1

/* Define to 1 if you have the <linux/serial.h> header file. */
#define HAVE_LINUX_SERIAL_H 1

/* Define to 1 if you have the `lockf' function. */
/* #undef HAVE_LOCKF */

/* Define to 1 if you have the `lutimes' function. */
/* #undef HAVE_LUTIMES */

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Have mincore */
#define HAVE_MINCORE 1

/* Define to 1 if you have the `mknodat' function. */
#define HAVE_MKNODAT 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Moving collector */
#define HAVE_MOVING_COLLECTOR 1

/* Define to 1 if you have the `mremap' function. */
#define HAVE_MREMAP 1

/* Have MSG_NOSIGNAL */
#define HAVE_MSG_NOSIGNAL 1

/* Define to 1 if you have the <nacl/nacl_dyncode.h> header file. */
/* #undef HAVE_NACL_NACL_DYNCODE_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* No GC support. */
/* #undef HAVE_NULL_GC */

/* Define to 1 if you have the <pathconf.h> header file. */
#define HAVE_PATHCONF_H 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `posix_fadvise' function. */
#define HAVE_POSIX_FADVISE 1

/* Define to 1 if you have the `posix_fallocate' function. */
#define HAVE_POSIX_FALLOCATE 1

/* Define to 1 if you have the `posix_madvise' function. */
/* #undef HAVE_POSIX_MADVISE */

/* Define to 1 if you have the `prctl' function. */
#define HAVE_PRCTL 1

/* Define to 1 if you have the `preadv' function. */
/* #undef HAVE_PREADV */

/* Define to 1 if you have the `psignal' function. */
#define HAVE_PSIGNAL 1

/* Define to 1 if you have the `pthread_attr_getstack' function. */
#define HAVE_PTHREAD_ATTR_GETSTACK 1

/* Define to 1 if you have the `pthread_attr_getstacksize' function. */
#define HAVE_PTHREAD_ATTR_GETSTACKSIZE 1

/* Define to 1 if you have the `pthread_attr_get_np' function. */
/* #undef HAVE_PTHREAD_ATTR_GET_NP */

/* Define to 1 if you have the `pthread_attr_setstacksize' function. */
#define HAVE_PTHREAD_ATTR_SETSTACKSIZE 1

/* Define to 1 if you have the `pthread_getattr_np' function. */
#define HAVE_PTHREAD_GETATTR_NP 1

/* Define to 1 if you have the `pthread_get_stackaddr_np' function. */
/* #undef HAVE_PTHREAD_GET_STACKADDR_NP */

/* Define to 1 if you have the `pthread_get_stacksize_np' function. */
/* #undef HAVE_PTHREAD_GET_STACKSIZE_NP */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the `pthread_kill' function. */
#define HAVE_PTHREAD_KILL 1

/* Define to 1 if you have the `pthread_mutex_timedlock' function. */
#define HAVE_PTHREAD_MUTEX_TIMEDLOCK 1

/* Define to 1 if you have the <pthread_np.h> header file. */
/* #undef HAVE_PTHREAD_NP_H */

/* Define to 1 if you have the `pthread_setname_np' function. */
#define HAVE_PTHREAD_SETNAME_NP 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `pwritev' function. */
/* #undef HAVE_PWRITEV */

/* Define to 1 if you have the `readlinkat' function. */
#define HAVE_READLINKAT 1

/* Define to 1 if you have the `readv' function. */
#define HAVE_READV 1

/* Define to 1 if you have the `remap_file_pages' function. */
/* #undef HAVE_REMAP_FILE_PAGES */

/* Define to 1 if you have the `sched_getaffinity' function. */
#define HAVE_SCHED_GETAFFINITY 1

/* Define to 1 if you have the `sched_getcpu' function. */
#define HAVE_SCHED_GETCPU 1

/* Define to 1 if you have the `sched_setaffinity' function. */
#define HAVE_SCHED_SETAFFINITY 1

/* Define to 1 if you have the `seekdir' function. */
/* #undef HAVE_SEEKDIR */

/* Define to 1 if you have the <semaphore.h> header file. */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if you have the `sendfile' function. */
#define HAVE_SENDFILE 1

/* Define to 1 if you have the `setdomainname' function. */
/* #undef HAVE_SETDOMAINNAME */

/* Define to 1 if you have the `setgrent' function. */
/* #undef HAVE_SETGRENT */

/* Define to 1 if you have the `setgroups' function. */
#define HAVE_SETGROUPS 1

/* Define to 1 if you have the `sethostid' function. */
/* #undef HAVE_SETHOSTID */

/* Define to 1 if you have the `sethostname' function. */
/* #undef HAVE_SETHOSTNAME */

/* Define to 1 if you have the `setpgid' function. */
#define HAVE_SETPGID 1

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the `setpwent' function. */
/* #undef HAVE_SETPWENT */

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the `setusershell' function. */
#define HAVE_SETUSERSHELL 1

/* Define to 1 if you have the `shm_open' function. */
/* #undef HAVE_SHM_OPEN */

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `signal' function. */
#define HAVE_SIGNAL 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Have signbit */
#define HAVE_SIGNBIT 1

/* Can get interface list */
#define HAVE_SIOCGIFCONF 1

/* sockaddr_in6 has sin6_len */
/* #undef HAVE_SOCKADDR_IN6_SIN_LEN */

/* sockaddr_in has sin_len */
/* #undef HAVE_SOCKADDR_IN_SIN_LEN */

/* Have socklen_t */
#define HAVE_SOCKLEN_T 1

/* Have SOL_IP */
#define HAVE_SOL_IP 1

/* Have SOL_IPV6 */
#define HAVE_SOL_IPV6 1

/* Have SOL_TCP */
#define HAVE_SOL_TCP 1

/* Define to 1 if you have the `statfs' function. */
#define HAVE_STATFS 1

/* Define to 1 if you have the `statvfs' function. */
#define HAVE_STATVFS 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stime' function. */
/* #undef HAVE_STIME */

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if the system has the type `struct cmsghdr'. */
#define HAVE_STRUCT_CMSGHDR 1

/* Define to 1 if `d_off' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_OFF 1

/* Define to 1 if `d_reclen' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_RECLEN 1

/* Define to 1 if `d_type' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_TYPE 1

/* Define to 1 if the system has the type `struct flock'. */
#define HAVE_STRUCT_FLOCK 1

/* Define to 1 if the system has the type `struct iovec'. */
#define HAVE_STRUCT_IOVEC 1

/* Have struct ip_mreq */
/* #undef HAVE_STRUCT_IP_MREQ */

/* Have struct ip_mreqn */
#define HAVE_STRUCT_IP_MREQN 1

/* Define to 1 if `kp_proc' is a member of `struct kinfo_proc'. */
/* #undef HAVE_STRUCT_KINFO_PROC_KP_PROC */

/* Define to 1 if the system has the type `struct linger'. */
#define HAVE_STRUCT_LINGER 1

/* Define to 1 if `pw_gecos' is a member of `struct passwd'. */
#define HAVE_STRUCT_PASSWD_PW_GECOS 1

/* Define to 1 if the system has the type `struct pollfd'. */
#define HAVE_STRUCT_POLLFD 1

/* Define to 1 if the system has the type `struct sockaddr'. */
#define HAVE_STRUCT_SOCKADDR 1

/* Define to 1 if the system has the type `struct sockaddr_in'. */
#define HAVE_STRUCT_SOCKADDR_IN 1

/* Define to 1 if the system has the type `struct sockaddr_in6'. */
#define HAVE_STRUCT_SOCKADDR_IN6 1

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if the system has the type `struct sockaddr_un'. */
#define HAVE_STRUCT_SOCKADDR_UN 1

/* Define to 1 if the system has the type `struct stat'. */
#define HAVE_STRUCT_STAT 1

/* Define to 1 if `f_flags' is a member of `struct statfs'. */
#define HAVE_STRUCT_STATFS_F_FLAGS 1

/* Define to 1 if `st_atim' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM */

/* Define to 1 if `st_ctim' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_CTIM */

/* Define to 1 if `st_mtim' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIM */

/* Define to 1 if the system has the type `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if the system has the type `struct timeval'. */
#define HAVE_STRUCT_TIMEVAL 1

/* Define to 1 if the system has the type `struct timezone'. */
#define HAVE_STRUCT_TIMEZONE 1

/* Define to 1 if the system has the type `struct utimbuf'. */
#define HAVE_STRUCT_UTIMBUF 1

/* Define to 1 if the system has the type `suseconds_t'. */
#define HAVE_SUSECONDS_T 1

/* Define to 1 if you have the `swab' function. */
/* #undef HAVE_SWAB */

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the `system' function. */
#define HAVE_SYSTEM 1

/* Define to 1 if you have the <sys/auxv.h> header file. */
#define HAVE_SYS_AUXV_H 1

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define HAVE_SYS_EPOLL_H 1

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/extattr.h> header file. */
/* #undef HAVE_SYS_EXTATTR_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/inotify.h> header file. */
#define HAVE_SYS_INOTIFY_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ipc.h> header file. */
#define HAVE_SYS_IPC_H 1

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
#define HAVE_SYS_POLL_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/sdt.h> header file. */
/* #undef HAVE_SYS_SDT_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/sendfile.h> header file. */
#define HAVE_SYS_SENDFILE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syscall.h> header file. */
#define HAVE_SYS_SYSCALL_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
/* #undef HAVE_SYS_SYSCTL_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/user.h> header file. */
/* #undef HAVE_SYS_USER_H */

/* Define to 1 if you have the <sys/utime.h> header file. */
#define HAVE_SYS_UTIME_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/vfstab.h> header file. */
/* #undef HAVE_SYS_VFSTAB_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <sys/xattr.h> header file. */
#define HAVE_SYS_XATTR_H 1

/* Have system zlib */
#define HAVE_SYS_ZLIB 1

/* Define to 1 if you have the `telldir' function. */
/* #undef HAVE_TELLDIR */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <term.h> header file. */
#define HAVE_TERM_H 1

/* Have timezone variable */
/* #undef HAVE_TIMEZONE */

/* tls_model available */
/* #undef HAVE_TLS_MODEL_ATTR */

/* Have tm_gmtoff */
#define HAVE_TM_GMTOFF 1

/* Define to 1 if you have the `trunc' function. */
#define HAVE_TRUNC 1

/* Define to 1 if you have the `ttyname_r' function. */
#define HAVE_TTYNAME_R 1

/* Define to 1 if you have the <ucontext.h> header file. */
#define HAVE_UCONTEXT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <unwind.h> header file. */
#define HAVE_UNWIND_H 1

/* Define to 1 if you have /usr/include/malloc.h. */
#define HAVE_USR_INCLUDE_MALLOC_H 1

/* Define to 1 if you have the `utimensat' function. */
#define HAVE_UTIMENSAT 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Don't use UWP Windows API support */
#define HAVE_UWP_WINAPI_SUPPORT 0

/* Support for the visibility ("hidden") attribute */
#define HAVE_VISIBILITY_HIDDEN 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the <winternl.h> header file. */
/* #undef HAVE_WINTERNL_H */

/* Have a working sigaltstack */
#define HAVE_WORKING_SIGALTSTACK 1

/* Define to 1 if you have the `writev' function. */
#define HAVE_WRITEV 1

/* Have system zlib */
#define HAVE_ZLIB 1

/* Define to 1 if you have the `_finite' function. */
/* #undef HAVE__FINITE */

/* ... */
/* #undef HOST_AMD64 */

/* ... */
/* #undef HOST_ARM */

/* ... */
#define HOST_ARM64 1

/* ... */
/* #undef HOST_IA64 */

/* ... */
/* #undef HOST_MIPS */

/* ... */
/* #undef HOST_POWERPC */

/* ... */
/* #undef HOST_POWERPC64 */

/* ... */
/* #undef HOST_S390X */

/* ... */
/* #undef HOST_SPARC */

/* ... */
/* #undef HOST_SPARC64 */

/* Host Platform is Win32 */
/* #undef HOST_WIN32 */

/* ... */
/* #undef HOST_X86 */

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Enable lazy gc thread creation by the embedding host. */
/* #undef LAZY_GC_THREAD_CREATION */

/* Full version of LLVM libraties */
/* #undef LLVM_VERSION */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* The architecture this is running on */
#define MONO_ARCHITECTURE "arm64"

/* Enable the allocation and indexing of arrays greater than Int32.MaxValue */
/* #undef MONO_BIG_ARRAYS */

/* The runtime is compiled for cross-compiling mode */
/* #undef MONO_CROSS_COMPILE */

/* Disable banned functions from being used by the runtime */
#define MONO_INSIDE_RUNTIME 1

/* The LLVM back end is dynamically loaded */
/* #undef MONO_LLVM_LOADED */

/* AOT cross offsets file */
/* #undef MONO_OFFSETS_FILE */

/* Reduce runtime requirements (and capabilities) */
/* #undef MONO_SMALL_CONFIG */

/* Xen-specific behaviour */
/* #undef MONO_XEN_OPT */

/* Length of zero length arrays */
#define MONO_ZERO_LEN_ARRAY 0

/* Name of /dev/random */
#define NAME_DEV_RANDOM "/dev/random"

/* Define if Unix sockets cannot be created in an anonymous namespace */
/* #undef NEED_LINK_UNLINK */

/* Name of package */
#define PACKAGE "mono"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.xamarin.com/enter_bug.cgi?classification=Mono"

/* Define to the full name of this package. */
#define PACKAGE_NAME "mono"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "mono 4.9.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "mono"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.9.0"

/* Targeting the Android platform */
/* #undef PLATFORM_ANDROID */

/* This platform does not support symlinks */
/* #undef PLATFORM_NO_SYMLINKS */

/* pthread is a pointer */
/* #undef PTHREAD_POINTER_ID */

/* size of machine integer registers */
#define SIZEOF_REGISTER SIZEOF_VOID_P

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* ... */
/* #undef TARGET_AMD64 */

/* ... */
/* #undef TARGET_ANDROID */

/* ... */
/* #undef TARGET_ARM */

/* ... */
#define TARGET_ARM64 1

/* byte order of target */
#define TARGET_BYTE_ORDER G_BYTE_ORDER

/* ... */
/* #undef TARGET_IA64 */

/* The JIT/AOT targets iOS */
/* #undef TARGET_IOS */

/* The JIT/AOT targets Apple platforms */
/* #undef TARGET_MACH */

/* ... */
/* #undef TARGET_MIPS */

/* ... */
/* #undef TARGET_NACL */

/* The JIT/AOT targets OSX */
/* #undef TARGET_OSX */

/* ... */
/* #undef TARGET_POWERPC */

/* ... */
/* #undef TARGET_POWERPC64 */

/* ... */
/* #undef TARGET_PS3 */

/* ... */
/* #undef TARGET_PS4 */

/* ... */
/* #undef TARGET_S390X */

/* ... */
/* #undef TARGET_SPARC */

/* ... */
/* #undef TARGET_SPARC64 */

/* The JIT/AOT targets WatchOS */
/* #undef TARGET_WATCHOS */

/* Target Platform is Win32 */
/* #undef TARGET_WIN32 */

/* ... */
/* #undef TARGET_X86 */

/* ... */
/* #undef TARGET_XBOX360 */

/* Enable cooperative stop-the-world garbage collection. */
/* #undef USE_COOP_GC */

/* ... */
#define USE_GCC_ATOMIC_OPS 1

/* Use kqueue for the threadpool */
/* #undef USE_KQUEUE_FOR_THREADPOOL */

/* ... */
/* #undef USE_MACH_SEMA */

/* Use malloc for each single mempool allocation */
/* #undef USE_MALLOC_FOR_MEMPOOLS */

/* Version number of package */
#define VERSION "4.9.0"

/* 64 bit mode with 4 byte longs and pointers */
/* #undef __mono_ilp32__ */

/* ... */
/* #undef __mono_ppc64__ */

/* ... */
/* #undef __native_client_codegen__ */
