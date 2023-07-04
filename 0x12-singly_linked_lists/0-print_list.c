#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_h *current = h;

	while (current != NULL)
	{
		printf("[%zu] %s\n", count, current->str);
		count++;
		current = current->next;
	}

	return (count);
}

