#include "main.h"

/**
 * _memset - fills the first n byte of memory area pointed to by s
 * with the constant b
 *
 * @s: pointer to the memory area to be filled
 * @b: value to be set
 * @n: number of bytes to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
