#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: Just Nothing.
 */
void print_all(const char * const format, ...) {
	va_list args;
	char *separator = "";
	int i = 0;
	char c;
	float f;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
		c = va_arg(args, int);
		printf("%s%c", separator, c);
		break;
	case 'i':
		printf("%s%d", separator, va_arg(args, int));
		break;
		case 'f':
		f = va_arg(args, double);
		printf("%s%f", separator, f);
		break;
	case 's':
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s%s", separator, s);
		break;
	}
	separator = ", ";
	i++;
	}

	printf("\n");
	va_end(args);
}
