#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: points to beginning of array
 * @n: no of elements in array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("\n");
}



