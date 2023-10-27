#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to be printed as binary
 */
void print_binary(unsigned long int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    int shift;
    int flag = 0;

    for (shift = (sizeof(unsigned long int) * 8 - 1); shift >= 0; shift--)
    {
        unsigned long int mask = 1UL << shift;

        if (n & mask)
        {
            _putchar('1');
            flag = 1;
        }
        else if (flag)
        {
            _putchar('0');
        }
    }
}
