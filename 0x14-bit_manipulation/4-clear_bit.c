#include "main.h"
/**
 * clear_bit - changes the bit at the index to 0
 * @n: pointer to the address of the integer
 * @index: index of bit to be changed
 * Return: returns 1 on success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
