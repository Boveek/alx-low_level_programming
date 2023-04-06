#include "main.h"
int lenght(char *s);
int compare(char *s, int p, int len);
/**
 * is_palindrome - Entry point of the function
 * @s: The string to be passed
 * Return: On success 1.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (compare(s, 0, (lenght(s))));
}
/**
 * lenght - function that calculate the lenght of a string
 * @s: The string to be passed
 * Return: int
 */
int lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + lenght(s + 1));
}
/**
 * compare - function that checks for palindrome
 * @s: The string to be passed
 * @p: An integer
 * @len: lenght of the string
 * Return: int
 */
int compare(char *s, int p, int len)
{
	if (*(s + p) != *(s + len - 1))
		return (0);
	if (p >= len)
		return (1);
	return (compare(s, (p + 1), (len - 1)));
}
