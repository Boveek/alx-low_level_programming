#include "main.h"
/**
 * rot13 - Function that encodes strings in rot13
 * @s: array of sting input
 * Return: s
 */
char *rot13(char *s)
{
	int p;
	int i;
	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char j[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (p = 0; p < 52; p++)
		{
			if (s[i] == l[p])
			{
				s[i] = j[p];
				break;
			}
		}
	}
	return (s);
}
