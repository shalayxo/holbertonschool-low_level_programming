#include "main.h"

/**
 * _pow_recursion - Returns the value of x rasied to the power of y
 * @x: the vaule to multiply
 * @y: the times to miltiply the vaule
 *
 * Return: the value multiply y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
