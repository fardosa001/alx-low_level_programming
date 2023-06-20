#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 *@name: dog name.
 *@age: dog age.
 *@owner: dog owner.
 * Return: 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->age = age;

	/*allocate memory and copy  name*/
	new_dog->name = malloc(sizeof(new_dog->name) * strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	/*allocate memory and copy the owner*/
	new_dog->owner = malloc(sizeof(new_dog->owner) * strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	return (new_dog);


}
