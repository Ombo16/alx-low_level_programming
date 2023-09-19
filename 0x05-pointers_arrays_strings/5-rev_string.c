#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to reverse
 */
void rev_string(char *s)
{
	int length = 0;
	int start;
	int end;
	char temp;

	while (s[length] != '\0')
	{
	length++;
	}

	int start = 0;
	int end = length - 1;

	while (start < end)
	{
	temp = s[start]
	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
	}
}
