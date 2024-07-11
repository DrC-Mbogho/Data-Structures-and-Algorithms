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
		free(queue);
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
	return (queue == NULL || queue->count == 0);
}


/**
 * is_full - Evaluates if the queue is currently full
 * @queue: Pointer to the queue
 *
 * Return: 1 if the queue is full, otherwise 0
 */
int is_full(queue_t *queue)
{
	return (queue != NULL && queue->count == queue->size);
}


/**
 * enqueue - Adds a new item at the rear end of the queue
 * @queue: Pointer to the queue
 * @data: String to add to the queue
 *
 * Return: Nothing
 * Description: If the queue is already full, the data item will not be added
 * to it.
 */
void enqueue(queue_t *queue, const char *data)
{
	char **content = queue->content;

	if (is_full(queue))
	{
		printf("\nCannot add item. Queue is full\n");
		return;
	}

	if (is_empty(queue))
		queue->front = 0;

	queue->rear = (queue->rear + 1) % queue->size;
	content[queue->rear] = strdup(data);
	queue->count++;
}


/**
 * dequeue - Removes the item currently at the front of the queue
 * and returns it
 * @queue: Pointer to the queue
 *
 * Return: Nothing
 */
void dequeue(queue_t *queue)
{
	char **content = queue->content;

	if (is_empty(queue))
	{
		printf("\nCannot dequeue. Queue is empty\n");
		return;
	}

	printf("\nDequeued item: %s\n", content[queue->front]);
	free(content[queue->front]);

	queue->front = (queue->front + 1) % queue->size; /* Implement a circular queue */
	queue->count--;

	if (is_empty(queue))
	{
		queue->front = -1;
		queue->front = -1;
	}
}


/**
 * display_queue - Prints the content of the queue on standard output
 * @queue: Pointer to the queue
 *
 * Return: Nothing
 */
void display_queue(queue_t *queue)
{
	int i;
	int index;
	char **content = queue->content;

	if (is_empty(queue))
	{
		printf("\nQueue is empty\n");
		return;
	}

	printf("\nCurrent queue:\n");
	for (i = 0; i < queue->size; i++)
	{
		index = (queue->front + i) % queue->size;
		printf("%s", content[index]);
		if (i < queue->count - 1)
			printf(", ");
	}
	printf("\n");
}
