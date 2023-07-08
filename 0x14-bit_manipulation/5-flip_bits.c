#include "main.h"
/**
 * flip_bits - function that checks the number of bit needed
 * to be fliped to get from one number to another
 * @n: the integer input
 * @m: the second integer input
 * Return: returns number of bit flipped on success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int count = 0;

	for (i = 63; i >= 0; i--)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}
