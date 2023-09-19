#include "main.h"

/**
 * puts2 - Prints every other character of a string followed by a new line
 * @str: Pointer to the string to print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0'; i%2==0)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
