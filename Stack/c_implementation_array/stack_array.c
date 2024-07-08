#include "stack_array.h"


/**
 * is_empty - Checks if the stack is empty
 * @stack: Pointer to the stack
 *
 * Return: 1 if the stack is empty, otherwise 0
 */
int is_empty(stack_t *stack)
{
	if (stack == NULL || stack->top == -1)
		return (1);
	return (0);
}

/**
 * initialise_stack - Initialises the stack
 * @size: Maximum number of items in the stack
 *
 * Return: Pointer to the stack
 */
stack_t *initialise_stack(int size)
{
	stack_t *stack;

	if (size <= 0)
		return (NULL);

	stack = malloc(sizeof(stack_t));
	if (stack == NULL)
	{
		perror("Malloc failed while initialising stack\n");
		return (NULL);
	}

	stack->size = size;
	stack->top = -1;
	stack->content = malloc(size * sizeof(char *));
	if (stack->content == NULL)
	{
		perror("Malloc failed while allocating memory for stack content\n");
		free(stack);
		return (NULL);
	}

	return (stack);
}
