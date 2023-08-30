#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the beginning of the list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;
	const listint_t *temp;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (node_count);
}
