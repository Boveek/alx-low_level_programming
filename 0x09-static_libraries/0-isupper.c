#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: The character to print
 *
 * Return: On 1 for capital letter.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
