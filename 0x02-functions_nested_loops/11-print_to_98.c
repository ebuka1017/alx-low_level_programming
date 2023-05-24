#include "main.h"

/**
 * print_to_98 - counts up from a given value n to 98
 *
 *@n: count starts here
 *
 * Return: Always (0)
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
}

