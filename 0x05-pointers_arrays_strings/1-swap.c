#include "main.h"
/**
 * swap_int - Entry point
 * Description: 'the progream swaps the value of integer a for b'
 * @a: Integer to swap
 * @b: Integer to swap
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
