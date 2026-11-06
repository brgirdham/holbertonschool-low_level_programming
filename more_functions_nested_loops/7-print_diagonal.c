#include "main.h"
/**
 * print_diagonal - prints \ diagonally
 * @n: integer to be checked
 */
void print_diagonal(int n)
{
int i = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (i <= n)
{
_putchar(' ');
_putchar(44 + '0');
i++;
}
_putchar('\n');
}
}
