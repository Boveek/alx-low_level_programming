#include "hash_tables.h"
/**
 * hash_djb2 - function implementing the djb2 algorithm
 * @str: string input
 * Return: hash index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash  = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	hash = hash % size;
	return (hash);
}
