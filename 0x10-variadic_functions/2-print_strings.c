#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed betweeni the strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *ptr;
	unsigned int i;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
