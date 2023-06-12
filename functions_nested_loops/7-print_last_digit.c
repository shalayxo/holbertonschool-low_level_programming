#include "main.h"

/**
 * print_last_digit - CHECK YOUR PROTOTYPE
 * @x: CHECK YOUR VAR
 * Return: CHECK YOUR PROTOTYPE
 */
int print_last_digit(int x)
{
	if (x >= 0)
	{
		x = (x % 10);
		_putchar('0' + x);
		return (x);
	}
	else if (x < 0)
	{
		x = (x % 10);
		x = -x;
		_putchar('0' + x);
		return (x);
	}
	else
	{
		return (9);
	}
}
