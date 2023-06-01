#include "main.h"

/**
 * _strcpy - copies a string to dest from src
 *
 * @dest: ...
 * @src: ...
 *
 * Return: new str
 */

char _strcpy(char *dest, char *src)
{
	char *new_s = dest;

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++
	}

	*dest = '\0';

	return (new_s);
}

