#include "main.h"
/**
  * _strcmp - compares 2 strings
  * @s1: string 1
  * @s2: string 2
  * Return: 0 if p1 = p2, -number if p1 < p2, +number if p1 > p2
  *
  */
int _strcmp(char *s1, char *s2)
{
char *p1;
char *p2;
p1 = s1;
p2 = s2;
while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
{
p1++;
p2++;
}
return (*p1 - *p2);
}
