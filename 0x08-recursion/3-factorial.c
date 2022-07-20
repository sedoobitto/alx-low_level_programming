#include "main.h"

/**
 * factorial - function that returns the factorial ofa a given n
 * @n:int
 * Return: int.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
