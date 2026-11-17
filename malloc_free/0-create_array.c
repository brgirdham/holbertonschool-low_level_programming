#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Creating an array
 * @size: size of array
 * @c: character to be displayed
 * Return: NULL if size = 0, otherwise array
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
char *array;
i = 0;
if (size == 0)
{
return (NULL);
}
p = malloc(size * sizeof(char));
if (p == NULL)
{
return (NULL);
}
array = p;
while (i < size)
{
*p = c;
p++;
i++;
}
return (array);
}
