#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
	length++;
	s++;
	}
		return length;
}
