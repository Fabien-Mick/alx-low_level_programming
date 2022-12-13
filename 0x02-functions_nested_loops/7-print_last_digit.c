#include "main.h"
/**
  * print_last_digit - Print the last digit of a number
  * @i : An input
  * Return: Value of last digit
  */
int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
	{
		i = -i;
	}
		_putchar('0' + i);
		return (i);
}
