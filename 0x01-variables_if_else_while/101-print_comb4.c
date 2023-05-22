#include <stdio.h>

/**
 * main - start program
 *
 * Return: always (0) success
 */

int main(void)
{
	int i, j, k;
	int first = 1;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = i + 1; k <= 9; k++)
			{
				if (!first)
				{
					putchar(',');
					putchar(' ');
				}

				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				first = 0;
			}
		}
	}

	putchar('\n');

	return (0);
}
