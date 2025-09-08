#include "regex.h"

void regex_create(regex* out)
{
	if (out == NULL)return;
	out->elements_count = 0;
	out->loops = NULL;
}

void regex_delete(regex* it)
{
	if (it == NULL)return;
	if (it->loops != NULL)free(it->loops);
	it->elements_count = 0;
}