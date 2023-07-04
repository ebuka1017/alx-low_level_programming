#ifndef LISTS_H
#define LISTS_H

typedef struct list_t
{
	char *str;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif

