#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Creating an array
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if s3 = 0, otherwise l
 */
char *str_concat(char *s1, char *s2)
{
char *p, *q, *l, *s3;
unsigned int i;
i = 0;
if (s1 == NULL || s2 == NULL)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
p = s1;
q = s2;
while (*p != '\0' || *q != '\0')
{
if (*p != '\0')
p++;
i++;
if (*q != '\0')
q++;
i++; }
s3 = malloc((i + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);
l = s3;
while (*s1 != '\0')
{
*s3 = *s1;
s1++;
s3++; }
while (*s2 != '\0')
{
*s3 = *s2;
s2++;
s3++; }
*s3 = '\0'; }
return (l);
}
