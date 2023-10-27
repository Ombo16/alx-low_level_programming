#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number
 * represented as a string to an unsigned int.
 * @b: Pointer to a string containing 0 and 1 characters.
 *
 * Return: The converted number, or
 * 0 if there are non-binary characters or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;

	while (*b != '\0')
	{
		char c = *b;

		if (c == '0')
		{
			result = (result << 1); 
		}
		else if (c == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}

		b++;
	}

	return (result);
}
