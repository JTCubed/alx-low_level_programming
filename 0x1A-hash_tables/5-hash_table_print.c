#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed = 0;
//	hash_node_t *node;
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
//		node = ht->array[i];
		while (ht->array[i] != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			printed = 1;
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
