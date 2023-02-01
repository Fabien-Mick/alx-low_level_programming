#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: List to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t temp;

	for (temp = 0; h; temp++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (temp);
}
