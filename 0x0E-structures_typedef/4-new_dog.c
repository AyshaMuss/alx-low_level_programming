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
char *newName;
char *newOwner;
dog_t *newDog;

newDog = malloc(sizeof(struct dog));
if (newDog == NULL)
{
return (NULL);
}
newName = malloc(sizeof((name) + 1));
if (newName == NULL)
{
free(newDog);
return (NULL);
}
newOwner = malloc(sizeof((owner) + 1));
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
