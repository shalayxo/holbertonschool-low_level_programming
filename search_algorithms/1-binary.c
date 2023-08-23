#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints an array of integers
 * @array: The array to print
 * @left: left of elements in array
 * @right: right of elements in array
*/
void print_array(const int *array, size_t left, size_t right)
{
size_t n;

for (n = left; n <= right; ++n)
{
if (n > left)
	printf(", ");
printf("%d", array[n]);
}
}

/**
 * binary_search - function that uses binary search algorithms
 * @array: points to first element in the array
 * @size: number of elements in array
 * @value: value to search for
 * Description: searches for a value in a sorted array of integers
 * Return: index where value is found
*/

int binary_search(int *array, size_t size, int value)
{
	int n;
	size_t middle;
	int left = 0;
	int right = size - 1;

if (array == NULL)
{
return (-1);
}

while (left <= right)
{
middle = left + (right - left) / 2;

for (n = left; n <= right; ++n)
{
	printf("Searching in array: ");
	print_array(array, left, right);
	printf("\n");
	break;
}
if (array[middle] == value)
{
return (middle);
}
if (array[middle] < value)
{
left = middle + 1;
n++;
}
else
{
right = middle - 1;
n++;
}
}
return (-1);
}
