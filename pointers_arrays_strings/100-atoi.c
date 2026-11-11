#include "main.h"
#include <limits.h>
/**
  * _atoi - string to integer
  * @s: string to be checked
  * Return: total
  *
  */
int _atoi(char *s)
{
int i;
int digit;
int sign;
int result;
result = 0;
i = 0;
sign = 1;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
{
sign = sign * -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (result < (INT_MIN / 10))
{
break;
}
else if (result == (INT_MIN / 10) && (digit > -(INT_MIN % 10)))
{
break;
}
else if (sign == 1 && result == -(INT_MAX / 10) && (digit > (INT_MAX % 10)))
{
break;
}
result = ((result * 10) - digit);
i++;
}
if (sign == 1 && result != INT_MIN)
{
result = result * -1;
}
}
return (result);
}
