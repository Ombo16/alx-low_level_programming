#include "main.h"

/**
 * print_number - Print an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	int (divisor, neg_flag, digit);

	divisor = 1;
	neg_flag = 0;
	temp = n/ divisor

    if (n < 0)
    {
        _putchar('-');
        neg_flag = 1;
    }

    temp = n;
    while (temp / 10 != 0)
    {
        divisor *= 10;
        temp /= 10;
    }

    while (divisor != 0)
    {
        temp = n / divisor;
        if (temp < 0)
            temp = -temp;
        _putchar('0' + temp);
        n -= temp * divisor;
        divisor /= 10;
    }
}
