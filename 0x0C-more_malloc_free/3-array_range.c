#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Create an array of integers
 * @min: number of rows
 * @max: number of columns
 * Return: array address
 */

int *array_range(int min, int max)
{
	int *x;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	x = malloc((max - min + 1) * sizeof(int));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		x[i] = min + i;
	}
	return (x);
}
