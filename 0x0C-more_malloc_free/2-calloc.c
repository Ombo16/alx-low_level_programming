#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: type unsigned int
 * @size: type unsigned int size of elements
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	char *str;
	unsigned int index;

	if (nmemb <= 0 || size <= 0)
		return (ptr);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	str = (char *)ptr;
	for (index = 0; index < (nmemb * size); index++)
		*(str + index) = 0;

	return (str);
}
