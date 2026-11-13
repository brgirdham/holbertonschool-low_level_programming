#include "main.h"
/**
 * _strspn - string of accepted letters
 * @s: string
 * @accept: the accepted letters compared to the string
 *
 * Return: i, amount of characters match
 */
unsigned int _strspn(char *s, char *accept)
{
char *p;
char *q;
unsigned int i;
i = 0;
p = s;
q = accept;
while (*p != '\0')
{
q = accept;
while (*q != '\0')
{
if (*p == *q)
break;
q++;
}
if (*q == '\0')
{
break;
}
i++;
p++;
}
return (i);
}
