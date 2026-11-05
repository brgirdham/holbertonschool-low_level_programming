#include "main.h"
/**
 * print_last_digit - check the code.
 * @n: the number to check
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
if (n > 0)
{
_putchar ('0' + (n % 10));
return (n % 10);
}
else if (n < 0)
{
_putchar('0' + ((n % 10) * -1));
return ((n % 10) * -1);
}
else
{
_putchar('0');
}
return (0);
}
