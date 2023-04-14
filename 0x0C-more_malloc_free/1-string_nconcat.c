#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates a string to
 * another string to the number of n
 * @s1: Input string 1
 * @s2: input string 2
 * @n: Number of string 2 to be concatenated
 * Return: A pointer to the concatenated string on Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, s2count = 0, s1count = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (!(s1 == NULL))
			s1count++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (!(s2 == NULL))
			s2count++;
	}
	if (n >= s2count)
		n = s2count;
	{
		ptr = malloc(sizeof(char) * (s1count + s2count + 1));
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < s1count; i++)
			ptr[i] = s1[i];
		for (k = 0; k < n; k++)
		{
			ptr[i++] = s2[k];
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
