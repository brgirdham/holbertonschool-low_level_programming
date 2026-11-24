#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates an array
 * @array: the array to be produced
 * @size: size of array to be
 * @action: Function to be called
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
i = 0;
if (array == NULL || action == NULL)
return;
while (i < size)
{
action(array[i]);
i++;
}
}
