#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line.
 * @n: Type unsigned int number of int passed to a function
 * @separator: type char pointer string to be printed between numbers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
	int num = va_arg(args, int);
	printf("%d", num);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	
	}

	va_end(args);

	printf("\n");
}
