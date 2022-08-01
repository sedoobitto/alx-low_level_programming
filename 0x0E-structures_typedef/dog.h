#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct that stores some information of a dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Description: struct named dog to store name, age
 * and owners name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
