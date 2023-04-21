#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}

