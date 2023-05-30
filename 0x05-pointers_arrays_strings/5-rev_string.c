#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int length;
	int start;
	int end;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	start = 0;
	end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}


