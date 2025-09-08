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

int regex_add_loop(regex* it, regex_loop element)
{
	/*
		return value: 1 - ok, 0 - error
	*/
	if (it == NULL)return 0;
	
	if (it->loops == NULL)
	{
		it->loops = malloc(sizeof(regex_loop));
		if (it->loops == NULL)return 0;
	}
	else {
		regex_loop* new_loops = realloc(it->loops, it->elements_count + 1);
		if (new_loops == NULL)return 0;
		it->loops = new_loops;
	}

	it->loops[it->elements_count] = element;
	it->elements_count++;

	return 1;
}
