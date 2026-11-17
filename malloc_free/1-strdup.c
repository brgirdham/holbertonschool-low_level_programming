#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - String allocated to a bit of memory
 * @str: string to be copied
 *
 * Return: NULL if size = 0, otherwise cpy
 */
char *_strdup(char *str)
{
unsigned int i;
char *p;
char *cpy;
p = str;
i = 0;
if (str == NULL)
{
return (NULL);
}
while (*p != '\0')
{
p++;
i++;
}
p = malloc((i + 1) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
cpy = p;
while (*str != '\0')
{
*p = *str;
str++;
p++;
}
*p = '\0';
return (cpy);
}
