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
	unsigned int len = 0, i, bin, deci;
	unsigned int sum = 0;

	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		else
		{
			bin = b[i] - '0';
			deci = bin << (len - i - 1);
			sum += deci;
		}
	}
	return (sum);
}
