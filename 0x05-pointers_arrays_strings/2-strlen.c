#include "main.h"

/**
 * _strlen - returns string length
 * @s: str to be checked
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

