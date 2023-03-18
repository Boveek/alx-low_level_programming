#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; --i)
		printf("%c", i);
	printf("\n");
	return (0);
}
