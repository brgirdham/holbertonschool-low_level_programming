#include "main.h"
/**
  * _strcpy - copy string
  * @dest: destination of copied string
  * @src: string to be copied
  * Return: Destination
  *
  */
char *_strcpy(char *dest, char *src)
{
int a;
a = 0;
while (1)
{
*(dest + a) = *(src + a);
if (*(src + a) == '\0')
{
break;
}
a++;
}
return (dest);
}
