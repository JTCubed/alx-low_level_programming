#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *item;


	i = key_index((const unsigned char *)key, ht->size);
	item = ht->array[i];

	if (ht->array[i] == NULL)
		return (NULL);
	else if (strcmp(item->key, key) == 0)
	{
		return (item->value);
	}
	else
	{
		while(strcmp(item->key, key) != 0)
		{
			item = item->next;
			if (item->next == NULL)
			{
				return (NULL);
			}
		}
	}

	return (NULL);
}
