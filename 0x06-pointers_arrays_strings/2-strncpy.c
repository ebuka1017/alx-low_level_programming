#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: ..
 * @src: ..
 * @n: count
 *
 * Return: copy of string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *new_s = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;

		dest++;
		src++;
		n--;
	}

	*new_s = '\0';

	return (dest);
}

