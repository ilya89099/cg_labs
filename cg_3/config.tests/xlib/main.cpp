/* Generated by configure */
#include <X11/Xlib.h>
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    Display *d = XOpenDisplay(NULL);
    XCloseDisplay(d);
    /* END TEST */
    return 0;
}
