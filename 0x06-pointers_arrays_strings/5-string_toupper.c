#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	char *result = str;

	while (*str)
	{
	if (*str >= 'a' && *str <= 'z')
	{
	*str -= 32;
	}
	str++;
	}

	return (result);
}
