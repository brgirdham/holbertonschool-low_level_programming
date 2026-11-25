#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all types of arguments
 * @char: charactars
 * @format: list of types of arguments
 * Return: void
 *
 */
void print_all(const char * const format, ...)
{
va_list args;
int p, j, a;
double d;
char *str;
p = 0;
a = 0;
va_start(args, format);
while (format[p] != '\0')
{
if (a == 1 && (format[p] == 'c' || format[p] == 'i' || format[p] == 'f' || format[p] == 's'))
{
printf(", ");
}
switch (format[p])
{
case 'c':
j = va_arg(args, int);
printf("%c", j);
a = 1;
break;
case 'i':
j = va_arg(args, int);
printf("%d", j);
a = 1;
break;
case 'f':
d = va_arg(args, double);
printf("%f", d);
a = 1;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s", str);
a = 1;
break;
default:
break;
}
p++;
}
va_end(args);
printf("\n");
}
