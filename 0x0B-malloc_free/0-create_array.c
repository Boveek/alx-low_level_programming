#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * create_array - Creates an array of characters
 * @size: unsigned int input
 * @c: character input
 * Return: On success pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
