#include "main.h"

/**
 * print_line - prints straight line in the terminal
 *
 *@n: argument
 *
 * Return: Always (0) success
 *
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}


