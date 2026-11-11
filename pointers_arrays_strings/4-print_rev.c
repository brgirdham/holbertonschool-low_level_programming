#include "main.h"
/**
  * print_rev - Length of string in reverse
  * @s: to be changed
  * Return: Void
  *
  */
void print_rev(char *s)
{
int a;
a = _strlen(s) - 1;
while (a >= 0)
{
_putchar(*(s + a));
a--;
}
_putchar('\n');
return;
}
