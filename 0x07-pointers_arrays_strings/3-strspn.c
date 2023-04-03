#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string input
 * @accept: string input
 * Return: On success string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j = 0;
	unsigned int l;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i + 1] == ' ')
			break;
		else
			for (l = 0; accept[l] != '\0'; l++)
			{
				if (s[i] == accept[l])
					j++;
			}	
	}
	return (j);
}
