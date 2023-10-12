#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters.
 * @n: type unsigned int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int a;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = a = 0;
	while (a < n)
	{
		sum = sum + va_arg(valist, int);
		a++;
	}
	va_end(valist);
	return (sum);
}
