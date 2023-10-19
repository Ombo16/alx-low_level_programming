#include <stddef.h>
#include "lists.h"

/**
* struct list_s - singly linked list
* @str: string (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*/
typedef struct list_s {
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
* list_len - Returns the number of elements in a list_t list.
* @h: A pointer to the linked list.
* Return: The number of nodes (elements) in the list.
*/
size_t list_len(const list_t *h) {
	size_t count = 0;

	while (h) {
		count++;
		h = h->next;
	}

	return (count);
}
