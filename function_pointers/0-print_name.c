#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: is name
 * @f: Function to be called
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
