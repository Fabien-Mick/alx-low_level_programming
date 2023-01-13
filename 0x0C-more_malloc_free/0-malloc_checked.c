#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memry;

	memry = malloc(b);

	if (memry == NULL)
		exit(98);

	return (memry);
}
