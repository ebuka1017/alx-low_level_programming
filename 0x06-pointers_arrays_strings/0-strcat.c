#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: destination string
 * @src: string to be added
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *new_s;

	*new_s = dest;

	while (*new_s != '\0')
	{
		new_s++;
	}

	while (*src  != '\0')
	{
		*new_s = src;

		new_s++;
		src++;
	}

	return (new_s);
}

