/* Generated by configure */
#define _ATFILE_SOURCE 1
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    linkat(AT_FDCWD, "foo", AT_FDCWD, "bar", AT_SYMLINK_FOLLOW);
    /* END TEST */
    return 0;
}