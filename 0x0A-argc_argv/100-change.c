#include <stdio.h>
#include <stdlib.h>

int checkdiv(int num);
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
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0n success 0
 */
int main(int argc, char *argv[])
{
	int k = 0;
	int l;

	if (argc == 2)
	{
		if (atoi(argv[1]) >= 0)
		{
			k += atoi(argv[1]) / checkdiv((atoi(argv[1])));
			if (atoi(argv[1]) % checkdiv((atoi(argv[1]))) != 0)
			{
				k += atoi(argv[1]) % checkdiv((atoi(argv[1]))) /
checkdiv((atoi(argv[1])) % checkdiv((atoi(argv[1]))));
				l = atoi(argv[1]) % checkdiv((atoi(argv[1]))) %
checkdiv((atoi(argv[1])) % checkdiv((atoi(argv[1]))));
				if (l > 1)
				{
					k += l / checkdiv(l);
					k += l % checkdiv(l);
				}
				else
				{
					k += l;
				}
				printf("%d\n", k);
			}
			else
			{
				printf("%d\n", k);
			}
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
