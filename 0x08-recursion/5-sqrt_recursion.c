#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - to find square root
 * @n: int to find square root
 * @val: squaure root
 * Return: int
 */
int square(int n, int val)
{

	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}

}
