#include "main.h"
#include <stdio.h>

/**
 * _strspn - Get the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of characters to accept.
 * Return: The number of bytes in the initial segment of @s
 *         consisting only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
	found = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
			{
			found = 1;
			break;
			}
	}

 	if (!found)
	return count;

	count++;
	}

	return (count);
}
