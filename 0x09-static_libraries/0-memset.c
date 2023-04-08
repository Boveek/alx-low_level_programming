#include "main.h"
/**
 * _memset - fuction that fills s
 * @s: the address of memory to print
 * @b: the the address of memory to print
 * @n: size of s
 * Return: On success returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
