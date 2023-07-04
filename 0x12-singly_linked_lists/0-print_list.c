#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of list_t
 * @h: pointer to the list head
 *
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
	    printf("[0] (nil)\n");
	    
	    return (count);
	}

	printf("[");

	while (h != NULL)
	{
	if (h->str != NULL)
	{
		printf("%s", h->str);
	}
	else
	{
		printf("[0] (nil)");
	}

	count++;

	h = h->next;

	if (h != NULL)
	{
		printf(", ");
	}
	}
	printf("]\n");

	return (count);
}
