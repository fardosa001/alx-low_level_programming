#include "dog.h"
#include <stdio.h>

/**
 * init_dog -  initialize a variable of type struct dog.
 * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  * @d: dog structure.
  * Return: 0
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	}
}

