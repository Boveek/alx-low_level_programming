#include "main.h"
/**
 * times_table - Entry point
 * Description: 'The program prints multiplication table to 9)
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int n;
	int p;
	int q;

	for (i = 0 ; i < 10 ; ++i)
	{
		for (j = 0 ; j < 10 ; ++j)
		{
			n = i * j;
			if (n >= 10)
			{
				p = n % 10;
				q = n / 10;
				_putchar (q + '0');
				_putchar (p + '0');
			}
			else if (j == 0)
			{
				_putchar (n + '0');
			}
			else
			{
				_putchar (' ');
				_putchar (n + '0');
			}
		if (j != 9)
		{
			_putchar (',');
			_putchar (' ');
		}
		}
		_putchar ('\n');
	}
}
