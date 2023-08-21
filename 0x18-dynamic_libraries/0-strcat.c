#include "main.h"
/**
 * _strcat - concartenates 2 strings
 * @dest: destination string
 * @src: the source string
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	int lenofdest = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		lenofdest++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[lenofdest] = src[i];
		lenofdest++;
	}
	return (dest);
}
