#include "main.h"
/**
 * print_times_table - Entry point
 * Description: 'This program prints multiplication table of any given number'
 * @n: integer
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, k, s;

	if ((n > 0) && (n < 15))
	{
	for (i = 0 ; i <= n  ; ++i)
	{
		for (j = 0 ; j <= n ; ++j)
		{
			k = i * j;
			if (k >= 100)
			{
				s = k / 10;
				_putchar ((k / 100) + '0');
				_putchar ((s % 10) + '0');
				_putchar ((k % 10) + '0');
			}
			else if ((k >= 10) && (k < 100))
			{
				_putchar (' ');
				_putchar ((k % 10) + '0');
				_putchar ((k / 10) + '0');
			}
			else if (j == 0)
				_putchar (k + '0');
			else
			{
				_putchar (' ');
				_putchar (' ');
				_putchar (k + '0');
			}
		if (j != n)
		{
			_putchar (',');
			_putchar (' ');
		}
		}
		_putchar ('\n');
	}
	}

}
