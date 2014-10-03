{"restart_syscall",	handle_none},	/*0*/
{"exit",		handle_none},	/*1*/
{"fork",		handle_none},	/*2*/
{"read",		handle_read},	/*3*/
{"write",		handle_write},	/*4*/
{"open",		handle_open},	/*5*/
{"close",		handle_close},	/*6*/
{"waitpid",		handle_none},	/*7*/
{"creat",		handle_creat},	/*8*/
{"link",		handle_none},	/*9*/
{"unlink",		handle_none},	/*10*/
{"execve",		handle_none},	/*11*/
{"chdir",		handle_none},	/*12*/
{"time",		handle_none},	/*13*/
{"mknod",		handle_none},	/*14*/
{"chmod",		handle_none},	/*15*/
{"lchown",		handle_none},	/*16*/
{"break",		handle_none},	/*17*/
{"oldstat",		handle_none},	/*18*/
{"lseek",		handle_none},	/*19*/
{"getpid",		handle_none},	/*20*/
{"mount",		handle_none},	/*21*/
{"umount",		handle_none},	/*22*/
{"setuid",		handle_none},	/*23*/
{"getuid",		handle_none},	/*24*/
{"stime",		handle_none},	/*25*/
{"ptrace",		handle_none},	/*26*/
{"alarm",		handle_none},	/*27*/
{"oldfstat",		handle_none},	/*28*/
{"pause",		handle_none},	/*29*/
{"utime",		handle_none},	/*30*/
{"stty",		handle_none},	/*31*/
{"gtty",		handle_none},	/*32*/
{"access",		handle_none},	/*33*/
{"nice",		handle_none},	/*34*/
{"ftime",		handle_none},	/*35*/
{"sync",		handle_none},	/*36*/
{"kill",		handle_none},	/*37*/
{"rename",		handle_none},	/*38*/
{"mkdir",		handle_none},	/*39*/
{"rmdir",		handle_none},	/*40*/
{"dup",			handle_dup},	/*41*/
{"pipe",		handle_none},	/*42*/
{"times",		handle_none},	/*43*/
{"prof",		handle_none},	/*44*/
{"brk",			handle_none},	/*45*/
{"setgid",		handle_none},	/*46*/
{"getgid",		handle_none},	/*47*/
{"signal",		handle_none},	/*48*/
{"geteuid",		handle_none},	/*49*/
{"getegid",		handle_none},	/*50*/
{"acct",		handle_none},	/*51*/
{"umount2",		handle_none},	/*52*/
{"lock",		handle_none},	/*53*/
{"ioctl",		handle_none},	/*54*/
{"fcntl",		handle_none},	/*55*/
{"mpx",			handle_none},	/*56*/
{"setpgid",		handle_none},	/*57*/
{"ulimit",		handle_none},	/*58*/
{"oldolduname",		handle_none},	/*59*/
{"umask",		handle_none},	/*60*/
{"chroot",		handle_none},	/*61*/
{"ustat",		handle_none},	/*62*/
{"dup2",		handle_dup2},	/*63*/
{"getppid",		handle_none},	/*64*/
{"getpgrp",		handle_none},	/*65*/
{"setsid",		handle_none},	/*66*/
{"sigaction",		handle_none},	/*67*/
{"sgetmask",		handle_none},	/*68*/
{"ssetmask",		handle_none},	/*69*/
{"setreuid",		handle_none},	/*70*/
{"setregid",		handle_none},	/*71*/
{"sigsuspend",		handle_none},	/*72*/
{"sigpending",		handle_none},	/*73*/
{"sethostname",		handle_none},	/*74*/
{"setrlimit",		handle_none},	/*75*/
{"getrlimit",		handle_none},	/*76*/
{"getrusage",		handle_none},	/*77*/
{"gettimeofday",	handle_none},	/*78*/
{"settimeofday",	handle_none},	/*79*/
{"getgroups",		handle_none},	/*80*/
{"setgroups",		handle_none},	/*81*/
{"select",		handle_none},	/*82*/
{"symlink",		handle_none},	/*83*/
{"oldlstat",		handle_none},	/*84*/
{"readlink",		handle_none},	/*85*/
{"uselib",		handle_none},	/*86*/
{"swapon",		handle_none},	/*87*/
{"reboot",		handle_none},	/*88*/
{"readdir",		handle_none},	/*89*/
{"mmap",		handle_none},	/*90*/
{"munmap",		handle_none},	/*91*/
{"truncate",		handle_none},	/*92*/
{"ftruncate",		handle_none},	/*93*/
{"fchmod",		handle_none},	/*94*/
{"fchown",		handle_none},	/*95*/
{"getpriority",		handle_none},	/*96*/
{"setpriority",		handle_none},	/*97*/
{"profil",		handle_none},	/*98*/
{"statfs",		handle_none},	/*99*/
{"fstatfs",		handle_none},	/*100*/
{"ioperm",		handle_none},	/*101*/
{"socketcall",		handle_none},	/*102*/
{"syslog",		handle_none},	/*103*/
{"setitimer",		handle_none},	/*104*/
{"getitimer",		handle_none},	/*105*/
{"stat",		handle_none},	/*106*/
{"lstat",		handle_none},	/*107*/
{"fstat",		handle_none},	/*108*/
{"olduname",		handle_none},	/*109*/
{"iopl",		handle_none},	/*110*/
{"vhangup",		handle_none},	/*111*/
{"idle",		handle_none},	/*112*/
{"vm86old",		handle_none},	/*113*/
{"wait4",		handle_none},	/*114*/
{"swapoff",		handle_none},	/*115*/
{"sysinfo",		handle_none},	/*116*/
{"ipc",			handle_none},	/*117*/
{"fsync",		handle_none},	/*118*/
{"sigreturn",		handle_none},	/*119*/
{"clone",		handle_none},	/*120*/
{"setdomainname",	handle_none},	/*121*/
{"uname",		handle_none},	/*122*/
{"modify_ldt",		handle_none},	/*123*/
{"adjtimex",		handle_none},	/*124*/
{"mprotect",		handle_none},	/*125*/
{"sigprocmask",		handle_none},	/*126*/
{"create_module",	handle_none},	/*127*/
{"init_module",		handle_none},	/*128*/
{"delete_module",	handle_none},	/*129*/
{"get_kernel_syms",	handle_none},	/*130*/
{"quotactl",		handle_none},	/*131*/
{"getpgid",		handle_none},	/*132*/
{"fchdir",		handle_none},	/*133*/
{"bdflush",		handle_none},	/*134*/
{"sysfs",		handle_none},	/*135*/
{"personality",		handle_none},	/*136*/
{"afs_syscall",		handle_none},	/*137*/
{"setfsuid",		handle_none},	/*138*/
{"setfsgid",		handle_none},	/*139*/
{"_llseek",		handle_none},	/*140*/
{"getdents",		handle_none},	/*141*/
{"_newselect",		handle_none},	/*142*/
{"flock",		handle_none},	/*143*/
{"msync",		handle_none},	/*144*/
{"readv",		handle_read},	/*145*/
{"writev",		handle_write},	/*146*/
{"getsid",		handle_none},	/*147*/
{"fdatasync",		handle_none},	/*148*/
{"_sysctl",		handle_none},	/*149*/
{"mlock",		handle_none},	/*150*/
{"munlock",		handle_none},	/*151*/
{"mlockall",		handle_none},	/*152*/
{"munlockall",		handle_none},	/*153*/
{"sched_setparam",	handle_none},	/*154*/
{"sched_getparam",	handle_none},	/*155*/
{"sched_setscheduler",	handle_none},	/*156*/
{"sched_getscheduler",	handle_none},	/*157*/
{"sched_yield",		handle_none},	/*158*/
{"sched_get_priority_max",	handle_none},	/*159*/
{"sched_get_priority_min",	handle_none},	/*160*/
{"sched_rr_get_interval",	handle_none},	/*161*/
{"nanosleep",		handle_none},	/*162*/
{"mremap",		handle_none},	/*163*/
{"setresuid",		handle_none},	/*164*/
{"getresuid",		handle_none},	/*165*/
{"vm86",		handle_none},	/*166*/
{"query_module",	handle_none},	/*167*/
{"poll",		handle_none},	/*168*/
{"nfsservctl",		handle_none},	/*169*/
{"setresgid",		handle_none},	/*170*/
{"getresgid",		handle_none},	/*171*/
{"prctl",		handle_none},	/*172*/
{"rt_sigreturn",	handle_none},	/*173*/
{"rt_sigaction",	handle_none},	/*174*/
{"rt_sigprocmask",	handle_none},	/*175*/
{"rt_sigpending",	handle_none},	/*176*/
{"rt_sigtimedwait",	handle_none},	/*177*/
{"rt_sigqueueinfo",	handle_none},	/*178*/
{"rt_sigsuspend",	handle_none},	/*179*/
{"pread64",		handle_read},	/*180*/
{"pwrite64",		handle_write},	/*181*/
{"chown",		handle_none},	/*182*/
{"getcwd",		handle_none},	/*183*/
{"capget",		handle_none},	/*184*/
{"capset",		handle_none},	/*185*/
{"sigaltstack",		handle_none},	/*186*/
{"sendfile",		handle_none},	/*187*/
{"getpmsg",		handle_none},	/*188*/
{"putpmsg",		handle_none},	/*189*/
{"vfork",		handle_none},	/*190*/
{"ugetrlimit",		handle_none},	/*191*/
{"mmap2",		handle_none},	/*192*/
{"truncate64",		handle_none},	/*193*/
{"ftruncate64",		handle_none},	/*194*/
{"stat64",		handle_none},	/*195*/
{"lstat64",		handle_none},	/*196*/
{"fstat64",		handle_none},	/*197*/
{"lchown32",		handle_none},	/*198*/
{"getuid32",		handle_none},	/*199*/
{"getgid32",		handle_none},	/*200*/
{"geteuid32",		handle_none},	/*201*/
{"getegid32",		handle_none},	/*202*/
{"setreuid32",		handle_none},	/*203*/
{"setregid32",		handle_none},	/*204*/
{"getgroups32",		handle_none},	/*205*/
{"setgroups32",		handle_none},	/*206*/
{"fchown32",		handle_none},	/*207*/
{"setresuid32",		handle_none},	/*208*/
{"getresuid32",		handle_none},	/*209*/
{"setresgid32",		handle_none},	/*210*/
{"getresgid32",		handle_none},	/*211*/
{"chown32",		handle_none},	/*212*/
{"setuid32",		handle_none},	/*213*/
{"setgid32",		handle_none},	/*214*/
{"setfsuid32",		handle_none},	/*215*/
{"setfsgid32",		handle_none},	/*216*/
{"pivot_root",		handle_none},	/*217*/
{"mincore",		handle_none},	/*218*/
{"madvise",		handle_none},	/*219*/
{"getdents64",		handle_none},	/*220*/
{"fcntl64",		handle_none},	/*221*/
{"SYS_222",		handle_none},	/*222*/
{"SYS_223",		handle_none},	/*223*/
{"gettid",		handle_none},	/*224*/
{"readahead",		handle_none},	/*225*/
{"setxattr",		handle_none},	/*226*/
{"lsetxattr",		handle_none},	/*227*/
{"fsetxattr",		handle_none},	/*228*/
{"getxattr",		handle_none},	/*229*/
{"lgetxattr",		handle_none},	/*230*/
{"fgetxattr",		handle_none},	/*231*/
{"listxattr",		handle_none},	/*232*/
{"llistxattr",		handle_none},	/*233*/
{"flistxattr",		handle_none},	/*234*/
{"removexattr",		handle_none},	/*235*/
{"lremovexattr",	handle_none},	/*236*/
{"fremovexattr",	handle_none},	/*237*/
{"tkill",		handle_none},	/*238*/
{"sendfile64",		handle_none},	/*239*/
{"futex",		handle_none},	/*240*/
{"sched_setaffinity",	handle_none},	/*241*/
{"sched_getaffinity",	handle_none},	/*242*/
{"set_thread_area",	handle_none},	/*243*/
{"get_thread_area",	handle_none},	/*244*/
{"io_setup",		handle_none},	/*245*/
{"io_destroy",		handle_none},	/*246*/
{"io_getevents",	handle_none},	/*247*/
{"io_submit",		handle_none},	/*248*/
{"io_cancel",		handle_none},	/*249*/
{"fadvise64",		handle_none},	/*250*/
{"SYS_251",		handle_none},	/*251*/
{"exit_group",		handle_none},	/*252*/
{"lookup_dcookie",	handle_none},	/*253*/
{"epoll_create",	handle_none},	/*254*/
{"epoll_ctl",		handle_none},	/*255*/
{"epoll_wait",		handle_none},	/*256*/
{"remap_file_pages",	handle_none},	/*257*/
{"set_tid_address",	handle_none},	/*258*/
{"timer_create",	handle_none},	/*259*/
{"timer_settime",	handle_none},	/*260*/
{"timer_gettime",	handle_none},	/*261*/
{"timer_getoverrun",	handle_none},	/*262*/
{"timer_delete",	handle_none},	/*263*/
{"clock_settime",	handle_none},	/*264*/
{"clock_gettime",	handle_none},	/*265*/
{"clock_getres",	handle_none},	/*266*/
{"clock_nanosleep",	handle_none},	/*267*/
{"statfs64",		handle_none},	/*268*/
{"fstatfs64",		handle_none},	/*269*/
{"tgkill",		handle_none},	/*270*/
{"utimes",		handle_none},	/*271*/
{"fadvise64_64",	handle_none},	/*272*/
{"vserver",		handle_none},	/*273*/
{"mbind",		handle_none},	/*274*/
{"get_mempolicy",	handle_none},	/*275*/
{"set_mempolicy",	handle_none},	/*276*/
{"mq_open",		handle_none},	/*277*/
{"mq_unlink",		handle_none},	/*278*/
{"mq_timedsend",	handle_none},	/*279*/
{"mq_timedreceive",	handle_none},	/*280*/
{"mq_notify",		handle_none},	/*281*/
{"mq_getsetattr",	handle_none},	/*282*/
{"kexec_load",		handle_none},	/*283*/
{"waitid",		handle_none},	/*284*/
{"setaltroot",		handle_none},	/*285*/
{"add_key",		handle_none},	/*286*/
{"request_key",		handle_none},	/*287*/
{"keyctl",		handle_none},	/*288*/
{"ioprio_set",		handle_none},	/*289*/
{"ioprio_get",		handle_none},	/*290*/
{"inotify_init",	handle_none},	/*291*/
{"inotify_add_watch",	handle_none},	/*292*/
{"inotify_rm_watch",	handle_none},	/*293*/
{"migrate_pages",	handle_none},	/*294*/
{"openat",		handle_openat},	/*295*/
{"mkdirat",		handle_none},	/*296*/
{"mknodat",		handle_none},	/*297*/
{"fchownat",		handle_none},	/*298*/
{"futimesat",		handle_none},	/*299*/
{"fstatat64",		handle_none},	/*300*/
{"unlinkat",		handle_none},	/*301*/
{"renameat",		handle_none},	/*302*/
{"linkat",		handle_none},	/*303*/
{"symlinkat",		handle_none},	/*304*/
{"readlinkat",		handle_none},	/*305*/
{"fchmodat",		handle_none},	/*306*/
{"faccessat",		handle_none},	/*307*/
{"pselect6",		handle_none},	/*308*/
{"ppoll",		handle_none},	/*309*/
{"unshare",		handle_none},	/*310*/
{"set_robust_list",	handle_none},	/*311*/
{"get_robust_list",	handle_none},	/*312*/
{"splice",		handle_none},	/*313*/
{"sync_file_range",	handle_none},	/*314*/
{"tee",			handle_none},	/*315*/
{"vmsplice",		handle_none},	/*316*/
{"move_pages",		handle_none},	/*317*/
{"getcpu",		handle_none},	/*318*/
{"epoll_pwait",		handle_none},	/*319*/
{"utimensat",		handle_none},	/*320*/
{"signalfd",		handle_none},	/*321*/
{"timerfd_create",	handle_none},	/*322*/
{"eventfd",		handle_none},	/*323*/
{"fallocate",		handle_none},	/*324*/
{"timerfd_settime",	handle_none},	/*325*/
{"timerfd_gettime",	handle_none},	/*326*/
{"signalfd4",		handle_none},	/*327*/
{"eventfd2",		handle_none},	/*328*/
{"epoll_create1",	handle_none},	/*329*/
{"dup3",		handle_none},	/*330*/
{"pipe2",		handle_none},	/*331*/
{"inotify_init1",	handle_none},	/*332*/
