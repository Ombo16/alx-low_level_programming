#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring in a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *start = haystack;
	char *sub = needle;

	while (*sub != '\0' && *haystack == *sub)
	{
	haystack++;
	sub++;
	}

	if (*sub == '\0')
	return (start);

	haystack = start + 1;
	}

	return (NULL);
}
