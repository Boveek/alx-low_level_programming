#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: string pointer
 * @needle: string pointer
 * Return: On success 0.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *k = haystack;
		char *l = needle;

		while (*l == *k && *l != '\0')
		{
			k++;
			l++;
		}
		if (*l == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
