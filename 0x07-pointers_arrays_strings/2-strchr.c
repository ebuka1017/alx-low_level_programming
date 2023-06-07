#include "main.h"

/**
 * _strchr - locates character in a string
 *
 * @s: string to be searched
 * @c: char being searched for
 *
 * Return: pointer to first occurence of c, else return NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i, sLen = 0;
	char *ptr = NULL;

	while (s[sLen] != '\0')
	{
		sLen++;
	}

	for  (i = 0; i < sLen; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}

	return (ptr);
}
