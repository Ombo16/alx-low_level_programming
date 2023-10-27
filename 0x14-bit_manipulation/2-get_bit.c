#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: unsigned int
 * @index: integer
 * Return: index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	num = 1ul << index;
	return ((n & num) ? 1 : 0);
}
