/*
 * File: 0-puts_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _puts_recrusion - prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recrusion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recrusion(s + 1);
	}
	else
		_putchar('\n');
}
