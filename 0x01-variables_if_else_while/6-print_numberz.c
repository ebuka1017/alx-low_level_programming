#include <stdio.h>

/**
 * main - Start of the program
 *
 * Return: always (0) success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar("%d", num);
	}

	putchar("\n");

	return (0);
}

