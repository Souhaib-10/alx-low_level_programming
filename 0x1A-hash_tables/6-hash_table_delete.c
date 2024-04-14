#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: Pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *tmp = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node;)
		{
			free(node->value);
			free(node->key);
			tmp = node;
			node = node->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
