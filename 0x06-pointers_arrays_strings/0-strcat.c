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
	char new_s[];

	new_s = dest + src;

	new_s[dest + src] = '\0';

	return (new_s);
}

