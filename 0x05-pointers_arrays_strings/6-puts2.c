#include "main.h"
#include <stdio.h>
/**
 * puts2 - Print one char out of 2 of a string.
 * @str: Type char pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
