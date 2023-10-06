#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (new_ptr);
}
