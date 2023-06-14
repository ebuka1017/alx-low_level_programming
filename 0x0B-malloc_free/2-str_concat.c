#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 *The returned pointer should point to a newly allocated space in memory
 *which contains the contents of s1, followed by the contents of s2,
 *and null terminated
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;

	unsigned int length = 0, length2 = 0;

	if (s1 != NULL)
	{
		while (s1[length] != '\0')
		{
			length++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[length2] != '\0')
		{
			length2++;
		}
	}

	ptr = malloc((length + length2 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		_strcat(ptr, s1);
	}

	if (s2 != NULL)
	{
		_strcat(ptr, s2);
	}

	return (ptr);
}



