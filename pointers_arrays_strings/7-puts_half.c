#include "main.h"
/**
  * puts_half - prints 2nd half od string
  * @str: string to be printed
  * Return: Void
  *
  */
void puts_half(char *str)
{
int a;
int n;
int start;
a = 0;
while ((*(str + a)) != '\0')
{
a++;
}
n = ((a + 1) / 2);
start = a - n;
while ((*(str + start)) != '\0')
{
_putchar(*(str + start));
start++;
}
_putchar('\n');
return;
}
