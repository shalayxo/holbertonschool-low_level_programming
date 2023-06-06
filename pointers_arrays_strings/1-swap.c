#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: one integer
 * @b: another integer
 * Return: value of the swapped integer
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
