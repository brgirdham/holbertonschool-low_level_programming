#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints dog values
 * @d: pointer
 * Return: Void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
printf("Name: (nil)\n");
if (d->owner == NULL)
printf("Owner: (nil)\n");
printf("Age: %f\n", d->age);
}
