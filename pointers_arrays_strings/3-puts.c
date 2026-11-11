#include "main.h"
/**
  * _puts - Length of string
  * @str: to be changed
  * Return: Void
  *
  */
void _puts(char *str)
{
int a;
a = 0;
while ((*(str + a)) != '\0')
{
_putchar(*(str + a));
a++;
}
_putchar('\n');
return;
}
