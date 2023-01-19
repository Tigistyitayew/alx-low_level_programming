#include <strdarg.h>

/**
 * print_number - prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the funtion.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separtor, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%dd", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	pritf("\n");

	va_end(nums);
}
