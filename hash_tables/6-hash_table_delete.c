#include "hash_tables.h"

void delete_node(hash_node_t *);
/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table to delete.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx = 0;

	/* loop through each index of the array */
	while (idx < ht->size)
	{
		/* check if current index isn't empty */
		if (ht->array[idx])
		{
			node = ht->array[idx];
			/* delete LL of nodes recursively */
			delete_node(node);
		}
		idx++;
	}
	/* free array of the HT */
	free(ht->array);
	/* free HT itself */
	free(ht);
}

/**
 * delete_node - deletes a bucket
 * @node: nodes to delete
 */
void delete_node(hash_node_t *node)
{
	hash_node_t *tmp;

	while (node)
	{
		tmp = node;
		/* free mem for allocated key */
		free(node->key);
		/* free mem for allocated value if not NULL */
		if (node->value)
			free(node->value);
		/* move to next node in bucket */
		node = node->next;
		/* free current node */
		free(tmp);
	}
}
