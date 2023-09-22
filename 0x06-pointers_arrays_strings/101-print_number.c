#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');  // Print '-' for negative numbers
        n = -n;         // Make n positive for processing
    }

    if (n / 10 != 0)
    {
        print_number(n / 10);  // Recursive call to print higher-order digits
    }

    _putchar((n % 10) + '0');  // Print the last digit as a character
}
