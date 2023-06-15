#include "main.h"

/**
 * main - start of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			_putchar(argv[0][i]);
		}

		_putchar('\n');
	}

	return (0);
}

