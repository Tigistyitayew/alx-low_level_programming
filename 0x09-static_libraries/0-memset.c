#include "main.h"
/**
 * _memset - fills memory with a constsnt byte.
 * @s: source string
 * @b: the content byte for filling
 * @n: length of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + 1) = b;
		i++;
	}
	return (s);
}
