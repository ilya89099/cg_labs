/* Generated by configure */
#include <xcb/xcb.h>
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    int primaryScreen = 0;
    (void)xcb_connect("", &primaryScreen);
    /* XCB_PACKED define was added in libxcb 1.11 */
    #ifdef XCB_PACKED
        return 0;
    #else
        return -1;
    #endif
    /* END TEST */
    return 0;
}
