#include "main.h"
/**
  * string_toupper - Prints all lowercase to uppercase
  * @str: string to be checked
  *
  * Return: char
  *
  */
char *string_toupper(char *str)
{
char *p;
p = str;
while (*p != '\0')
{
if (*p >= 'a' && *p <= 'z')
{
*p = *p - 32;
}
p++;
}
return (str);
}
