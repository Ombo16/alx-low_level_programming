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
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
				_putchar('0' + result);
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
				else if (result >= 10 && result < 100)
					_putchar('0' + (result / 10));

				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}
