#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i;
	int k;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * (sizeof(int *)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(ptr[k]);
			}
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			ptr[i][k] = 0;
		}
	}
	return (ptr);
}
