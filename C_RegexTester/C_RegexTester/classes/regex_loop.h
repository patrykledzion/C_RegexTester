#pragma once

typedef void* regex_part;

typedef struct regex_loop_t {
	regex_part* parts;
	int repeat;
} regex_loop;

int regex_loop_create(regex_loop* out);
void regex_loop_delete(regex_loop* it);
