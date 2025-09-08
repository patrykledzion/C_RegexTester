#include "regex.h"

void create_regex(regex* out)
{
	if (out == NULL)return;
	out->elements_count = 0;
	out->loops = NULL;
}

void delete_regex(regex* it)
{
	if (it == NULL)return;
	if (it->loops != NULL)free(it->loops);
	it->elements_count = 0;
}