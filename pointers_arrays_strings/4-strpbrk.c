#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - Finds first occurence of a letter in two strings
  * @s: string 1
  * @accept: accepted characters
  * Return: P if letter is in both strings, otherwise NULL
  *
  */
char *_strpbrk(char *s, char *accept)
{
char *p;
char *q;
p = s;
q = accept;
while (*p != '\0')
{
q = accept;
while (*q != '\0')
{
if (*p == *q)
{
return (p);
}
q++;
}
p++;
}
return (NULL);
}
