#include "function_pointers.h"
/**
  * int_index - index of integers
  * @array: integer to be checked
  * @size: Integer to be checked
  * @cmp: compares integers
  * Return: -1 if <= 0 || no matches, i of cmp
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
i = 0;
if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
{
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);
}
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}
