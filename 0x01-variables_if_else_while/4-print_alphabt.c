#include <stdio.h>

/**
 * main - Start of program
 *
 * Return: Always (0);
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			printf("%c", letter);
		}
	}

	printf("\n");

	return (0);
}

