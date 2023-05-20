#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Start of program
 *
 * Return: Always (0) success
 */

int main(void)
{
	int n;
	int ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (ld < 6 && ld > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d\n", n, ld);
	}

	return (0);
}
