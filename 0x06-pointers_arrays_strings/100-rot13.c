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
    char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *lowercase = "abcdefghijklmnopqrstuvwxyz";
    char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";

    while (*str)
    {
        char *uc = uppercase;
        char *lc = lowercase;
        char *rot13_uc = rot13_upper;
        char *rot13_lc = rot13_lower;
        int encoded = 0;

        while (*uc)
        {
            if (*str == *uc)
            {
                *str = *rot13_uc;
                encoded = 1;
                break;
            }
            uc++;
            rot13_uc++;
        }

        if (!encoded)
        {
            while (*lc)
            {
                if (*str == *lc)
                {
                    *str = *rot13_lc;
                    break;
                }
                lc++;
                rot13_lc++;
            }
        }

        str++;
    }

    return result;
}
