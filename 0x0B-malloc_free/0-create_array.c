#include "main.h"
#include<stdlib.h>

/**
  * create_array - Creates an array of chars Initializes it with specific char
  * @size: Size of the array
  * @c: The specific character to initialize the array.
  * Return: null if size = 0 or it fails.
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
