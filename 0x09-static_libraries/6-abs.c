#include "main.h"
/**
 * _abs - Entry point
 * @n: The character to print
 * Return: On success an integer
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}
