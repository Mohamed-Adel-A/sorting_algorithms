#include "sort.h"

void swap_nodes(listint_t **head, listint_t *first_node, listint_t *second_node)
{
	listint_t *tmp_node;

	tmp_node->n = first_node->n;
	tmp_node->next = first_node->next;
	tmp_node->prev = first_node->prev;

	if (first_node->prev != NULL)
		first_node->prev->next = second_node;
	else
		*head = second_node;

	if (second_node->next != NULL)
		second_node->next->prev = first_node;
	
	first_node->n = second_node->n;
	first_node->next = second_node->next;
	first_node->prev = second_node->prev;

	second_node->n = first_node->n;
	second_node->next = first_node->next;
	second_node->prev = first_node->prev;

	
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers in ascending order
 *                       using the Insertion sort algorithm
 * @list: list to be sorted
 *
 * Return: nothing (void)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *next_node, *head = *list;

	if (list == NULL || *list == NULL)
		return;

	current_node = head;
	next_node = head->next;
	while(next_node != NULL)
	{
		while(current_node->prev != NULL)
		{
			if (current_node->n < curent_node->prev->n)
			{
				swap_node(curent_node->prev, current_node);
				current_node = current_node->prev;
				print_list(*list);
			}
		}
	}	
}
