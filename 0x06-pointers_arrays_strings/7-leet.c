#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	char *result = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";

	while (*str)
	{
	char *leet_char = leet_chars;
	char *replacement = leet_replacements;
	int replace = 0;

	while (*leet_char)
	{
	if (*str == *leet_char)
	{
	*str = *replacement;
	replace = 1;
	break;
	}

	leet_char++;
	replacement++;
	}

	if (!replace)
        {
	str++;
	}
	}

	return (result);
}
