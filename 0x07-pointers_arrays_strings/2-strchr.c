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
	int i;


	for  (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
