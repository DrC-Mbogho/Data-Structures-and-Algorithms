#include "singly_linked_list.h"

/**
 * insert_node - Appends a new node to the list
 * @head: Address of the pointer to the head node
 * @data: String value of the new node
 *
 * Return: Nothing
 */
void insert_node(listnode_t **head, char *data)
{
	listnode_t *new_node;
	listnode_t *current_node = *head;

	new_node = malloc(sizeof(listnode_t));
	/* Check for malloc failure */
	if (new_node == NULL)
	{
		perror("Malloc error while creating a new node\n");
		return;
	}

	new_node->data = strdup(data);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
}
