#include "main.h"
/**
 * print_diagonal - prints \ diagonally
 * @n: integer to be checked
 */
void print_diagonal(int n)
{
int i;
int j = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (j < n)
{
i = 0;
while (i < j)
{
_putchar(' ');
i++;
}
_putchar('\\');
j++;
}
_putchar('\n');
}
}
