#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: value entered
 *
 * Return: last value of n
 */

int print_last_digit(int n)
{
	_putchar((_abs(n) % 10) + '0');

	return (_abs(n) % 10);
}

