#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - A function that creates an array of
 * integers within a particular range
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: A pointer on success
 */
int *array_range(int min, int max)
{
	int i;
	int k = min;
	int *ptr;
	int count = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		count++;
	ptr = malloc(sizeof(int) * count);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; k <= max; i++)
		ptr[i] = k++;
	return (ptr);
}
