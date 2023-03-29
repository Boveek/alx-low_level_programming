#include "main.h"
/**
 * _strncat - concatenate two strings using n byte from src
 * @src: The source
 * @dest: the destination
 * @n: the number of bytes to be copied
 * Return: dest string on success
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenofsrc = 0;
	int lenofdest = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		lenofsrc++;
	for (i = 0; dest[i] != '\0'; i++)
		lenofdest++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenofdest + i] = src[i];
	}
	return (dest);
}
