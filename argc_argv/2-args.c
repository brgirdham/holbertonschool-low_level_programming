#include "main.h"
#include <stdio.h>
/**
 * main - main staging area
 * @argc: count of arguments
 * @argv: accesses argument strings
 * Return: Int
 */
int main(int argc, char *argv[])
{
int i;
i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
