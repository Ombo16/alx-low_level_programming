#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

int _putchar(char c);

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the linked list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            int i = 0;
            char nil[] = "(nil)\n";
            while (nil[i] != '\0')
            {
                _putchar(nil[i]);
                i++;
            }
        }
        else
        {
            int i = 0;
            while (h->str[i] != '\0')
            {
                _putchar(h->str[i]);
                i++;
            }
            _putchar('\n');
        }
        count++;
        h = h->next;
    }

    return count;
}

