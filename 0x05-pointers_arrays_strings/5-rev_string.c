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
	char temp;

	length = 0;
	start = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		start = s[end];
		end = temp;

		start++;
		end--;
	}

}


