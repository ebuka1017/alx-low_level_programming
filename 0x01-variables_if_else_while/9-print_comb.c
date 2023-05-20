#include <stdio.h>

/**
 * main - start program
 *
 * Return: always (0) success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);

		if (i < 9)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}

