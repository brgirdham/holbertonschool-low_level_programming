#include "main.h"
/**
 * _isdigit - checks digits
 * @c: The letter to be checked
 *
 * Return: 1 if C, 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
