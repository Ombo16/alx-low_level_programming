#include "main.h"
#include <stdio.h>
/**
 * puts_half - Print half of string.
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i++;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
