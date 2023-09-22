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
	digit = (n/divisor)%10;

	if (n < 0)
	{
		_putchar('-');
		neg_flag = 1;
	}

	while (n / divisor > 9 || n / divisor < -9)
		divisor *= 10;

	while (divisor > 0)
	{
		if (digit < 0)
			digit = -digit;
		_putchar(digit + '0');
		divisor /= 10;
	}
}
