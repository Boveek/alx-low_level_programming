#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: String input
 * @accept: string input
 * Return: On success a pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
