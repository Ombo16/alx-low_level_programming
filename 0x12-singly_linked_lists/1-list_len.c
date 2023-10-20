#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: A pointer to the linked list.
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
