#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: decimal number to convert to
 * @index: decimal input
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);

}
