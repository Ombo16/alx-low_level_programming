#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: A pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, const char *src)
{
    char *dest_end = dest;

    while (*dest_end)
    {
        dest_end++;
    }

    while (*src)
    {
        *dest_end = *src;
        dest_end++;
        src++;
    }

    *dest_end = '\0';

    return dest;
}
