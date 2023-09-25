#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill with.
 * @n: Number of char bytes to fill.
 * Return: Pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
