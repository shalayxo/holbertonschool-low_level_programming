#include "hash_tables.h"
/**
  * *hash_table_get - define function
  * @ht: hash table to lookup
  * @key: key to lookup in the hash table
  * Return: NULL on error, the value of the key on success
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* declare variables */
	unsigned long int index;
	hash_node_t *tmp;

	/* initialize variables */
	index = 0;
	/* check for NULL inputs (HT or key) */
	if (!ht || !key)
		return (NULL);

	/* calculate the index of key in the HT */
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	/* if node exisits, traverse LL @ index and find key */
	if (tmp)
	{
		/* loop through LL until key is found or end is reached */
		while (tmp && strncmp(tmp->key, key, strlen(key)) != 0)
			tmp = tmp->next;
		/* if key is found return value, otherwise NULL */
		return (tmp != NULL ? tmp->value : NULL);
	}
	/* if node doesn't exisit node isn't present in HT */
	return (NULL);
}
