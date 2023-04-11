#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that copies a string to the heap memory
 * @str: the string input
 * Return: On success ptr
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	ptr = malloc((sizeof(char) * size) + 1);
	i = 0;
	if (str == 0)
		return (NULL);
	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}