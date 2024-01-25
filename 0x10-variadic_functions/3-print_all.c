#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed to the function.
 * @...: Variable number of parameters.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
		break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
		break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
		break;
		case 's':
			str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s%s", separator, str);
		break;
		default:
		i++;
		continue;
	}

	separator = ", ";
	i++;
	}

	printf("\n");

	va_end(args);
}

