#include "hash_tables.h"
/**
  * hash_table_print - print the hash table
  * @ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	/* i and j are loop counters */
	unsigned long int i, j;
	hash_node_t *tmp;

	/* i and j are initialized to 0 */
	i = j = 0;
	/* if HT is empty return immediately */
	if (!ht)
		return;

	/* print opening curly braces to indicate the start of a ht */
	putchar('{');
	for (i = j = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			/* set tmp ptr to head of the LL at the index */
			tmp = ht->array[i];
			/* loop through LL at current index */
			while (tmp)
			{
				/* prints key and value of current node */
				printf("%s'%s': '%s'", j == 0 ? "" : ", ", tmp->key, tmp->value), j++;
				/* move to next node in the LL */
				tmp = tmp->next;
			}
		}
	}
	/* print closing curly brace for end of HT */
	printf("}\n");
}
