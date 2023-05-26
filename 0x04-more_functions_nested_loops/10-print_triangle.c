#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: size
 *
 * Return: always 0
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = height - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
