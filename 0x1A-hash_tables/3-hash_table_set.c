#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;


	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_node = NULL;
	index = key_index((const unsigned char *)key, ht->size);


	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}else
	{
		ht->array[index] = new_node;
		return (1);
	}

	free(new_node);
	return (1);
}
