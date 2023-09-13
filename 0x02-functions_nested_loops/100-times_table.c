#include "main.h"

/**
 * print_times_table - Prints the n times table starting from 0.
 * @n: The times table to print.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');  /* Print the first digit (always 0) */
		for (j = 1; j <= n; j++)
		{
			result = i * j;
			_putchar(',');
			_putchar(' ');

			if (result < 10)
				_putchar(' '); /* Extra space for single-digit numbers */
			if (result>=10 && result < 100)
				_putchar(' '); /* Extra space for double-digit numbers */
			if (result >=100 && result <1000)
				_putchar(' ')

			/* Print the result */
			_putchar('0' + (result / 100));
			_putchar('0' + ((result / 10) % 10));
			_putchar('0' + (result % 10));
		}
		_putchar('\n');
	}
}
