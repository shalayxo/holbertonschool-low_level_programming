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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
