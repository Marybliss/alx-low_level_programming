#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2;
	listint_t *preview;

	p2 = head;
	preview = head;
	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = preview;
			preview =  p2;
			while (1)
			{
				p2 = preview;
				while (p2->next != head && p2->next != preview)
				{
					p2 = p2->next;
				}
				if (p2->next == head)
					break;

				head = head->next;
			}
			return (p2->next);
		}
	}

	return (NULL);
}
