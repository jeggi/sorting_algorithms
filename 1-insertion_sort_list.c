#include "sort.h"
/**
 * insertion_sort_list - This sorts a doubly linked list
 * @list1: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list1)
{
	listint_t *nodes;

	if (list1 == NULL || (*list1)->next == NULL)
		return;
	nodes = (*list1)->next;
	while (nodes)
	{
		while ((nodes->prev) && (nodes->prev->n > nodes->n))
		{
			nodes = swap_node(nodes, list1);
			print_list(*list1);
		}
		nodes = nodes->next;
	}
}
/**
 *swap_node - This swap a node for his previous one
 *@nodes: node
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */
listint_t *swap_node(listint_t *nodes, listint_t **list)
{
	listint_t *back = nodes->prev, *current = nodes;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
