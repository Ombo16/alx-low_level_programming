#include "main.h"

/**
 * rot13 - Encode a string using ROT13
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
    int x;
    char *sera = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *serb = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    for (x = 0; s[x]; x++)
    {
        char *sera_ptr = sera;
        char *serb_ptr = serb;

        while (*sera_ptr)
        {
            if (s[x] == *sera_ptr)
            {
                s[x] = *serb_ptr;
                break;
            }
            sera_ptr++;
            serb_ptr++;
        }
    }

    return s;
}
