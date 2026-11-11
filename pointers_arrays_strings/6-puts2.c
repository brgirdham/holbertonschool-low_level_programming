#include "main.h"
/**
  * puts2 - writes every 2nd character
  * @str: string to be printed
  * Return: Void
  *
  */
void puts2(char *str)
{
int a;
a = 0;
while ((*(str + a)) != '\0')
{
_putchar(*(str + a));
a++;
a++;
}
_putchar('\n');
return;
}
