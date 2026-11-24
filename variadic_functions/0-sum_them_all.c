#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sums all integers
 * @n: integer/s
 * Return: Integers if any
 *
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, total;
i = 0;
total = 0;
va_start(args, n);
while (i < n)
{
i++;
total += va_arg(args, unsigned int);
}
va_end(args);
return (total);
}
