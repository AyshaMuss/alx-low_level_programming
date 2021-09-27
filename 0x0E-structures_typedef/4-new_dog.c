#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates function with copy of name and owner
 *
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: nothing.
**/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
char *newName;
char *newOwner;
int size = 4;

newDog = (dog_t *)malloc(sizeof(struct dog) * size);
if (newDog == NULL)
{
free(newDog);
return (NULL);
}
newName = (char *)malloc(sizeof((name) + 1) * size);
if (newName == NULL)
{
free(newDog);
return (NULL);
}
newOwner = (char *)malloc(sizeof((owner) + 1) * size);
if (newOwner == NULL)
{
free(newDog);
free(newName);
return (NULL);
}
newName = name;
newOwner = owner;

newDog->name = newName;
newDog->owner = newOwner;
newDog->age = age;

return (newDog);
}
