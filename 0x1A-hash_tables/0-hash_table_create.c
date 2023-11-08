#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl;
	unsigned long int i;

	tbl = malloc(sizeof(hash_table_t));
	if (tbl == NULL)
	{
		free(tbl);
		return (NULL);
	}

	tbl->size = size;
	tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (tbl->array == NULL)
	{
		free(tbl->array);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tbl->array[i] = NULL;
	}

	return (tbl);
}
