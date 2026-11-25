#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: separates numbers
 * @n: integer/s
 * Return: void
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i, j;
i = 0;
va_start(args, n);
while (i < n)
{
j = va_arg(args, unsigned int);
printf("%d", j);
if (separator != NULL && (i != (n - 1)))
{
printf("%s", separator);
}
i++;
}
va_end(args);
printf("\n");
}
