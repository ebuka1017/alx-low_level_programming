#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * print_to_98 - prints from a given number n to 98
 *
 * @n: count starts from here
 *
 * Return: always (0) success
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}

	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

