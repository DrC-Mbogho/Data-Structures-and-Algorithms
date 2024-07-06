#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct list_node_h - Singly linked list node
 * @data: string value stored by the node
 * @next: pointer to the next node in the list
 *
 * Description: Singly linked list node structure
 */
typedef struct list_node
{
	char *data;
	struct list_node *next;
} listnode_t;


void insert_node(listnode_t **head, char *data);
char *delete_node(listnode_t **head);
void display_list(listnode_t *head);


#endif /* ifndef SINGLY_LINKED_LIST_H */
