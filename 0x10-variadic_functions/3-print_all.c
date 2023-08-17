#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values of various types.
 * @format: A list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: flaot
 * s: char * (if NULL, prints (nil))
 * any other cahr is ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char current_format;
	const char *separator = "";
	char *current_str;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];

		if (current_format == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (current_format == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (current_format == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (current_format == 's')
		{
			current_str = va_arg(args, char *);

			if (current_str == NULL)
				current_str = "(nil)";

			printf("%s%s", separator, current_str);
		}

		separator = ", ";
		i++;

		while (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's')
		{
			i++;
		}
	}

	va_end(args);
	printf("\n");
}
