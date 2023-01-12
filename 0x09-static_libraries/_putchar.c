#include "main.h"

/**
 * _putchar - writes the charactter c to stdout
 * @c: The character to prnt
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}