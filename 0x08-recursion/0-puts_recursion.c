#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: string
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(str + 1);
	}

	_putchar('\n');
}

