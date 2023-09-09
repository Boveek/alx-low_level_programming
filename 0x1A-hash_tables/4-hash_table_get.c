#include "hash_tables.h"
/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: the hash table to be looked into
 * @key: the key we are looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node != NULL)
		return (node->value);
	return (NULL);
}
