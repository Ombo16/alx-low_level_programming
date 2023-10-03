#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns *p to new alloc spc in mem, contains cp of str as par.
 * @str: type char memory value.
 * Return: Null if fails or if srt is NULL.
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[a] != '\0'; a++)
		;

	p = malloc(a * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
		p[b] = str[b];
	p[b] = '\0';

	return (p);
}
