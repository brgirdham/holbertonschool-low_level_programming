#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char a, b;
a = 0;
while (a <= 9)
{
b = a + 1;
while (b <= 9)
{
putchar(a + '0');
putchar(b + '0');
putchar(',');
}
b++;
}
putchar('\n');
return (0);
}
