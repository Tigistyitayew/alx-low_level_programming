#include "main.h"
#include <stdio.h>

/**
 * main - print the number of agruments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Alwas 0 (success)
 */

int main(int argc, char argv[])
{
	(void) argc; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
