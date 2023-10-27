#include "main.h"
/**
 * _isupper - check if a character is in upper case
 * @c:- an int character
 * Return: 1 for the uppercase letters and 0 for the lower ones
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
