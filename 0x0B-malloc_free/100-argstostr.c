#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer input
 * @av: pointer of pointer to a string input
 * Return: A pointer to a concatenated integer on success
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[len++] = av[i][j];
		}
		ptr[len++] = '\n';
	}
	ptr[len - 1] = '\n';
	ptr[len] = '\0';
	return (ptr);
}
