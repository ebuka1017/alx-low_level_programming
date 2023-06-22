#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes of main function
 * @num_bytes: number of bytes
 */

void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(ptr + i));
	}

	printf("\n");
}


/**
 * main - start of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 or 2 or 0
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}


