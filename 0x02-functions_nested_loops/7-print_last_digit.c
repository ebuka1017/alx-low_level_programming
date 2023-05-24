#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: value entered
 *
 * Return: last value of n
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
		last_digit = n % 10;
	}
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}

