#include "main.h"
/**
 * print_last_digit - Entry point
 * @i: The character to print
 * Return: On success integer on success
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
		j = -(j);
	else
		j = j;
	_putchar (j + '0');
	return (j);
}

