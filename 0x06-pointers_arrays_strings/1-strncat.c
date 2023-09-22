#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest)
	dest++;

	while (*src && n > 0)
	{
	*dest++ = *src++;
	n--;
	}

	*dest = '\0';

	return result;
}
