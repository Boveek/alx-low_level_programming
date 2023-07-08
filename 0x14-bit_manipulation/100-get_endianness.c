#include "main.h"
/**
 * get_endianness - to differentiate little endian from big endian
 * Return: 0 which is for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *m = (char *) &j;

	return (*m);
}
