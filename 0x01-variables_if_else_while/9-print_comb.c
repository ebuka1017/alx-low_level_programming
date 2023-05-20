#include <stdio.h>

/**
 * main - start program
 *
 * Return: always (0) success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d %d, ", i, j);
		}
	}

	printf("\n");

	return (0);
}

