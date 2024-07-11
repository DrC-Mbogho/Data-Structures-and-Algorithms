#include "queue_array.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 * Description: Used to evaluate if the queue program is behaving as expected
 */
int main() {
    queue_t *queue = NULL;

    queue = initialise_queue(6);
    printf("is_empty() %d\n", is_empty(queue));
    printf("is_full() %d\n", is_full(queue));
    printf("queue->size = %d\n", queue->size);
    enqueue(queue, "001");
    enqueue(queue, "002");
    enqueue(queue, "003");
    enqueue(queue, "004");
    enqueue(queue, "005");
    enqueue(queue, "006");
    enqueue(queue, "007");
    display_queue(queue);
    dequeue(queue);
    display_queue(queue);
    enqueue(queue, "007");
    dequeue(queue);
    dequeue(queue);
    enqueue(queue, "008");
    enqueue(queue, "009");
    display_queue(queue);

    return 0;
}
