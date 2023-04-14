#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - works like the realloc function
 * @ptr: address of the memory allocated
 * @old_size: old size allocated
 * @new_size: new size allocated
 * Return: A pointer to a new address on success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptrr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptrr = malloc(new_size);
		if (ptr != NULL)
		{
			memcpy(ptrr, ptr, old_size);
		}
	}
	free(ptr);
	return (ptrr);
}
