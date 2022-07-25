#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - allocate space for an array
 * @size:unssigned int
 * @c:char
 * Return:char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	x = malloc(sizeof(char) * size);
	if (size == 0 || !x)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		x[i] = c;
	}
	return (x);
}
