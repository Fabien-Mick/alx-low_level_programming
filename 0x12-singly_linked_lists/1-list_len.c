#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - finds the number of elements in a linked list
 *@h: pointer to the list
 *Return: the number of elements
*/

size_t list_len(const list_t *h)
	{
		size_t i = 0;

		while (h)
		{
			i++;
			h = h->next;
		}

		return (i);
	}
