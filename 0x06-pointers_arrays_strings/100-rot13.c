#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
    char *result = str;
    char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*str)
    {
        char *letter = letters;
        char *rot13_letter = rot13;
        int encoded = 0;

        while (*letter)
        {
            if (*str == *letter)
            {
                *str = *rot13_letter;
                encoded = 1;
                break;
            }

            letter++;
            rot13_letter++;
        }

        if (!encoded)
        {
            str++;
        }
    }

    return result;
}
