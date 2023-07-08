#include "main.h"
/**
 * print_binary - function that converts a binary number to decimal
 * @n: decimal number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned int val;

	for (i = 63; i >= 0; i--)
	{
		val = n >> i;
		if (val & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

