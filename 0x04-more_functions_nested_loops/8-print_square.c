#include "main.h"

/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int i = size;
	int j = size;

	if (size <= 0)
	{
		_putchar ('\n');
		return;
	}
	while (i--)
	{
		while (j--)
		{
			_putchar ('#');
		}
		_putchar('\n');
		j = size;
	}
}
