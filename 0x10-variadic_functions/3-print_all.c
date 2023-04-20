#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function that prints anything
 * @format: types of arguments that are passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	char *ptr;
	char *separator = "";

	va_list a;

	va_start(a, format);
	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(a, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(a, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(a, double));
					break;
				case 's':
					ptr = va_arg(a, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", separator, ptr);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(a);
}

