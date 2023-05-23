#include "main.h"

/**
 * print_sign - print sign of an int
 *
 * @n: character to compare
 *
 * Return: (1) if positive, (-1) if negative, & (0) if char is 0
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');

		return (-1);
	}
	else
	{
		_putchar(0);
		_putchar(',');
		_putchar(' ');

		return (0);
	}
}


