#include  "main.h"
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: arg count
 * @c: arr
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

