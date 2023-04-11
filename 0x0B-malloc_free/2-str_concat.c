#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: On success character pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int n;
	int lens1 = 0;
	int lens2 = 0;
	int sumlen;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		lens1++;
	for (i = 0; s2[i] != '\0'; i++)
		lens2++;
	sumlen = lens1 + lens2;
	ptr = malloc((sizeof(char) * sumlen) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < sumlen)
	{
		ptr[i] = s1[i];
		i++;
	}
	n = 0;
	i = (lens1);
	while (i < sumlen)
	{
		ptr[i] = s2[n];
		n++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
