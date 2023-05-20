#include <stdio.h>

/**
 * main - start program
 *
 * Return: always (0) success
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		printf("%c", letter);
	}

	printf("\n");

	return (0);
}

