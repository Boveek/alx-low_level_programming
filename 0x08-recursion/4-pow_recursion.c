#include "main.h"
/**
 * _pow_recursion - Entry point for the function
 * @x: The input integer
 * @y: The integer to be raised to
 * Return: On success an integer.
 * On error, -1 is returned
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x , (y - 1)));
}
