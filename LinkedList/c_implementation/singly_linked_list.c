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
 * delete_node - Removes a node from the existing list
 * @head: Pointer to the head node
 *
 * Return: data value of the deleted node, otherwise null
 * Description: If the list is empty a null reference will be returned, otherwise the string value
 * of the deleted node will be returned.
 */
char *delete_node(list_node_t **head)
{
	list_node_t *current_node;
	list_node_t *temp; /* Stores 'next' of the current_node */
	char *data = NULL;

	/* Check if list is empty */
	if (head == NULL)
	{
		printf("\nCannot delete from an empty list\n");
		return (NULL);
	}

	current_node = *head;
	if (current_node->next == NULL) /* When list has only one node */
	{
		*head = NULL;
		data = strdup(current_node->data);
		free(current_node);
	}
	else
	{
		temp = current_node->next;
		while (temp->next != NULL)
		{
			current_node = temp;
			temp = temp->next;
		}
		data = strdup(temp->data);
		current_node->next = NULL;
		free(temp);
	}

	return (data);
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
