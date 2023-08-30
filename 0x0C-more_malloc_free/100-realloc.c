#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, i;
	char *old_ptr, *new_ptr_char;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	min_size = (old_size < new_size) ? old_size : new_size;
	old_ptr = ptr;
	new_ptr = malloc(new_size);
	new_ptr_char = new_ptr;

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < min_size; i++)
		new_ptr_char[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}
