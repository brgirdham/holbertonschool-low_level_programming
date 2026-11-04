#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 */
void print_alphabet_x10(void)
{
char a = 'a';
int j;
j = 0;
while (j < 10)
{
a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
j++;
}
}
