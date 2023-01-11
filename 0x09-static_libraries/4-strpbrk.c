#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */
char *_Strpbrk(char *s, char *accept)
{
	int k;
	while (*S)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (S);
		}
		s++;
	}
	return ('\0');
}
