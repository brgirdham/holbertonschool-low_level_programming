#include "main.h"
/**
  * reverse_array - reverses array
  * @a: integer to be checked
  * @n: Integer to be checked
  * Return: void
  *
  */
void reverse_array(int *a, int n)
{
int i;
int j;
int temp;
j = n - 1;
i = 0;
while (i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
