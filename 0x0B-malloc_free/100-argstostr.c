#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function to concatenate all the arguments of your program
 * @ac: int
 * @av: array
 * Return: array
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, l;

	k = 0;
	l = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
	}
	str = malloc(l * sizeof(char) + ac + 1);
	if (!str)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			str[k] = av[i][j];
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
