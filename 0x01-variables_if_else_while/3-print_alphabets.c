#include <stdio.h>

/**
 * main - Start of program
 *
 * Return: Always return (0)
 */

int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		printf("%c", lower);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		printf("%c", upper);
	}

	printf("\n");

	return (0);
}

