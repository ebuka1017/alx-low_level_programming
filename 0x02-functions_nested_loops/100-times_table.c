#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 *@n: count starts from here
 *
 * Return: Always (0) success
 */

void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < n; j++)
		{
			product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			if (product < 10 && j != 0)
				_putchar(' ');

			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(product + '0');
			}

		}

		_putchar('\n');
	}
}

