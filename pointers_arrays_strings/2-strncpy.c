#include "main.h"
/**
  * _strncpy - copy string
  * @dest: destination of copied string
  * @src: string to be copied
  * @n: integer to be checked
  * Return: Destination
  *
  */
char *_strncpy(char *dest, char *src, int n)
{
char *p;
int i;
i = 0;
p = dest;
while (*src != '\0' && i < n)
{
*p = *src;
p++;
src++;
i++;
}
while (*src == '\0' && i < n)
{
*p = '\0';
p++;
i++;
}
return (dest);
}
