#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to a decimal number
 * @b: pointer to the string
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int count = 0;
	unsigned int dec = 0;
	unsigned int mul;
	unsigned int cpy;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		count++;
		i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		mul = 1;
		cpy = count - 1;
		while (cpy > 0)
		{
			mul *= 2;
			cpy--;
		}
		dec += (b[i] - '0') * mul;
		count--;
	}
	return (dec);
}
