#include "main.h"
/**
 * *_memcpy - copies memory
 * @src: memory pointed to0
 * @dest: constant byte
 * @n: certain amount of bytes to overwrite
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p;
unsigned int i;
i = 0;
p = dest;
while (i < n)
{
*dest = *src;
src++;
dest++;
i++;
}
return (p);
}
