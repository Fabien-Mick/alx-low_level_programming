#include "variadic_functions.h"

/**
  * sum_them_all - Function that returns the sums of all its parameters
  * @n: number of parameters
  * Return: sum of all parameters
 */ 

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total = 0;

	va_list ptr;

	va_start(ptr,n);

	for (i = 0; i < n ; i++)
		total += va_arg(ptr, int);
		va_end(ptr);

	return total;
}
