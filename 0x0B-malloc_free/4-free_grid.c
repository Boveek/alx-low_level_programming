#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees previous space allocated by the memory
 * @grid: input allocated space
 * @height: input int
 * Return: A freed memory on success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
