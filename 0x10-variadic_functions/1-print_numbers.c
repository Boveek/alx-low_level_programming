#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * print_numbers - Function that prints list of integer
 * @separator: separator
 * @n: argument number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s", va_arg(a, int), separator);
		else
			printf("%d\n", va_arg(a, int));
	}
}
