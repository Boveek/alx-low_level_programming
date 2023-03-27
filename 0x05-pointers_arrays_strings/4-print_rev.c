#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int long i = 0;
	int m;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (m = i; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
