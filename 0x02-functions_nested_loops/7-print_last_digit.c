#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n == INT_MIN)
    {
        // Handle the special case for INT_MIN
        last_digit = 8; // The last digit of INT_MIN is 8 (in base 10)
    }
    else
    {
        last_digit = n % 10;
    }

    putchar(last_digit + '0');

    return (last_digit);
}
