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
  va_start(args, format);
  while (format[i] != '\0')
    
