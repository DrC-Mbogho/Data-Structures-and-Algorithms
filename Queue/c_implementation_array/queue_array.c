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
