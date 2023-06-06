#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ is printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
