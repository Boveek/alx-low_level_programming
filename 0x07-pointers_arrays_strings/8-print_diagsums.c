#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point of the function
 * @a: The array input
 * @size: The size of the array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int k = 0;
	int l = 0;

	for (i = 0; i < size; i++)
		k = k + a[i * size + i];
	for (j = size - 1; j >= 0; j--)
		l = l + a[j * size + (size - 1 - j)];
	printf("%d %d\n", k, l);
}
