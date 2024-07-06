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

/**
 * display_list - Prints the linked list on standard output
 * @head: Pointer to the head node
 *
 * Return: Nothing
 */
void display_list(list_node_t *head)
{
	list_node_t *current_node = head;

	if (head == NULL)
	{
		printf("\nLinked list is empty\n");
	}
	else
	{
		printf("\nCurrent linked list:\n");
		while (current_node != NULL)
		{
			printf("%s", current_node->data);
			if (current_node->next != NULL)
				printf(" -> ");
			current_node = current_node->next;
		}
		printf("\n");
	}
}
