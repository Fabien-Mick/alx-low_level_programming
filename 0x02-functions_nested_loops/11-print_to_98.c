#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints natural number
* @n:an input to start the count
* Return: Nothing
*/
void print_to_98(int n)
{
if (n >= 98)
	{
	while (n > 98)
	printf("%d, ", n--);

	printf("%d\n", n);
	}
else
	{
	while (n < 98)
	printf("%d, ", n++);

	printf("%d\n", n);
	}
}
