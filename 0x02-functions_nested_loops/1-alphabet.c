#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: always (0) success
 */


void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

	return (0);
}

