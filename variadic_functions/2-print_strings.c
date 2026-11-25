#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separates numbers
 * @n: integer/s
 * Return: void
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *j;
unsigned int i;
i = 0;
va_start(args, n);
while (i < n)
{
j = va_arg(args, char *);
if (j != NULL)
printf("%s", j);
else
printf("(nil)");
if (separator != NULL && (i != (n - 1)))
{
printf("%s ", separator);
}
i++;
}
va_end(args);
printf("\n");
}
