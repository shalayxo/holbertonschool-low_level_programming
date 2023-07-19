#include "main.h"
#include <stdio.h>
#include "_pow.c"
/**
 * print_binary - prints decimals as binary
 * @n: long integer
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}
}
