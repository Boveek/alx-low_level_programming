#include "main.h"
/**
 * print_line - prints _ for a number of given times
 * @n: Number of times to print character
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar ('\n');
	else
	{
		int i;

		for (i = 0; i <= n; ++i)
			_putchar ('_');
		_putchar ('\n');
	}
}
