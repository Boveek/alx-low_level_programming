#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the result of an Arithmetic operation.
 * @argc: Argument Count.
 * @argv: Argument Vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return(0);
}
