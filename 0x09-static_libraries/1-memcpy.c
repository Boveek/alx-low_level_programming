#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination to be copied
 * @src: source to copy from
 * @n: size of src
 * Return: On success dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < n; i++)
	{
		j = src[i];
		dest[i] = j;
	}
	return (dest);
}
