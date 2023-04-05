#include "main.h"
/**
 * _strlen_recursion - Entry point for the function
 * @s: The string to be passed in
 * Return: On success an int.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = i + _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
