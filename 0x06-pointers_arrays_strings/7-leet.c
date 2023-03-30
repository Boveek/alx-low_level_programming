#include "main.h"
/**
 * leet - string to input
 * @s: The character to print
 * Return: On success s
 */
char *leet(char *s)
{
	int i;
	int j;
	char a[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
				s[i] = n[j];
		}
	}
	return (s);
}
