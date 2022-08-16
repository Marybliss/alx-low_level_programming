#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *hare;

	p = hare = head;
	while (p && hare && hare->next)
	{
		p = tortoise->next;
		hare = hare->next->next;
		if (p == hare)
		{
			p = head;
			break;
		}
	}
	if (!p || !hare || !hare->next)
		return (NULL);
	while (p != hare)
	{
		p = p->next;
		hare = hare->next;
	}
	return (hare);
}
