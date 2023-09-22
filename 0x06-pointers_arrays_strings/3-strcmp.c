#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return:
 *   - An integer less than 0 if s1 is less than s2.
 *   - 0 if s1 is equal to s2.
 *   - An integer greater than 0 if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
