/* Generated by configure */
#include <zlib.h>
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    z_streamp stream = 0;
    (void) zlibVersion();
    (void) compress2(0, 0, 0, 0, 1);  // compress2 was added in zlib version 1.0.8
    /* END TEST */
    return 0;
}
