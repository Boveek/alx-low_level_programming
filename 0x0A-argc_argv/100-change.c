#include <stdio.h>
#include <stdlib.h>

int checkdiv(int num);
int divide(int num1, int num2);
/**
 * checkdiv - Function that check for a number can divide the inputed number
 * @num: int input
 * Return: 0 on success
 */
int checkdiv(int num)
{
	unsigned int i;
	int cent[] = {25, 10, 5, 2, 1};

	for (i = 0; i < sizeof(cent) / sizeof(cent[0]); i++)
	{
		if (cent[i] <= num)
		{
			return (cent[i]);
		}
	}
	return (0);
}
/**
 * divide - Function that returns the number of times an integer can be divided
 * @num1: Integer input
 * @num2: Integer input
 * Return: An integer
 */
int divide(int num1, int num2)
{
	int p = 0;

	while (num1 >= num2)
	{
		num1 -= num2;
		p++;
	}
	p++;
	return (p);
}
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0n success 0
 */
int main(int argc, char *argv[])
{
	int k = 0;
	int i;

	if (argc == 2)
	{
		if (atoi(argv[1]) >= 0)
		{
			i = atoi(argv[1]) % checkdiv(atoi(argv[1]));
			k++;
			printf("%d\n", k);
			k += divide(i, checkdiv(i));
			printf("%d\n", k);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
