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
	const list_t *temp = h;
	size_t i = 0;

	while (temp != NULL)
	{
	if (temp->str != NULL)
	printf("[%d] %s\n", temp->len, temp->str);
	else
	printf("[0] (nil)\n");
	i += 1;
	temp = temp->next;
	}

	return (i);
}

