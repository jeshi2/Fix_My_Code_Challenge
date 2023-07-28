#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	/*dlistint_t *tmp;*/
	unsigned int i;
	current = *head;
	
	if (*head == NULL)
		return (-1);

	/*deleting the first node*/
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	/*traverse node to given index*/
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	/*index out of range*/
	if (current == NULL)
		return (-1);

	/*update prev node next pointer*/
	if (current->prev != NULL)
		current->prev->next = current->next;

	/*update next node to prev pointer*/
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (-1);
}
