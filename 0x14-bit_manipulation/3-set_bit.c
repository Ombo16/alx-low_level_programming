#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the number to modify
 * @index: index of the bit to set
 *
 * Return: 1 if successful, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	num = 1UL << index;
	*n |= num;
	return (1);
}
