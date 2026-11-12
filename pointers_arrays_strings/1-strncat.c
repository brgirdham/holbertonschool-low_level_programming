#include "main.h"
/**
  * _strncat - copy string
  * @dest: destination of copied string
  * @src: string to be copied
  * @n: Integer to be checked
  * Return: Destination
  *
  */
char *_strncat(char *dest, char *src, int n)
{
char *p;
int i;
p = dest;
while (*p != '\0')
{
p++;
}
i = 0;
while (*src != '\0' && i < n)
{
*p = *src;
p++;
src++;
i++;
}
*p = '\0';
return (dest);
}
