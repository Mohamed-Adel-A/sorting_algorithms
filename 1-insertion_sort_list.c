#include "sort.h"

/**
 * swap_nodes - swap node in list
 * @head: list head
 * @first_node: first node
 * @second_node: second node
 *
 * Return: nothig (void)
 */
void swap_nodes(listint_t **head, listint_t *first_node,
		listint_t *second_node)
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
}

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: list to be sorted
 *
 * Return: nothing (void)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *next_node, *head;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = *list;
	current_node = head;
	next_node = head;
	while (next_node != NULL)
	{
		while (current_node->prev != NULL)
		{
			if (current_node->n < current_node->prev->n)
			{
				swap_nodes(list, current_node->prev, current_node);
				print_list(*list);
			}
			else
				current_node = current_node->prev;
		}
		next_node = next_node->next;
		current_node = next_node;
	}
}
