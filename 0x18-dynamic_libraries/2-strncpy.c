#include "main.h"
/**
 * _strncpy - This function copies a sting from src to dest
 * with n indicating no of bytes to be copied
 * @dest: destination to be copied to
 * @src: destination to be copied from
 * @n: Number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lenofsrc = 0;
	int lenofdest = 0;
	int i;

	for (i = 0; src[i] != '\0'; i++)
		lenofsrc++;
	for (i = 0; dest[i] != '\0'; i++)
		lenofdest++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
