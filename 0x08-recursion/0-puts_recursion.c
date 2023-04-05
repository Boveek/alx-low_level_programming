#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s: string input pointer
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar (*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar ('\n');
}
