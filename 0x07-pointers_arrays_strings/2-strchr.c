#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string input
 * @c: character input
 * Return: On success 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
		else if (s[i] == '\0')
			return ('\0');
	return (0);
}
