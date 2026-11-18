#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Strings to be concatenated
 * @n: integer
 * @s1: String 1
 * @s2: String 2
 * Return: S3, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p, *q, *s3, *S3;
unsigned int i, j, k;
j = 0;
i = 0;
if (s1 == NULL || s2 == NULL)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = ""; }
p = s1;
q = s2;
while (*p != '\0' || (*q != '\0' && j < n))
{
if (*p != '\0')
{
p++;
i++; }
if (*q != '\0' && j < n)
{
q++;
j++; }
}
s3 = malloc((i + j + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);
S3 = s3;
while (*s1 != '\0')
{
*s3 = *s1;
s1++;
s3++; }
k = 0;
while (k < j)
{
*s3 = *s2;
s2++;
s3++;
k++; }
*s3 = '\0';
return (S3); }
