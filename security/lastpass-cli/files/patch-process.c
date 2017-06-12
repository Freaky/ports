--- process.c.orig	2017-06-07 19:41:30 UTC
+++ process.c
@@ -48,6 +48,9 @@
 #include <libproc.h>
 #include <sys/ptrace.h>
 #define USE_PTRACE
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
+#include <sys/param.h>
+#include <sys/sysctl.h>
 #elif defined(__OpenBSD__)
 #include <sys/param.h>
 #include <sys/proc.h>
@@ -73,17 +76,11 @@ static void ptrace(__attribute__((unused
 #endif
 
 
-#if defined(__linux__) || defined(__CYGWIN__) || defined(__NetBSD__)
-#define DEVPROC_NAME "exe"
-#elif defined(__FreeBSD__) || defined(__DragonFly__)
-#define DEVPROC_NAME "file"
-#endif
-
-#ifdef DEVPROC_NAME
+#if defined(__linux__) || defined(__CYGWIN__) || (defined(__NetBSD__) && !defined(KERN_PROC_PATHNAME))
 static int pid_to_cmd(pid_t pid, char *cmd, size_t cmd_size)
 {
 	_cleanup_free_ char *proc;
-	xasprintf(&proc, "/proc/%lu/" DEVPROC_NAME, (unsigned long)pid);
+	xasprintf(&proc, "/proc/%lu/exe", (unsigned long)pid);
 	return readlink(proc, cmd, cmd_size - 1);
 }
 #elif defined(__APPLE__) && defined(__MACH__)
@@ -93,6 +90,13 @@ static int pid_to_cmd(pid_t pid, char *c
 	result = proc_pidpath(pid, cmd, cmd_size);
 	return (result <= 0) ? -1 : 0;
 }
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
+static int pid_to_cmd(pid_t pid, char *cmd, size_t cmd_size)
+{
+	int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, pid };
+
+	return sysctl(mib, 4, cmd, &cmd_size, NULL, 0);
+}
 #elif defined(__OpenBSD__)
 static int pid_to_cmd(pid_t pid, char *cmd, size_t cmd_size)
 {
