#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: Void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
int i, j;
char *q, *name_cpy, *owner_cpy, *name_s, *owner_s;
i = 0;
p = malloc(sizeof(dog_t));
if (p == NULL)
return (NULL);
q = name;
while (*q != '\0')
{
q++;
i++;
}
name_cpy = malloc((i + 1) * sizeof(char));
if (name_cpy == NULL)
{
free(p);
return (NULL);
}
q = name;
{
name_s = name_cpy;
while (*q != '\0')
{
*name_cpy = *q;
name_cpy++;
q++;
}
*name_cpy = '\0';
name_cpy = name_s;
}
j = 0;
q = owner;
while (*q != '\0')
{
q++;
j++;
}
owner_cpy = malloc((i + 1) * sizeof(char));
if (owner_cpy == NULL)
{
free(p);
return (NULL);
}
q = owner;
{
owner_s = owner_cpy;
while (*q != '\0')
{
*owner_cpy = *q;
owner_cpy++;
q++;
}
*owner_cpy = '\0';
owner_cpy = owner_s;
}
p->name = name_cpy;
p->age = age;
p->owner = owner_cpy;
return (p);
}
