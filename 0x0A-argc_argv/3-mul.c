#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argv: argument vector
 * @argc: argument count
 * Return: On success 0 and 1 on error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc > 1)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
