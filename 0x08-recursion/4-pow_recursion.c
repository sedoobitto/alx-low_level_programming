#include "main.h"

/**
 * _pow_recursion- scans for string for any set of bytes
 * @x: base
 * @y: exposant
 * Return: pointer to the byte that matches
 * Null if not found
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
