#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: var 1
 * @b: var 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

