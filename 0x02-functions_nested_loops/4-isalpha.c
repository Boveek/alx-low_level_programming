#include "main.h"
/**
 * _isalpha - Entry point
 * @c: The character to print
 * Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
