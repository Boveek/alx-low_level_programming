#include "main.h"
/**
 * reverse_array - This function reverses the string in an array
 * @a: Array input
 * @n: Numbeer of elements in the array
 * Return: On success 1.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = n - 1; i > n / 2; i--)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
