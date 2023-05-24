#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: value entered
 *
 * Return: last value of n
 */

int print_last_digit(int)
{
	int n, last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
		_putchar('-');
	}
	else
	{
		last_digit = n % 10;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}

