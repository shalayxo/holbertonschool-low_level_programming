#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for desired value in an
 * array of integers using linear search
 * @array: Pointer to the first element of the array
 * to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
size_t n;

if (array == NULL)
{
	return (-1);
}
for (n = 0; n < size; n++)
{
printf("Value checked array[%ld] = [%d]\n", n, array[n]);

if (array[n] == value)
{
return (n);
}
}
return (-1);
}
