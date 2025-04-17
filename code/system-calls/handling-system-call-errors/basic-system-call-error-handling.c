#include <stdio.h>
#include <fcntl.h>  // File control options. Used for the `open` system call. https://www.man7.org/linux/man-pages/man0/fcntl.h.0p.html
#include <unistd.h> // Used for `close()`
#include <errno.h>  // Number of last error. Used for the `errno` variable. See https://man7.org/linux/man-pages/man3/errno.3.html and https://www.gnu.org/software/libc/manual/html_node/Error-Codes.html
#include <stdlib.h> // Use for `exit()`
#include <string.h> // Used for `strerror()`

int main() {
  static char *ename[] = {
    "",
    "EPERM", "ENOENT", "ESRCH", "EINTR", "EIO", "ENXIO", "E2BIG",
    "ENOEXEC", "EBADF", "ECHILD", "EAGAIN/EWOULDBLOCK", "ENOMEM",
    "EACCES", "EFAULT", "ENOTBLK", "EBUSY", "EEXIST", "EXDEV",
    "ENODEV", "ENOTDIR", "EISDIR", "EINVAL", "ENFILE", "EMFILE",
    "ENOTTY", "ETXTBSY", "EFBIG", "ENOSPC", "ESPIPE", "EROFS",
    "EMLINK", "EPIPE", "EDOM", "ERANGE", "EDEADLK/EDEADLOCK",
    "ENAMETOOLONG", "ENOLCK", "ENOSYS", "ENOTEMPTY", "ELOOP", "",
    "ENOMSG", "EIDRM", "ECHRNG", "EL2NSYNC", "EL3HLT", "EL3RST",
    "ELNRNG", "EUNATCH", "ENOCSI", "EL2HLT", "EBADE", "EBADR",
    "EXFULL", "ENOANO", "EBADRQC", "EBADSLT", "", "EBFONT", "ENOSTR",
    "ENODATA", "ETIME", "ENOSR", "ENONET", "ENOPKG", "EREMOTE",
    "ENOLINK", "EADV", "ESRMNT", "ECOMM", "EPROTO", "EMULTIHOP",
    "EDOTDOT", "EBADMSG", "EOVERFLOW", "ENOTUNIQ", "EBADFD",
    "EREMCHG", "ELIBACC", "ELIBBAD", "ELIBSCN", "ELIBMAX",
    "ELIBEXEC", "EILSEQ", "ERESTART", "ESTRPIPE", "EUSERS",
    "ENOTSOCK", "EDESTADDRREQ", "EMSGSIZE", "EPROTOTYPE",
    "ENOPROTOOPT", "EPROTONOSUPPORT", "ESOCKTNOSUPPORT",
    "EOPNOTSUPP/ENOTSUP", "EPFNOSUPPORT", "EAFNOSUPPORT",
    "EADDRINUSE", "EADDRNOTAVAIL", "ENETDOWN", "ENETUNREACH",
    "ENETRESET", "ECONNABORTED", "ECONNRESET", "ENOBUFS", "EISCONN",
    "ENOTCONN", "ESHUTDOWN", "ETOOMANYREFS", "ETIMEDOUT",
    "ECONNREFUSED", "EHOSTDOWN", "EHOSTUNREACH", "EALREADY",
    "EINPROGRESS", "ESTALE", "EUCLEAN", "ENOTNAM", "ENAVAIL",
    "EISNAM", "EREMOTEIO", "EDQUOT", "ENOMEDIUM", "EMEDIUMTYPE",
    "ECANCELED", "ENOKEY", "EKEYEXPIRED", "EKEYREVOKED",
    "EKEYREJECTED", "EOWNERDEAD", "ENOTRECOVERABLE", "ERFKILL"
};

  /*
   * The open() system call either opens an existing file or creates and opens a new one. In this case, we’ll open
   * `file.txt` with read-only access. Suppose `file.txt` didn’t exist. We could create it by adding the bitmask
   * constant O_CREAT, as follows: O_RDONLY | O_CREAT. These are defined in `fcntl.h`.
   */
  const int fd = open("file.txt", O_RDONLY);

  /*
   * The value in `errno` is significant only when the return value of a system call or a function call indicates an
   * error. Most system calls return -1 on error, while most library functions return NULL or -1. A function that
   * succeeds is allowed to change `errno`, and its value is never set to zero by any system call or library function.
   *
   * Read more at https://www.man7.org/linux/man-pages/man3/errno.3.html
   */
  printf("The current value of errno is %d, which translates to %s\n", errno, ename[errno]);

  if (-1 == fd) {
    printf("The error number thrown is %s\n", ename[errno]);
    printf("strerror() returns %s\n", strerror(errno));
    perror("Error opening file");

    exit(EXIT_FAILURE);
  }

  if (-1 == close(fd)) {
    perror("Error closing file");
    printf("The value of errno is %s\n", ename[errno]);
    printf("strerror() returns %s\n", strerror(errno));

    exit(EXIT_FAILURE);
  }

  return 0;
}
