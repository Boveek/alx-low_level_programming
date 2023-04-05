#include "main.h"
/**
 * factorial - Entry point for the function
 * @n: The input integer
 * Return: On success factorial of integer.
 * On error, -1 is returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
