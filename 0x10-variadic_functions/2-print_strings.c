#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - func that print strings, followed by a new line
 * @n: Type unsigned int, number of str paseed to a function
 * @separator: type char pointer string to be printed between numbers
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *separatorstr;
	int a;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	a = 0;

	while (a < (int) n)
	{
		separatorstr = va_arg(valist, char *);
		if (separatorstr != NULL)
			printf("%s", separatorstr);
		else
			printf("(nil)");
		if (separator != NULL && a != (int) n - 1)
			printf("%s", separator);
		a++;
	}
	printf("\n");
	va_end(valist);
}
