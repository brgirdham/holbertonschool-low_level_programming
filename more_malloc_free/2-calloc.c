
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocated memory to be checked
 * @nmemb: integer
 * @size: size
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p, *k;
unsigned int i;
i = 0;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == 0)
return (NULL);
k = p;
while (i < nmemb * size)
{
*p = 0;
p++;
i++;
}
return (k);
}
