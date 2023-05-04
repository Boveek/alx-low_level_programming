#include "main.h"
/**
 * set_bit - sets the bit at an index to 1
 * @n: the integer input
 * @index: index of the number to be changed
 * Return: returns 1 on success, and -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
