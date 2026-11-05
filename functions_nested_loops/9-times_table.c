#include "main.h"
/**
 * times_table - makes the 9's times table
 *
 *
 * Return: The table chart
 */
void times_table(void)
{
int a;
int b;
int r;
a = 0;
while (a < 10)
{
b = 0;
while (b < 10)
{
r = a * b;
if (r < 10)
{
_putchar(r % 10 + '0');
}
else
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
if (b < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
}
return;
}
