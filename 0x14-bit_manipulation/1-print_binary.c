#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to be printed as binary
 */
void print_binary(unsigned long int n)
{
    int i;
    int flag = 0;

    for (i = (sizeof(unsigned long int) * 8 - 1); i >= 0; i--)
    {
        unsigned long int mask = 1UL << i;

        if (n & mask)
        {
            putchar('1');
            flag = 1;
        }
        else if (flag)
        {
            putchar('0');
        }
    }

    if (!flag)
    {
        putchar('0');
    }
}

