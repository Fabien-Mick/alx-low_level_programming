#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		if ((current - current->next) > 0)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (size);
}
