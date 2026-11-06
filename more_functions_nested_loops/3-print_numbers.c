#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 *
 * Return: Always 0
 */
void print_numbers(void)
{
int n;
n = 0;
while (n <= 9)
{
putchar(n + '0');
n++;
}
putchar('\n');
}
