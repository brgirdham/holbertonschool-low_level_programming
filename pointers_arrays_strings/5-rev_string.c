#include "main.h"
/**
  * rev_string - string in reverse
  * @s: string to be printed
  * Return: Void
  *
  */
void rev_string(char *s)
{
int b;
int c;
char temp;
b = 0;
while ((*(s + b)) != '\0')
{
b++;
}
b = b - 1;
c = 0;
while (b > c)
{
temp = *(s + c);
*(s + c) = *(s + b);
*(s + b) = temp;
c++;
b--;
}
}
