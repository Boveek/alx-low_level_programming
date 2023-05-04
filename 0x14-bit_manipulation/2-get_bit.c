#include "main.h"
/**
 * get_bit - function that returns the bit at a particular index
 * @n: The integer input
 * @index: the index to be searched
 * Return: returns the bit on success, returns -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	val = n >> index;
	if (val & 1)
		return (1);
	else
		return (0);
	return (-1);
}
