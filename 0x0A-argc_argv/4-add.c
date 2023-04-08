#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int readthrough(char *input);
/**
 * readthrough - function that checks if
 * an argument is an integer or character
 * @input: The input string
 * Return: 0 if there is a character
 */
int readthrough(char *input)
{
	unsigned int j;

	for (j = 0; j < strlen(input); j++)
		if (!isdigit(input[j]))
			return (0);
	return (1);
}
/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument constant
 * Return: On success 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (readthrough(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else if (argc == 1)
		printf("0\n");
	printf("%d\n", sum);
	return (0);
}
