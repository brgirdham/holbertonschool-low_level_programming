#include "main.h"
/**
 * print_square - prints \ diagonally
 * @size: size to be checked
 */
void print_square(int size)
{
int col;
int row = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (row < size)
{
col = 0;
while (col < size)
{
_putchar('#');
col++;
}
_putchar('\n');
row++;
}
}
}
