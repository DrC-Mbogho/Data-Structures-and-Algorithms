#include "queue_array.h"


/**
 * initialise_queue - Initialises the queue
 * @size: Maximum number of items in the queue
 *
 * Return: Pointer to the initialised queue
 */
queue_t *initialise_queue(int size)
{
	queue_t *queue;

	if (size == 0)
		return (NULL);

	queue = malloc(sizeof(queue_t));
	if (queue == NULL)
	{
		perror("Malloc failed while initialising queue\n");
		return (NULL);
	}

	queue->size = size;
	queue->front = -1;
	queue->rear = -1;
	queue->count = 0;
	queue->content = malloc(size * sizeof(char *));
	if (queue->content == NULL)
	{
		perror("Malloc failed while allocating memory for queue content\n");
		return (NULL);
	}

	return (queue);
}


/**
 * is_empty - Evaluates if the queue is currently empty
 * @queue: Pointer to the queue
 *
 * Return: 1 if the queue is empty, otherwise 0
 */
int is_empty(queue_t *queue)
{
	return ((queue == NULL || queue->count == 0));
}


/**
 * is_full - Evaluates if the queue is currently full
 * @queue: Pointer to the queue
 *
 * Return: 1 if the queue is full, otherwise 0
 */
int is_full(queue_t *queue)
{
	return ((queue == NULL || queue->count == queue->size));
}
