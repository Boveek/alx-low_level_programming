#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	if (count % 2 == 0)
	{
		for (i = count / 2; str[i] != '\0'; i++)
			_putchar (str[i]);
		_putchar ('\n');
	}
	else if (count % 2 != 0)
	{
		for (i = (count - 1) / 2; str[i] != '\0'; i++)
			_putchar (str[i]);
		_putchar ('\n');
	}
}

