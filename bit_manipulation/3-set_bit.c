#include "main.h"
#include <stdio.h>
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: pointer to a number
 * @index: index to replace in the number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
