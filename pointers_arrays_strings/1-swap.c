#include "main.h"
/**
 * swap_int - swaps integer
 * temp: temporary variable to store 'a'
 * @a: integer being stored
 * @b: integer being stored
 *Return: Void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
return;
}
