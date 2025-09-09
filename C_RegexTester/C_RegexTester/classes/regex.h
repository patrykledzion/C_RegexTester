#pragma once
#include <stdlib.h>
#include "regex_loop.h"

typedef struct regex_t {
	regex_loop* loops;
	size_t elements_count;
} regex;

void regex_create(regex* out);
void regex_delete(regex* it);

regex* regex_new();
void regex_free(regex* it);

int regex_add_loop(regex* it, regex_loop element);