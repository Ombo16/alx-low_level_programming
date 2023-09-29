#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of bytes to search for.
 * Return: Pointer to the first occurrence in @s of any byte
 * that matches one of the bytes in @accept,
 * or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *check = accept;

	while (*check != '\0')
	{
		if (*s == *check)
		return (s);
		check++;
	}

	s++;
	}

	return (NULL);
}
