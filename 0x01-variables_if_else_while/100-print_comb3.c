#include <stdio.h>

/**
 * main - start program
 *
 * Return: always (0) success
 */

int main(void)
{
	int i, j;
	int first = 1;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (!first)
			{
				putchar(',');
				putchar(' ');
			}

			putchar('0' + i);
			putchar('0' + j);

			first = 0;
		}
	}

	putchar('\n');

	return (0);
}

