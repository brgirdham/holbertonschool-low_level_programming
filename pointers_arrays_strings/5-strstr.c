#include "main.h"
#include <stddef.h>
/**
 * _strstr - string of strings
 * @haystack: string
 * @needle: substring of string
 *
 * Return: pointer at needle, otherwise null
 */
char *_strstr(char *haystack, char *needle)
{
char *p;
char *q;
q = needle;
p = haystack;
while (*p < '\0')
{
q = needle;
while (*q < '\0')
{
if (*p == *q)
{
return (q);
}
q++;
}
p++;
}
return (NULL);
}
