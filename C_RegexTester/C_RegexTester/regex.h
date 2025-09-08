#pragma once
#include <stdlib.h>

typedef void* regex_loop;

typedef struct regex_t {
	regex_loop* loops;
	size_t elements_count;
} regex;

void create_regex(regex* out);
void delete_regex(regex* it);