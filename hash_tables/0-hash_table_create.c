#include "hash_tables.h"
/**
 * hash_table_create - function that creates hash table
 * @size: size of hash table
 * Return: a ptr from hash table, NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	/* check is size is valid */
	if (size <= 0)
		return (NULL);

	/* allocate mem for HT */
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	/* set size for HT */
	new_table->size = size;
	/* allocate mem for array for hash_node_t ptrs */
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (!new_table->array)
	{
		/* free prev mem from HT strct */
		free(new_table);
		return (NULL);
	}
	/* initialize all elements in array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
