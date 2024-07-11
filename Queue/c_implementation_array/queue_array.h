#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct queue - A queue of strings
 * @size: Maximum number of elements in the queue
 * @front: Index of the first element in the queue
 * @back: Index of the last element in the queue
 * @count: Number of items currently in the queue
 * @content: Array of strings
 *
 * Description: A structure of the queue abstract data type
 */
typedef struct queue
{
	int size;
	int front;
	int rear;
	int count;
	char **content;
} queue_t;


int is_empty(queue_t *queue);
int is_full(queue_t *queue);
void enqueue(queue_t *queue, const char *data);
void dequeue(queue_t *queue);
char *peek(queue_t *queue);
void display_queue(queue_t *queue);
queue_t *initialise_queue(int size);


#endif /* ifndef QUEUE_ARRAY_H */
