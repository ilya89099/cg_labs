/* Generated by configure */
#include <unicode/utypes.h>
#include <unicode/ucol.h>
#include <unicode/ustring.h>
int main(int argc, char **argv)
{
    (void)argc; (void)argv;
    /* BEGIN TEST: */
    UErrorCode status = U_ZERO_ERROR;
    UCollator *collator = ucol_open("ru_RU", &status);
    if (!U_FAILURE(status))
        ucol_close(collator);
    /* END TEST */
    return 0;
}
