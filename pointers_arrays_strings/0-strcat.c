#include "main.h"
/**
  * _strcat - copy string
  * @dest: destination of copied string
  * @src: string to be copied
  * Return: Destination
  *
  */
char *_strcat(char *dest, char *src)
{
char *p;
p = dest;
while (*p != '\0')
{
p++;
}
while (*src != '\0')
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}
