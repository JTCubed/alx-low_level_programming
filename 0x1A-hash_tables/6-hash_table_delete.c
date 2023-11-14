#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur_node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		cur_node = ht->array[i];
		while (cur_node != NULL)
		{
			tmp = cur_node->next;
			free(cur_node->key);
			free(cur_node->value);
			free(cur_node);
			cur_node = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
