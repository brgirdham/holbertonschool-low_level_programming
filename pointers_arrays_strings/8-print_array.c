#include "main.h"
#include <stdio.h>
/**
  * print_array - prints an array of integers
  * @a: integer to be printed
  * @n: integer to be checked
  * Return: Void
  *
  */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", *(a + i));
if (i < (n - 1))
{
printf(", ");
}
i++;
}
printf("\n");
}
