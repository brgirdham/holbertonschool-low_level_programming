#include "main.h"
#include <stddef.h>
/**
 * _strchr - string of characters
 * @s: string
 * @c: literally the letter c
 *
 * Return: pointer at c, otherwise null
 */
char *_strchr(char *s, char c)
{
char *p;
p = s;
while (*p != '\0')
{
if (*p == c)
{
return (p);
}
p++;
}
if (c == '\0')
{
return (p);
}
return (NULL);
}
