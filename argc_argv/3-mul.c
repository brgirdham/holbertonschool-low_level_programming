#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main staging area
 * @argc: count of arguments
 * @argv: accesses argument strings
 * Return: Int
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc <= 1 || argc >= 3)
{
printf("Error\n");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", (a * b));
return (0);
}
}
