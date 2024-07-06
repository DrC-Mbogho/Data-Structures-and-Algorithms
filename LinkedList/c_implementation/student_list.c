#include "singly_linked_list.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main()
{
	listnode_t *head = NULL;

	insert_node(&head, "Jane Mary");
	insert_node(&head, "Allan Poe");
	insert_node(&head, "Mary Paul");
	insert_node(&head, "Sister");
	display_list(head);
	printf("\nDeleted_node = %s\n", delete_node(&head));
	display_list(head);
	printf("\nDeleted_node = %s\n", delete_node(&head));
	printf("\nDeleted_node = %s\n", delete_node(&head));
	display_list(head);
	printf("\nDeleted_node = %s\n", delete_node(&head));

	return (0);
}
