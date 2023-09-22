#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src && n > 0)
	{
	*dest++ = *src++;
	n--;
	}

	while (n > 0)
	{
	*dest++ = '\0';
	n--;
	}

	return (result);
}
