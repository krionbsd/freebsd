/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 * created from FreeBSD: src/sys/kern/syscalls.master,v 1.178 2004/10/23 20:00:43 rwatson Exp 
 */

#include "opt_compat.h"

#include <sys/param.h>
#include <sys/sysent.h>
#include <sys/sysproto.h>

#define AS(name) (sizeof(struct name) / sizeof(register_t))

#ifdef COMPAT_43
#define compat(n, name) n, (sy_call_t *)__CONCAT(o,name)
#else
#define compat(n, name) 0, (sy_call_t *)nosys
#endif

#ifdef COMPAT_FREEBSD4
#define compat4(n, name) n, (sy_call_t *)__CONCAT(freebsd4_,name)
#else
#define compat4(n, name) 0, (sy_call_t *)nosys
#endif

/* The casts are bogus but will do for now. */
struct sysent sysent[] = {
	{ SYF_MPSAFE | 0, (sy_call_t *)nosys },		/* 0 = syscall */
	{ SYF_MPSAFE | AS(sys_exit_args), (sy_call_t *)sys_exit },	/* 1 = exit */
	{ SYF_MPSAFE | 0, (sy_call_t *)fork },		/* 2 = fork */
	{ SYF_MPSAFE | AS(read_args), (sy_call_t *)read },	/* 3 = read */
	{ SYF_MPSAFE | AS(write_args), (sy_call_t *)write },	/* 4 = write */
	{ SYF_MPSAFE | AS(open_args), (sy_call_t *)open },	/* 5 = open */
	{ SYF_MPSAFE | AS(close_args), (sy_call_t *)close },	/* 6 = close */
	{ SYF_MPSAFE | AS(wait_args), (sy_call_t *)wait4 },	/* 7 = wait4 */
	{ compat(SYF_MPSAFE | AS(ocreat_args),creat) },	/* 8 = old creat */
	{ SYF_MPSAFE | AS(link_args), (sy_call_t *)link },	/* 9 = link */
	{ SYF_MPSAFE | AS(unlink_args), (sy_call_t *)unlink },	/* 10 = unlink */
	{ 0, (sy_call_t *)nosys },			/* 11 = obsolete execv */
	{ AS(chdir_args), (sy_call_t *)chdir },		/* 12 = chdir */
	{ AS(fchdir_args), (sy_call_t *)fchdir },	/* 13 = fchdir */
	{ AS(mknod_args), (sy_call_t *)mknod },		/* 14 = mknod */
	{ AS(chmod_args), (sy_call_t *)chmod },		/* 15 = chmod */
	{ AS(chown_args), (sy_call_t *)chown },		/* 16 = chown */
	{ SYF_MPSAFE | AS(obreak_args), (sy_call_t *)obreak },	/* 17 = break */
	{ compat4(AS(freebsd4_getfsstat_args),getfsstat) },	/* 18 = old getfsstat */
	{ compat(AS(olseek_args),lseek) },		/* 19 = old lseek */
	{ SYF_MPSAFE | 0, (sy_call_t *)getpid },	/* 20 = getpid */
	{ AS(mount_args), (sy_call_t *)mount },		/* 21 = mount */
	{ AS(unmount_args), (sy_call_t *)unmount },	/* 22 = unmount */
	{ SYF_MPSAFE | AS(setuid_args), (sy_call_t *)setuid },	/* 23 = setuid */
	{ SYF_MPSAFE | 0, (sy_call_t *)getuid },	/* 24 = getuid */
	{ SYF_MPSAFE | 0, (sy_call_t *)geteuid },	/* 25 = geteuid */
	{ SYF_MPSAFE | AS(ptrace_args), (sy_call_t *)ptrace },	/* 26 = ptrace */
	{ SYF_MPSAFE | AS(recvmsg_args), (sy_call_t *)recvmsg },	/* 27 = recvmsg */
	{ SYF_MPSAFE | AS(sendmsg_args), (sy_call_t *)sendmsg },	/* 28 = sendmsg */
	{ SYF_MPSAFE | AS(recvfrom_args), (sy_call_t *)recvfrom },	/* 29 = recvfrom */
	{ SYF_MPSAFE | AS(accept_args), (sy_call_t *)accept },	/* 30 = accept */
	{ SYF_MPSAFE | AS(getpeername_args), (sy_call_t *)getpeername },	/* 31 = getpeername */
	{ SYF_MPSAFE | AS(getsockname_args), (sy_call_t *)getsockname },	/* 32 = getsockname */
	{ AS(access_args), (sy_call_t *)access },	/* 33 = access */
	{ AS(chflags_args), (sy_call_t *)chflags },	/* 34 = chflags */
	{ AS(fchflags_args), (sy_call_t *)fchflags },	/* 35 = fchflags */
	{ 0, (sy_call_t *)sync },			/* 36 = sync */
	{ SYF_MPSAFE | AS(kill_args), (sy_call_t *)kill },	/* 37 = kill */
	{ compat(AS(ostat_args),stat) },		/* 38 = old stat */
	{ SYF_MPSAFE | 0, (sy_call_t *)getppid },	/* 39 = getppid */
	{ compat(AS(olstat_args),lstat) },		/* 40 = old lstat */
	{ SYF_MPSAFE | AS(dup_args), (sy_call_t *)dup },	/* 41 = dup */
	{ SYF_MPSAFE | 0, (sy_call_t *)pipe },		/* 42 = pipe */
	{ SYF_MPSAFE | 0, (sy_call_t *)getegid },	/* 43 = getegid */
	{ SYF_MPSAFE | AS(profil_args), (sy_call_t *)profil },	/* 44 = profil */
	{ SYF_MPSAFE | AS(ktrace_args), (sy_call_t *)ktrace },	/* 45 = ktrace */
	{ compat(SYF_MPSAFE | AS(osigaction_args),sigaction) },	/* 46 = old sigaction */
	{ SYF_MPSAFE | 0, (sy_call_t *)getgid },	/* 47 = getgid */
	{ compat(SYF_MPSAFE | AS(osigprocmask_args),sigprocmask) },	/* 48 = old sigprocmask */
	{ SYF_MPSAFE | AS(getlogin_args), (sy_call_t *)getlogin },	/* 49 = getlogin */
	{ SYF_MPSAFE | AS(setlogin_args), (sy_call_t *)setlogin },	/* 50 = setlogin */
	{ SYF_MPSAFE | AS(acct_args), (sy_call_t *)acct },	/* 51 = acct */
	{ compat(SYF_MPSAFE | 0,sigpending) },		/* 52 = old sigpending */
	{ SYF_MPSAFE | AS(sigaltstack_args), (sy_call_t *)sigaltstack },	/* 53 = sigaltstack */
	{ SYF_MPSAFE | AS(ioctl_args), (sy_call_t *)ioctl },	/* 54 = ioctl */
	{ SYF_MPSAFE | AS(reboot_args), (sy_call_t *)reboot },	/* 55 = reboot */
	{ AS(revoke_args), (sy_call_t *)revoke },	/* 56 = revoke */
	{ AS(symlink_args), (sy_call_t *)symlink },	/* 57 = symlink */
	{ AS(readlink_args), (sy_call_t *)readlink },	/* 58 = readlink */
	{ SYF_MPSAFE | AS(execve_args), (sy_call_t *)execve },	/* 59 = execve */
	{ SYF_MPSAFE | AS(umask_args), (sy_call_t *)umask },	/* 60 = umask */
	{ AS(chroot_args), (sy_call_t *)chroot },	/* 61 = chroot */
	{ compat(SYF_MPSAFE | AS(ofstat_args),fstat) },	/* 62 = old fstat */
	{ compat(SYF_MPSAFE | AS(getkerninfo_args),getkerninfo) },	/* 63 = old getkerninfo */
	{ compat(SYF_MPSAFE | 0,getpagesize) },		/* 64 = old getpagesize */
	{ SYF_MPSAFE | AS(msync_args), (sy_call_t *)msync },	/* 65 = msync */
	{ SYF_MPSAFE | 0, (sy_call_t *)vfork },		/* 66 = vfork */
	{ 0, (sy_call_t *)nosys },			/* 67 = obsolete vread */
	{ 0, (sy_call_t *)nosys },			/* 68 = obsolete vwrite */
	{ SYF_MPSAFE | AS(sbrk_args), (sy_call_t *)sbrk },	/* 69 = sbrk */
	{ SYF_MPSAFE | AS(sstk_args), (sy_call_t *)sstk },	/* 70 = sstk */
	{ compat(SYF_MPSAFE | AS(ommap_args),mmap) },	/* 71 = old mmap */
	{ SYF_MPSAFE | AS(ovadvise_args), (sy_call_t *)ovadvise },	/* 72 = vadvise */
	{ SYF_MPSAFE | AS(munmap_args), (sy_call_t *)munmap },	/* 73 = munmap */
	{ SYF_MPSAFE | AS(mprotect_args), (sy_call_t *)mprotect },	/* 74 = mprotect */
	{ SYF_MPSAFE | AS(madvise_args), (sy_call_t *)madvise },	/* 75 = madvise */
	{ 0, (sy_call_t *)nosys },			/* 76 = obsolete vhangup */
	{ 0, (sy_call_t *)nosys },			/* 77 = obsolete vlimit */
	{ SYF_MPSAFE | AS(mincore_args), (sy_call_t *)mincore },	/* 78 = mincore */
	{ SYF_MPSAFE | AS(getgroups_args), (sy_call_t *)getgroups },	/* 79 = getgroups */
	{ SYF_MPSAFE | AS(setgroups_args), (sy_call_t *)setgroups },	/* 80 = setgroups */
	{ SYF_MPSAFE | 0, (sy_call_t *)getpgrp },	/* 81 = getpgrp */
	{ SYF_MPSAFE | AS(setpgid_args), (sy_call_t *)setpgid },	/* 82 = setpgid */
	{ SYF_MPSAFE | AS(setitimer_args), (sy_call_t *)setitimer },	/* 83 = setitimer */
	{ compat(SYF_MPSAFE | 0,wait) },		/* 84 = old wait */
	{ SYF_MPSAFE | AS(swapon_args), (sy_call_t *)swapon },	/* 85 = swapon */
	{ SYF_MPSAFE | AS(getitimer_args), (sy_call_t *)getitimer },	/* 86 = getitimer */
	{ compat(SYF_MPSAFE | AS(gethostname_args),gethostname) },	/* 87 = old gethostname */
	{ compat(SYF_MPSAFE | AS(sethostname_args),sethostname) },	/* 88 = old sethostname */
	{ SYF_MPSAFE | 0, (sy_call_t *)getdtablesize },	/* 89 = getdtablesize */
	{ SYF_MPSAFE | AS(dup2_args), (sy_call_t *)dup2 },	/* 90 = dup2 */
	{ 0, (sy_call_t *)nosys },			/* 91 = getdopt */
	{ SYF_MPSAFE | AS(fcntl_args), (sy_call_t *)fcntl },	/* 92 = fcntl */
	{ SYF_MPSAFE | AS(select_args), (sy_call_t *)select },	/* 93 = select */
	{ 0, (sy_call_t *)nosys },			/* 94 = setdopt */
	{ AS(fsync_args), (sy_call_t *)fsync },		/* 95 = fsync */
	{ SYF_MPSAFE | AS(setpriority_args), (sy_call_t *)setpriority },	/* 96 = setpriority */
	{ SYF_MPSAFE | AS(socket_args), (sy_call_t *)socket },	/* 97 = socket */
	{ SYF_MPSAFE | AS(connect_args), (sy_call_t *)connect },	/* 98 = connect */
	{ compat(SYF_MPSAFE | AS(accept_args),accept) },	/* 99 = old accept */
	{ SYF_MPSAFE | AS(getpriority_args), (sy_call_t *)getpriority },	/* 100 = getpriority */
	{ compat(SYF_MPSAFE | AS(osend_args),send) },	/* 101 = old send */
	{ compat(SYF_MPSAFE | AS(orecv_args),recv) },	/* 102 = old recv */
	{ compat(SYF_MPSAFE | AS(osigreturn_args),sigreturn) },	/* 103 = old sigreturn */
	{ SYF_MPSAFE | AS(bind_args), (sy_call_t *)bind },	/* 104 = bind */
	{ SYF_MPSAFE | AS(setsockopt_args), (sy_call_t *)setsockopt },	/* 105 = setsockopt */
	{ SYF_MPSAFE | AS(listen_args), (sy_call_t *)listen },	/* 106 = listen */
	{ 0, (sy_call_t *)nosys },			/* 107 = obsolete vtimes */
	{ compat(SYF_MPSAFE | AS(osigvec_args),sigvec) },	/* 108 = old sigvec */
	{ compat(SYF_MPSAFE | AS(osigblock_args),sigblock) },	/* 109 = old sigblock */
	{ compat(SYF_MPSAFE | AS(osigsetmask_args),sigsetmask) },	/* 110 = old sigsetmask */
	{ compat(SYF_MPSAFE | AS(osigsuspend_args),sigsuspend) },	/* 111 = old sigsuspend */
	{ compat(SYF_MPSAFE | AS(osigstack_args),sigstack) },	/* 112 = old sigstack */
	{ compat(SYF_MPSAFE | AS(orecvmsg_args),recvmsg) },	/* 113 = old recvmsg */
	{ compat(SYF_MPSAFE | AS(osendmsg_args),sendmsg) },	/* 114 = old sendmsg */
	{ 0, (sy_call_t *)nosys },			/* 115 = obsolete vtrace */
	{ SYF_MPSAFE | AS(gettimeofday_args), (sy_call_t *)gettimeofday },	/* 116 = gettimeofday */
	{ SYF_MPSAFE | AS(getrusage_args), (sy_call_t *)getrusage },	/* 117 = getrusage */
	{ SYF_MPSAFE | AS(getsockopt_args), (sy_call_t *)getsockopt },	/* 118 = getsockopt */
	{ 0, (sy_call_t *)nosys },			/* 119 = resuba */
	{ SYF_MPSAFE | AS(readv_args), (sy_call_t *)readv },	/* 120 = readv */
	{ SYF_MPSAFE | AS(writev_args), (sy_call_t *)writev },	/* 121 = writev */
	{ SYF_MPSAFE | AS(settimeofday_args), (sy_call_t *)settimeofday },	/* 122 = settimeofday */
	{ AS(fchown_args), (sy_call_t *)fchown },	/* 123 = fchown */
	{ AS(fchmod_args), (sy_call_t *)fchmod },	/* 124 = fchmod */
	{ compat(SYF_MPSAFE | AS(recvfrom_args),recvfrom) },	/* 125 = old recvfrom */
	{ SYF_MPSAFE | AS(setreuid_args), (sy_call_t *)setreuid },	/* 126 = setreuid */
	{ SYF_MPSAFE | AS(setregid_args), (sy_call_t *)setregid },	/* 127 = setregid */
	{ AS(rename_args), (sy_call_t *)rename },	/* 128 = rename */
	{ compat(AS(otruncate_args),truncate) },	/* 129 = old truncate */
	{ compat(AS(oftruncate_args),ftruncate) },	/* 130 = old ftruncate */
	{ SYF_MPSAFE | AS(flock_args), (sy_call_t *)flock },	/* 131 = flock */
	{ AS(mkfifo_args), (sy_call_t *)mkfifo },	/* 132 = mkfifo */
	{ SYF_MPSAFE | AS(sendto_args), (sy_call_t *)sendto },	/* 133 = sendto */
	{ SYF_MPSAFE | AS(shutdown_args), (sy_call_t *)shutdown },	/* 134 = shutdown */
	{ SYF_MPSAFE | AS(socketpair_args), (sy_call_t *)socketpair },	/* 135 = socketpair */
	{ AS(mkdir_args), (sy_call_t *)mkdir },		/* 136 = mkdir */
	{ AS(rmdir_args), (sy_call_t *)rmdir },		/* 137 = rmdir */
	{ AS(utimes_args), (sy_call_t *)utimes },	/* 138 = utimes */
	{ 0, (sy_call_t *)nosys },			/* 139 = obsolete 4.2 sigreturn */
	{ SYF_MPSAFE | AS(adjtime_args), (sy_call_t *)adjtime },	/* 140 = adjtime */
	{ compat(SYF_MPSAFE | AS(ogetpeername_args),getpeername) },	/* 141 = old getpeername */
	{ compat(SYF_MPSAFE | 0,gethostid) },		/* 142 = old gethostid */
	{ compat(SYF_MPSAFE | AS(osethostid_args),sethostid) },	/* 143 = old sethostid */
	{ compat(SYF_MPSAFE | AS(ogetrlimit_args),getrlimit) },	/* 144 = old getrlimit */
	{ compat(SYF_MPSAFE | AS(osetrlimit_args),setrlimit) },	/* 145 = old setrlimit */
	{ compat(SYF_MPSAFE | AS(okillpg_args),killpg) },	/* 146 = old killpg */
	{ SYF_MPSAFE | 0, (sy_call_t *)setsid },	/* 147 = setsid */
	{ AS(quotactl_args), (sy_call_t *)quotactl },	/* 148 = quotactl */
	{ compat(SYF_MPSAFE | 0,quota) },		/* 149 = old quota */
	{ compat(SYF_MPSAFE | AS(getsockname_args),getsockname) },	/* 150 = old getsockname */
	{ 0, (sy_call_t *)nosys },			/* 151 = sem_lock */
	{ 0, (sy_call_t *)nosys },			/* 152 = sem_wakeup */
	{ 0, (sy_call_t *)nosys },			/* 153 = asyncdaemon */
	{ 0, (sy_call_t *)nosys },			/* 154 = nosys */
	{ SYF_MPSAFE | AS(nfssvc_args), (sy_call_t *)nosys },	/* 155 = nfssvc */
	{ compat(AS(ogetdirentries_args),getdirentries) },	/* 156 = old getdirentries */
	{ compat4(AS(freebsd4_statfs_args),statfs) },	/* 157 = old statfs */
	{ compat4(AS(freebsd4_fstatfs_args),fstatfs) },	/* 158 = old fstatfs */
	{ 0, (sy_call_t *)nosys },			/* 159 = nosys */
	{ AS(lgetfh_args), (sy_call_t *)lgetfh },	/* 160 = lgetfh */
	{ AS(getfh_args), (sy_call_t *)getfh },		/* 161 = getfh */
	{ SYF_MPSAFE | AS(getdomainname_args), (sy_call_t *)getdomainname },	/* 162 = getdomainname */
	{ SYF_MPSAFE | AS(setdomainname_args), (sy_call_t *)setdomainname },	/* 163 = setdomainname */
	{ SYF_MPSAFE | AS(uname_args), (sy_call_t *)uname },	/* 164 = uname */
	{ SYF_MPSAFE | AS(sysarch_args), (sy_call_t *)sysarch },	/* 165 = sysarch */
	{ SYF_MPSAFE | AS(rtprio_args), (sy_call_t *)rtprio },	/* 166 = rtprio */
	{ 0, (sy_call_t *)nosys },			/* 167 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 168 = nosys */
	{ SYF_MPSAFE | AS(semsys_args), (sy_call_t *)lkmressys },	/* 169 = semsys */
	{ SYF_MPSAFE | AS(msgsys_args), (sy_call_t *)lkmressys },	/* 170 = msgsys */
	{ SYF_MPSAFE | AS(shmsys_args), (sy_call_t *)lkmressys },	/* 171 = shmsys */
	{ 0, (sy_call_t *)nosys },			/* 172 = nosys */
	{ SYF_MPSAFE | AS(pread_args), (sy_call_t *)pread },	/* 173 = pread */
	{ SYF_MPSAFE | AS(pwrite_args), (sy_call_t *)pwrite },	/* 174 = pwrite */
	{ 0, (sy_call_t *)nosys },			/* 175 = nosys */
	{ SYF_MPSAFE | AS(ntp_adjtime_args), (sy_call_t *)ntp_adjtime },	/* 176 = ntp_adjtime */
	{ 0, (sy_call_t *)nosys },			/* 177 = sfork */
	{ 0, (sy_call_t *)nosys },			/* 178 = getdescriptor */
	{ 0, (sy_call_t *)nosys },			/* 179 = setdescriptor */
	{ 0, (sy_call_t *)nosys },			/* 180 = nosys */
	{ SYF_MPSAFE | AS(setgid_args), (sy_call_t *)setgid },	/* 181 = setgid */
	{ SYF_MPSAFE | AS(setegid_args), (sy_call_t *)setegid },	/* 182 = setegid */
	{ SYF_MPSAFE | AS(seteuid_args), (sy_call_t *)seteuid },	/* 183 = seteuid */
	{ 0, (sy_call_t *)nosys },			/* 184 = lfs_bmapv */
	{ 0, (sy_call_t *)nosys },			/* 185 = lfs_markv */
	{ 0, (sy_call_t *)nosys },			/* 186 = lfs_segclean */
	{ 0, (sy_call_t *)nosys },			/* 187 = lfs_segwait */
	{ AS(stat_args), (sy_call_t *)stat },		/* 188 = stat */
	{ SYF_MPSAFE | AS(fstat_args), (sy_call_t *)fstat },	/* 189 = fstat */
	{ AS(lstat_args), (sy_call_t *)lstat },		/* 190 = lstat */
	{ AS(pathconf_args), (sy_call_t *)pathconf },	/* 191 = pathconf */
	{ SYF_MPSAFE | AS(fpathconf_args), (sy_call_t *)fpathconf },	/* 192 = fpathconf */
	{ 0, (sy_call_t *)nosys },			/* 193 = nosys */
	{ SYF_MPSAFE | AS(__getrlimit_args), (sy_call_t *)getrlimit },	/* 194 = getrlimit */
	{ SYF_MPSAFE | AS(__setrlimit_args), (sy_call_t *)setrlimit },	/* 195 = setrlimit */
	{ AS(getdirentries_args), (sy_call_t *)getdirentries },	/* 196 = getdirentries */
	{ SYF_MPSAFE | AS(mmap_args), (sy_call_t *)mmap },	/* 197 = mmap */
	{ 0, (sy_call_t *)nosys },			/* 198 = __syscall */
	{ AS(lseek_args), (sy_call_t *)lseek },		/* 199 = lseek */
	{ AS(truncate_args), (sy_call_t *)truncate },	/* 200 = truncate */
	{ AS(ftruncate_args), (sy_call_t *)ftruncate },	/* 201 = ftruncate */
	{ SYF_MPSAFE | AS(sysctl_args), (sy_call_t *)__sysctl },	/* 202 = __sysctl */
	{ SYF_MPSAFE | AS(mlock_args), (sy_call_t *)mlock },	/* 203 = mlock */
	{ SYF_MPSAFE | AS(munlock_args), (sy_call_t *)munlock },	/* 204 = munlock */
	{ AS(undelete_args), (sy_call_t *)undelete },	/* 205 = undelete */
	{ AS(futimes_args), (sy_call_t *)futimes },	/* 206 = futimes */
	{ SYF_MPSAFE | AS(getpgid_args), (sy_call_t *)getpgid },	/* 207 = getpgid */
	{ 0, (sy_call_t *)nosys },			/* 208 = newreboot */
	{ SYF_MPSAFE | AS(poll_args), (sy_call_t *)poll },	/* 209 = poll */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 210 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 211 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 212 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 213 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 214 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 215 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 216 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 217 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 218 = lkmnosys */
	{ AS(nosys_args), (sy_call_t *)lkmnosys },	/* 219 = lkmnosys */
	{ SYF_MPSAFE | AS(__semctl_args), (sy_call_t *)lkmressys },	/* 220 = __semctl */
	{ SYF_MPSAFE | AS(semget_args), (sy_call_t *)lkmressys },	/* 221 = semget */
	{ SYF_MPSAFE | AS(semop_args), (sy_call_t *)lkmressys },	/* 222 = semop */
	{ 0, (sy_call_t *)nosys },			/* 223 = semconfig */
	{ SYF_MPSAFE | AS(msgctl_args), (sy_call_t *)lkmressys },	/* 224 = msgctl */
	{ SYF_MPSAFE | AS(msgget_args), (sy_call_t *)lkmressys },	/* 225 = msgget */
	{ SYF_MPSAFE | AS(msgsnd_args), (sy_call_t *)lkmressys },	/* 226 = msgsnd */
	{ SYF_MPSAFE | AS(msgrcv_args), (sy_call_t *)lkmressys },	/* 227 = msgrcv */
	{ SYF_MPSAFE | AS(shmat_args), (sy_call_t *)lkmressys },	/* 228 = shmat */
	{ SYF_MPSAFE | AS(shmctl_args), (sy_call_t *)lkmressys },	/* 229 = shmctl */
	{ SYF_MPSAFE | AS(shmdt_args), (sy_call_t *)lkmressys },	/* 230 = shmdt */
	{ SYF_MPSAFE | AS(shmget_args), (sy_call_t *)lkmressys },	/* 231 = shmget */
	{ SYF_MPSAFE | AS(clock_gettime_args), (sy_call_t *)clock_gettime },	/* 232 = clock_gettime */
	{ SYF_MPSAFE | AS(clock_settime_args), (sy_call_t *)clock_settime },	/* 233 = clock_settime */
	{ SYF_MPSAFE | AS(clock_getres_args), (sy_call_t *)clock_getres },	/* 234 = clock_getres */
	{ 0, (sy_call_t *)nosys },			/* 235 = timer_create */
	{ 0, (sy_call_t *)nosys },			/* 236 = timer_delete */
	{ 0, (sy_call_t *)nosys },			/* 237 = timer_settime */
	{ 0, (sy_call_t *)nosys },			/* 238 = timer_gettime */
	{ 0, (sy_call_t *)nosys },			/* 239 = timer_getoverrun */
	{ SYF_MPSAFE | AS(nanosleep_args), (sy_call_t *)nanosleep },	/* 240 = nanosleep */
	{ 0, (sy_call_t *)nosys },			/* 241 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 242 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 243 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 244 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 245 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 246 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 247 = nosys */
	{ AS(ntp_gettime_args), (sy_call_t *)ntp_gettime },	/* 248 = ntp_gettime */
	{ 0, (sy_call_t *)nosys },			/* 249 = nosys */
	{ SYF_MPSAFE | AS(minherit_args), (sy_call_t *)minherit },	/* 250 = minherit */
	{ SYF_MPSAFE | AS(rfork_args), (sy_call_t *)rfork },	/* 251 = rfork */
	{ SYF_MPSAFE | AS(openbsd_poll_args), (sy_call_t *)openbsd_poll },	/* 252 = openbsd_poll */
	{ SYF_MPSAFE | 0, (sy_call_t *)issetugid },	/* 253 = issetugid */
	{ AS(lchown_args), (sy_call_t *)lchown },	/* 254 = lchown */
	{ 0, (sy_call_t *)nosys },			/* 255 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 256 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 257 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 258 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 259 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 260 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 261 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 262 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 263 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 264 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 265 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 266 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 267 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 268 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 269 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 270 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 271 = nosys */
	{ AS(getdents_args), (sy_call_t *)getdents },	/* 272 = getdents */
	{ 0, (sy_call_t *)nosys },			/* 273 = nosys */
	{ AS(lchmod_args), (sy_call_t *)lchmod },	/* 274 = lchmod */
	{ AS(lchown_args), (sy_call_t *)lchown },	/* 275 = netbsd_lchown */
	{ AS(lutimes_args), (sy_call_t *)lutimes },	/* 276 = lutimes */
	{ SYF_MPSAFE | AS(msync_args), (sy_call_t *)msync },	/* 277 = netbsd_msync */
	{ AS(nstat_args), (sy_call_t *)nstat },		/* 278 = nstat */
	{ SYF_MPSAFE | AS(nfstat_args), (sy_call_t *)nfstat },	/* 279 = nfstat */
	{ AS(nlstat_args), (sy_call_t *)nlstat },	/* 280 = nlstat */
	{ 0, (sy_call_t *)nosys },			/* 281 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 282 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 283 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 284 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 285 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 286 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 287 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 288 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 289 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 290 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 291 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 292 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 293 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 294 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 295 = nosys */
	{ 0, (sy_call_t *)nosys },			/* 296 = nosys */
	{ compat4(AS(freebsd4_fhstatfs_args),fhstatfs) },	/* 297 = old fhstatfs */
	{ AS(fhopen_args), (sy_call_t *)fhopen },	/* 298 = fhopen */
	{ AS(fhstat_args), (sy_call_t *)fhstat },	/* 299 = fhstat */
	{ SYF_MPSAFE | AS(modnext_args), (sy_call_t *)modnext },	/* 300 = modnext */
	{ SYF_MPSAFE | AS(modstat_args), (sy_call_t *)modstat },	/* 301 = modstat */
	{ SYF_MPSAFE | AS(modfnext_args), (sy_call_t *)modfnext },	/* 302 = modfnext */
	{ SYF_MPSAFE | AS(modfind_args), (sy_call_t *)modfind },	/* 303 = modfind */
	{ SYF_MPSAFE | AS(kldload_args), (sy_call_t *)kldload },	/* 304 = kldload */
	{ SYF_MPSAFE | AS(kldunload_args), (sy_call_t *)kldunload },	/* 305 = kldunload */
	{ SYF_MPSAFE | AS(kldfind_args), (sy_call_t *)kldfind },	/* 306 = kldfind */
	{ SYF_MPSAFE | AS(kldnext_args), (sy_call_t *)kldnext },	/* 307 = kldnext */
	{ SYF_MPSAFE | AS(kldstat_args), (sy_call_t *)kldstat },	/* 308 = kldstat */
	{ SYF_MPSAFE | AS(kldfirstmod_args), (sy_call_t *)kldfirstmod },	/* 309 = kldfirstmod */
	{ SYF_MPSAFE | AS(getsid_args), (sy_call_t *)getsid },	/* 310 = getsid */
	{ SYF_MPSAFE | AS(setresuid_args), (sy_call_t *)setresuid },	/* 311 = setresuid */
	{ SYF_MPSAFE | AS(setresgid_args), (sy_call_t *)setresgid },	/* 312 = setresgid */
	{ 0, (sy_call_t *)nosys },			/* 313 = obsolete signanosleep */
	{ AS(aio_return_args), (sy_call_t *)lkmressys },	/* 314 = aio_return */
	{ AS(aio_suspend_args), (sy_call_t *)lkmressys },	/* 315 = aio_suspend */
	{ AS(aio_cancel_args), (sy_call_t *)lkmressys },	/* 316 = aio_cancel */
	{ AS(aio_error_args), (sy_call_t *)lkmressys },	/* 317 = aio_error */
	{ AS(aio_read_args), (sy_call_t *)lkmressys },	/* 318 = aio_read */
	{ AS(aio_write_args), (sy_call_t *)lkmressys },	/* 319 = aio_write */
	{ AS(lio_listio_args), (sy_call_t *)lkmressys },	/* 320 = lio_listio */
	{ SYF_MPSAFE | 0, (sy_call_t *)yield },		/* 321 = yield */
	{ 0, (sy_call_t *)nosys },			/* 322 = obsolete thr_sleep */
	{ 0, (sy_call_t *)nosys },			/* 323 = obsolete thr_wakeup */
	{ SYF_MPSAFE | AS(mlockall_args), (sy_call_t *)mlockall },	/* 324 = mlockall */
	{ SYF_MPSAFE | 0, (sy_call_t *)munlockall },	/* 325 = munlockall */
	{ AS(__getcwd_args), (sy_call_t *)__getcwd },	/* 326 = __getcwd */
	{ SYF_MPSAFE | AS(sched_setparam_args), (sy_call_t *)sched_setparam },	/* 327 = sched_setparam */
	{ SYF_MPSAFE | AS(sched_getparam_args), (sy_call_t *)sched_getparam },	/* 328 = sched_getparam */
	{ SYF_MPSAFE | AS(sched_setscheduler_args), (sy_call_t *)sched_setscheduler },	/* 329 = sched_setscheduler */
	{ SYF_MPSAFE | AS(sched_getscheduler_args), (sy_call_t *)sched_getscheduler },	/* 330 = sched_getscheduler */
	{ SYF_MPSAFE | 0, (sy_call_t *)sched_yield },	/* 331 = sched_yield */
	{ SYF_MPSAFE | AS(sched_get_priority_max_args), (sy_call_t *)sched_get_priority_max },	/* 332 = sched_get_priority_max */
	{ SYF_MPSAFE | AS(sched_get_priority_min_args), (sy_call_t *)sched_get_priority_min },	/* 333 = sched_get_priority_min */
	{ SYF_MPSAFE | AS(sched_rr_get_interval_args), (sy_call_t *)sched_rr_get_interval },	/* 334 = sched_rr_get_interval */
	{ SYF_MPSAFE | AS(utrace_args), (sy_call_t *)utrace },	/* 335 = utrace */
	{ compat4(SYF_MPSAFE | AS(freebsd4_sendfile_args),sendfile) },	/* 336 = old sendfile */
	{ AS(kldsym_args), (sy_call_t *)kldsym },	/* 337 = kldsym */
	{ SYF_MPSAFE | AS(jail_args), (sy_call_t *)jail },	/* 338 = jail */
	{ 0, (sy_call_t *)nosys },			/* 339 = pioctl */
	{ SYF_MPSAFE | AS(sigprocmask_args), (sy_call_t *)sigprocmask },	/* 340 = sigprocmask */
	{ SYF_MPSAFE | AS(sigsuspend_args), (sy_call_t *)sigsuspend },	/* 341 = sigsuspend */
	{ compat4(SYF_MPSAFE | AS(freebsd4_sigaction_args),sigaction) },	/* 342 = old sigaction */
	{ SYF_MPSAFE | AS(sigpending_args), (sy_call_t *)sigpending },	/* 343 = sigpending */
	{ compat4(SYF_MPSAFE | AS(freebsd4_sigreturn_args),sigreturn) },	/* 344 = old sigreturn */
	{ SYF_MPSAFE | AS(sigtimedwait_args), (sy_call_t *)sigtimedwait },	/* 345 = sigtimedwait */
	{ SYF_MPSAFE | AS(sigwaitinfo_args), (sy_call_t *)sigwaitinfo },	/* 346 = sigwaitinfo */
	{ SYF_MPSAFE | AS(__acl_get_file_args), (sy_call_t *)__acl_get_file },	/* 347 = __acl_get_file */
	{ SYF_MPSAFE | AS(__acl_set_file_args), (sy_call_t *)__acl_set_file },	/* 348 = __acl_set_file */
	{ SYF_MPSAFE | AS(__acl_get_fd_args), (sy_call_t *)__acl_get_fd },	/* 349 = __acl_get_fd */
	{ SYF_MPSAFE | AS(__acl_set_fd_args), (sy_call_t *)__acl_set_fd },	/* 350 = __acl_set_fd */
	{ SYF_MPSAFE | AS(__acl_delete_file_args), (sy_call_t *)__acl_delete_file },	/* 351 = __acl_delete_file */
	{ SYF_MPSAFE | AS(__acl_delete_fd_args), (sy_call_t *)__acl_delete_fd },	/* 352 = __acl_delete_fd */
	{ SYF_MPSAFE | AS(__acl_aclcheck_file_args), (sy_call_t *)__acl_aclcheck_file },	/* 353 = __acl_aclcheck_file */
	{ SYF_MPSAFE | AS(__acl_aclcheck_fd_args), (sy_call_t *)__acl_aclcheck_fd },	/* 354 = __acl_aclcheck_fd */
	{ AS(extattrctl_args), (sy_call_t *)extattrctl },	/* 355 = extattrctl */
	{ AS(extattr_set_file_args), (sy_call_t *)extattr_set_file },	/* 356 = extattr_set_file */
	{ AS(extattr_get_file_args), (sy_call_t *)extattr_get_file },	/* 357 = extattr_get_file */
	{ AS(extattr_delete_file_args), (sy_call_t *)extattr_delete_file },	/* 358 = extattr_delete_file */
	{ AS(aio_waitcomplete_args), (sy_call_t *)lkmressys },	/* 359 = aio_waitcomplete */
	{ SYF_MPSAFE | AS(getresuid_args), (sy_call_t *)getresuid },	/* 360 = getresuid */
	{ SYF_MPSAFE | AS(getresgid_args), (sy_call_t *)getresgid },	/* 361 = getresgid */
	{ SYF_MPSAFE | 0, (sy_call_t *)kqueue },	/* 362 = kqueue */
	{ SYF_MPSAFE | AS(kevent_args), (sy_call_t *)kevent },	/* 363 = kevent */
	{ 0, (sy_call_t *)nosys },			/* 364 = __cap_get_proc */
	{ 0, (sy_call_t *)nosys },			/* 365 = __cap_set_proc */
	{ 0, (sy_call_t *)nosys },			/* 366 = __cap_get_fd */
	{ 0, (sy_call_t *)nosys },			/* 367 = __cap_get_file */
	{ 0, (sy_call_t *)nosys },			/* 368 = __cap_set_fd */
	{ 0, (sy_call_t *)nosys },			/* 369 = __cap_set_file */
	{ AS(nosys_args), (sy_call_t *)lkmressys },	/* 370 = lkmressys */
	{ AS(extattr_set_fd_args), (sy_call_t *)extattr_set_fd },	/* 371 = extattr_set_fd */
	{ AS(extattr_get_fd_args), (sy_call_t *)extattr_get_fd },	/* 372 = extattr_get_fd */
	{ AS(extattr_delete_fd_args), (sy_call_t *)extattr_delete_fd },	/* 373 = extattr_delete_fd */
	{ SYF_MPSAFE | AS(__setugid_args), (sy_call_t *)__setugid },	/* 374 = __setugid */
	{ AS(nfsclnt_args), (sy_call_t *)nosys },	/* 375 = nfsclnt */
	{ AS(eaccess_args), (sy_call_t *)eaccess },	/* 376 = eaccess */
	{ 0, (sy_call_t *)nosys },			/* 377 = afs_syscall */
	{ AS(nmount_args), (sy_call_t *)nmount },	/* 378 = nmount */
	{ SYF_MPSAFE | 0, (sy_call_t *)kse_exit },	/* 379 = kse_exit */
	{ SYF_MPSAFE | AS(kse_wakeup_args), (sy_call_t *)kse_wakeup },	/* 380 = kse_wakeup */
	{ SYF_MPSAFE | AS(kse_create_args), (sy_call_t *)kse_create },	/* 381 = kse_create */
	{ SYF_MPSAFE | AS(kse_thr_interrupt_args), (sy_call_t *)kse_thr_interrupt },	/* 382 = kse_thr_interrupt */
	{ SYF_MPSAFE | AS(kse_release_args), (sy_call_t *)kse_release },	/* 383 = kse_release */
	{ SYF_MPSAFE | AS(__mac_get_proc_args), (sy_call_t *)__mac_get_proc },	/* 384 = __mac_get_proc */
	{ SYF_MPSAFE | AS(__mac_set_proc_args), (sy_call_t *)__mac_set_proc },	/* 385 = __mac_set_proc */
	{ SYF_MPSAFE | AS(__mac_get_fd_args), (sy_call_t *)__mac_get_fd },	/* 386 = __mac_get_fd */
	{ SYF_MPSAFE | AS(__mac_get_file_args), (sy_call_t *)__mac_get_file },	/* 387 = __mac_get_file */
	{ SYF_MPSAFE | AS(__mac_set_fd_args), (sy_call_t *)__mac_set_fd },	/* 388 = __mac_set_fd */
	{ SYF_MPSAFE | AS(__mac_set_file_args), (sy_call_t *)__mac_set_file },	/* 389 = __mac_set_file */
	{ AS(kenv_args), (sy_call_t *)kenv },		/* 390 = kenv */
	{ AS(lchflags_args), (sy_call_t *)lchflags },	/* 391 = lchflags */
	{ AS(uuidgen_args), (sy_call_t *)uuidgen },	/* 392 = uuidgen */
	{ SYF_MPSAFE | AS(sendfile_args), (sy_call_t *)sendfile },	/* 393 = sendfile */
	{ SYF_MPSAFE | AS(mac_syscall_args), (sy_call_t *)mac_syscall },	/* 394 = mac_syscall */
	{ AS(getfsstat_args), (sy_call_t *)getfsstat },	/* 395 = getfsstat */
	{ AS(statfs_args), (sy_call_t *)statfs },	/* 396 = statfs */
	{ AS(fstatfs_args), (sy_call_t *)fstatfs },	/* 397 = fstatfs */
	{ AS(fhstatfs_args), (sy_call_t *)fhstatfs },	/* 398 = fhstatfs */
	{ 0, (sy_call_t *)nosys },			/* 399 = nosys */
	{ SYF_MPSAFE | AS(ksem_close_args), (sy_call_t *)lkmressys },	/* 400 = ksem_close */
	{ SYF_MPSAFE | AS(ksem_post_args), (sy_call_t *)lkmressys },	/* 401 = ksem_post */
	{ SYF_MPSAFE | AS(ksem_wait_args), (sy_call_t *)lkmressys },	/* 402 = ksem_wait */
	{ SYF_MPSAFE | AS(ksem_trywait_args), (sy_call_t *)lkmressys },	/* 403 = ksem_trywait */
	{ SYF_MPSAFE | AS(ksem_init_args), (sy_call_t *)lkmressys },	/* 404 = ksem_init */
	{ SYF_MPSAFE | AS(ksem_open_args), (sy_call_t *)lkmressys },	/* 405 = ksem_open */
	{ SYF_MPSAFE | AS(ksem_unlink_args), (sy_call_t *)lkmressys },	/* 406 = ksem_unlink */
	{ SYF_MPSAFE | AS(ksem_getvalue_args), (sy_call_t *)lkmressys },	/* 407 = ksem_getvalue */
	{ SYF_MPSAFE | AS(ksem_destroy_args), (sy_call_t *)lkmressys },	/* 408 = ksem_destroy */
	{ SYF_MPSAFE | AS(__mac_get_pid_args), (sy_call_t *)__mac_get_pid },	/* 409 = __mac_get_pid */
	{ SYF_MPSAFE | AS(__mac_get_link_args), (sy_call_t *)__mac_get_link },	/* 410 = __mac_get_link */
	{ SYF_MPSAFE | AS(__mac_set_link_args), (sy_call_t *)__mac_set_link },	/* 411 = __mac_set_link */
	{ AS(extattr_set_link_args), (sy_call_t *)extattr_set_link },	/* 412 = extattr_set_link */
	{ AS(extattr_get_link_args), (sy_call_t *)extattr_get_link },	/* 413 = extattr_get_link */
	{ AS(extattr_delete_link_args), (sy_call_t *)extattr_delete_link },	/* 414 = extattr_delete_link */
	{ SYF_MPSAFE | AS(__mac_execve_args), (sy_call_t *)__mac_execve },	/* 415 = __mac_execve */
	{ SYF_MPSAFE | AS(sigaction_args), (sy_call_t *)sigaction },	/* 416 = sigaction */
	{ SYF_MPSAFE | AS(sigreturn_args), (sy_call_t *)sigreturn },	/* 417 = sigreturn */
	{ 0, (sy_call_t *)nosys },			/* 418 = __xstat */
	{ 0, (sy_call_t *)nosys },			/* 419 = __xfstat */
	{ 0, (sy_call_t *)nosys },			/* 420 = __xlstat */
	{ SYF_MPSAFE | AS(getcontext_args), (sy_call_t *)getcontext },	/* 421 = getcontext */
	{ SYF_MPSAFE | AS(setcontext_args), (sy_call_t *)setcontext },	/* 422 = setcontext */
	{ SYF_MPSAFE | AS(swapcontext_args), (sy_call_t *)swapcontext },	/* 423 = swapcontext */
	{ SYF_MPSAFE | AS(swapoff_args), (sy_call_t *)swapoff },	/* 424 = swapoff */
	{ SYF_MPSAFE | AS(__acl_get_link_args), (sy_call_t *)__acl_get_link },	/* 425 = __acl_get_link */
	{ SYF_MPSAFE | AS(__acl_set_link_args), (sy_call_t *)__acl_set_link },	/* 426 = __acl_set_link */
	{ SYF_MPSAFE | AS(__acl_delete_link_args), (sy_call_t *)__acl_delete_link },	/* 427 = __acl_delete_link */
	{ SYF_MPSAFE | AS(__acl_aclcheck_link_args), (sy_call_t *)__acl_aclcheck_link },	/* 428 = __acl_aclcheck_link */
	{ SYF_MPSAFE | AS(sigwait_args), (sy_call_t *)sigwait },	/* 429 = sigwait */
	{ SYF_MPSAFE | AS(thr_create_args), (sy_call_t *)thr_create },	/* 430 = thr_create */
	{ SYF_MPSAFE | AS(thr_exit_args), (sy_call_t *)thr_exit },	/* 431 = thr_exit */
	{ SYF_MPSAFE | AS(thr_self_args), (sy_call_t *)thr_self },	/* 432 = thr_self */
	{ SYF_MPSAFE | AS(thr_kill_args), (sy_call_t *)thr_kill },	/* 433 = thr_kill */
	{ SYF_MPSAFE | AS(_umtx_lock_args), (sy_call_t *)_umtx_lock },	/* 434 = _umtx_lock */
	{ SYF_MPSAFE | AS(_umtx_unlock_args), (sy_call_t *)_umtx_unlock },	/* 435 = _umtx_unlock */
	{ SYF_MPSAFE | AS(jail_attach_args), (sy_call_t *)jail_attach },	/* 436 = jail_attach */
	{ AS(extattr_list_fd_args), (sy_call_t *)extattr_list_fd },	/* 437 = extattr_list_fd */
	{ AS(extattr_list_file_args), (sy_call_t *)extattr_list_file },	/* 438 = extattr_list_file */
	{ AS(extattr_list_link_args), (sy_call_t *)extattr_list_link },	/* 439 = extattr_list_link */
	{ SYF_MPSAFE | AS(kse_switchin_args), (sy_call_t *)kse_switchin },	/* 440 = kse_switchin */
	{ SYF_MPSAFE | AS(ksem_timedwait_args), (sy_call_t *)lkmressys },	/* 441 = ksem_timedwait */
	{ SYF_MPSAFE | AS(thr_suspend_args), (sy_call_t *)thr_suspend },	/* 442 = thr_suspend */
	{ SYF_MPSAFE | AS(thr_wake_args), (sy_call_t *)thr_wake },	/* 443 = thr_wake */
	{ SYF_MPSAFE | AS(kldunloadf_args), (sy_call_t *)kldunloadf },	/* 444 = kldunloadf */
	{ SYF_MPSAFE | AS(audit_args), (sy_call_t *)lkmressys },	/* 445 = audit */
	{ SYF_MPSAFE | AS(auditon_args), (sy_call_t *)lkmressys },	/* 446 = auditon */
	{ SYF_MPSAFE | AS(getauid_args), (sy_call_t *)lkmressys },	/* 447 = getauid */
	{ SYF_MPSAFE | AS(setauid_args), (sy_call_t *)lkmressys },	/* 448 = setauid */
	{ SYF_MPSAFE | AS(getaudit_args), (sy_call_t *)lkmressys },	/* 449 = getaudit */
	{ SYF_MPSAFE | AS(setaudit_args), (sy_call_t *)lkmressys },	/* 450 = setaudit */
	{ SYF_MPSAFE | AS(getaudit_addr_args), (sy_call_t *)lkmressys },	/* 451 = getaudit_addr */
	{ SYF_MPSAFE | AS(setaudit_addr_args), (sy_call_t *)lkmressys },	/* 452 = setaudit_addr */
	{ SYF_MPSAFE | AS(auditctl_args), (sy_call_t *)lkmressys },	/* 453 = auditctl */
};
