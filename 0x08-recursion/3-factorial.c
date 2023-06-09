#include "main.h"

/**
 * factorial - prints factorial of a given number
 *
 * @n: given number
 *
 * Return: factorial or  (-1) to indicate error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

