#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ptr;

	int length;

	int i;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] = '\0')
	{
		length++;
	}

	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}




