/* Generated by configure */
#define _GNU_SOURCE 1
#include <sys/types.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    int pipes[2];
    (void) pipe2(pipes, O_CLOEXEC | O_NONBLOCK);
    (void) fcntl(0, F_DUPFD_CLOEXEC, 0);
    (void) dup3(0, 3, O_CLOEXEC);
    #if defined(__NetBSD__)
    (void) paccept(0, 0, 0, NULL, SOCK_CLOEXEC | SOCK_NONBLOCK);
    #else
    (void) accept4(0, 0, 0, SOCK_CLOEXEC | SOCK_NONBLOCK);
    #endif
    /* END TEST */
    return 0;
}
