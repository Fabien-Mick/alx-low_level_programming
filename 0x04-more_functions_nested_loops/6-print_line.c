#include "main.h"

/**
 * print_line - function draws straight line in the terminal.
 * followed by a new line.
 * @n: An input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar ('\n');

		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar ('-');
	}
	_putchar ('\n');
}
