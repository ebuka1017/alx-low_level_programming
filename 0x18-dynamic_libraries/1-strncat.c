#include "main.h"

/**
 * _strncat - concatenates two strings
 * @n: count
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *new_s = dest;

	while (*new_s != '\0')
	{
		new_s++;
	}

	while (*src != '\0' && n > 0)
	{
		*new_s = *src;

		src++;
		new_s++;
		n--;
	}

	*new_s = '\0';

	return (dest);
}

