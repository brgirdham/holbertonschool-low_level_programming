#inclue "main.h"
/**
 * _memset - memory
 * @s: memory pointed to0
 * @b: constant byte
 * @n: certain amount of bytes to overwrite
 * Return - S
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p;
unsigned int i;
p = s;
i = 0;
while (i < n)
{
*p = b;
p++;
i++;
}
return (s);
}
