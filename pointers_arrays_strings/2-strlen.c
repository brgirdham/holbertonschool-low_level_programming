#include "main.h"
/**
  * _strlen - Length of string
  * @s: to be changed
  * Return: String length
  *
  */
int _strlen(char *s)
{
int a;
a = 0;
while ((*(s + a)) != '\0')
{
a++;
}
return (a);
}
