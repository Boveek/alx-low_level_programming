#include "main.h"
/**
 * leet - string to input
 * @s: The character to print
 * Return: On success s
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = 52;
		if (s[i] == 'e' || s[i] == 'E')
			s[i] = 51;
		if (s[i] == 'o' || s[i] == 'O')
			s[i] = 48;
		if (s[i] == 't' || s[i] == 'T')
			s[i] = 55;
		if (s[i] == 'l' || s[i] == 'L')
			s[i] = 49;
	}
	return (s);
}
