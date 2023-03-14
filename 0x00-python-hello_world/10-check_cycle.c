#include "lists.h"
/**
 * check_cycle - checks for cycle in a linked list
 * @list: linked list to check
 * Return: 1 if cycle, 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if(list == NULL || list->next ==  NULL)
		return (0);
	current = list;
	check = current->next;

	while (current != NULL && check->next != NULL
			&& check->next->next != NULL)
	{
		if (current == check)
			return (1);
		current = current->next;
		check = check->next->next;
	}
	
	return (0);
}
