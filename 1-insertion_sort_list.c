#include "sort.h"

void swap_nodes(listint_t **head, listint_t *first_node, listint_t *second_node)
{
	if (first_node->prev != NULL)
		first_node->prev->next = second_node;
	else
		*head = second_node;

	if (second_node->next != NULL)
		second_node->next->prev = first_node;
	
	first_node->next = second_node->next;
	second_node->next = first_node;

	second_node->prev = first_node->prev;
	first_node->prev = second_node;
	printf("in; %i\n",first_node->n);
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
	next_node = head;
	printf("befoe current: %i\n",current_node->n);
	printf("befoe next: %i\n",next_node->n);
	while(next_node != NULL)
	{
		printf("==============\n");
		printf("befoer current: %i\n",current_node->n);
		printf("befoer next: %i\n",next_node->n);
		while(current_node->prev != NULL)
		{
			if (current_node->n < current_node->prev->n)
			{
				printf("befoe: %i\n",current_node->n);
				swap_nodes(list, current_node->prev, current_node);
				printf("befoe: %i\n",current_node->n);
				print_list(*list);
			}
			else
				current_node = current_node->prev;
		}
		next_node = next_node->next;
		current_node = next_node;
		
	}	
}
