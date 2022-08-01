#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	char *xname, *xowner;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	xname = malloc(sizeof(char) * i + 1);
	if (xname == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		xname[k] = name[k];
	}
	xowner = malloc(sizeof(char) * j + 1);
	if (xowner == NULL)
	{
		free(ndog);
		free(xname);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
	{
		xowner[k] = owner[k];
	}
	ndog->name = xname;
	ndog->age = age;
	ndog->owner = xowner;
	return (ndog);
}
