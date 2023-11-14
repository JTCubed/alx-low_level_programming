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

	if (ht == NULL || key == NULL || strlen(key) == 0 || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	item = ht->array[i];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
		item = item->next;
	}
	return (NULL);
}
