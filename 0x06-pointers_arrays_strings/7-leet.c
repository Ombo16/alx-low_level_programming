#include "main.h"

/**
 * leet - Encode a string into 1337
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *s)
{
	int x, y;
	char letter[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	x = 0;
	while (s[x] != '\0')
	{
	y = 0;
	while (letter[y] != '\0')
	{
	if (s[x] == letter[y])
	{
		s[x] = new[y];
		break;
	    }
		y++;
	}
	x++;
	}

	return (s);
}
