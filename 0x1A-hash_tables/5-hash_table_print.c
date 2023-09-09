#include "hash_tables.h"
/**
 * hash_table_print -  function that prints a hash table
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	bool check = false;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (check == true)
					printf(", ");
				printf("'%s' : '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
				check = true;
			}
		}
	}
	printf("}\n");
}
