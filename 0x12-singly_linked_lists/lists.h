#ifndef LISTS_H
#define LISTS_H

size_t print_list(const list_t *h);


typedef struct list_t{
	char *str;
	struct list_t *next;
} list_t;

#endif

