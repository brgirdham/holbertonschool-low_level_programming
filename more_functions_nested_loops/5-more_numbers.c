#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints more numbers
 *
 *
 */
void more_numbers(void)
{
int n, j;
j = 1;
while (j <= 10)
{
n = 0;
while (n <= 14)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
n++;
}
j++;
_putchar('\n');
}
}
