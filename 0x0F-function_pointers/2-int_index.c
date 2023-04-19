#include "function_pointers.h"
/**
 * int_index - function that prints the index of a compared integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: function that compares integers
 * Return: returns index of the integer on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
