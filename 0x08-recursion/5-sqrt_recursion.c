#include "main.h"

int pre_sqrt_recursion(int n, int p);

/**
 * _sqrt_recursion - function Entry point
 * @n: Integer to find the square root of
 * Return: On success integer
 * On error, -1 is returned
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (pre_sqrt_recursion(n, 0));
}

/**
 * pre_sqrt_recursion - function to find the natural number
 * @n: number to find the square root of
 * @p: natural number
 * Return: the resulting square root
 */
int pre_sqrt_recursion(int n, int p)
{
	if (p * p > n)
		return (-1);
	if (p * p == n)
		return (p);
	return (pre_sqrt_recursion(n, (p + 1)));
}
