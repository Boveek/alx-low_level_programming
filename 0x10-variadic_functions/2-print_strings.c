#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Function that prints a string
 * @separator: separator passed in
 * @n: size of argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(a, char*);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
