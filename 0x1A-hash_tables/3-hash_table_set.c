#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *value_dup;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
	{
		return (0);
	}
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_dup;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
