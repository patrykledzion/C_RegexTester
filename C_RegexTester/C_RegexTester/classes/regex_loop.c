#include "regex_loop.h"
#include <stdlib.h>

int regex_loop_create(regex_loop* out)
{
    if (out == NULL)return 0;
    out->repeat = 0;
    out->parts = NULL;
}

void regex_loop_delete(regex_loop* it)
{
    if (it->parts != NULL)free(it->parts);
    it->repeat = 0;
}
