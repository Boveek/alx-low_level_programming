#include "function_pointers.h"
/**
 * array_iterator - function that iterates and prints members of an array
 * @array: pointer to the elements in an array
 * @size: size of the array
 * @action: pointer to a function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
