#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - the program returns the length of a string.
 * @s: The string for which to find the length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
