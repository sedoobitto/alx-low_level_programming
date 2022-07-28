#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x, *y;
	unsigned int i;

	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
		{
			return (NULL);
		}
		return (x);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	y = ptr;
	x = malloc(new_size);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		x[i] = y[i];
	}
	free(ptr);
	return (x);
}
