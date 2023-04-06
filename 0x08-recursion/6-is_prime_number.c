#include "main.h"

int real_prime_number(int n, int y);

/**
 * is_prime_number - Entry point for the function that checks for prime number
 * @n: The integer to check
 * Return: 1 if the number is an integer.
 * On error return 0
 */
int is_prime_number(int n)
{
	int k;

	if (n < 2)
		return (0);
	k = n - 1;
	return (real_prime_number(n, k));
}


/**
 * real_prime_number - function that checks for prime number
 * @n: The integer to check
 * @y: The natural numbers
 * Return: 1 if the number is an integer.
 * On error return 0
 */

int real_prime_number(int n, int y)
{
	if (n % y == 0)
		return (0);
	if (y == 2)
		return (1);
	return (real_prime_number(n, (y - 1)));
}
