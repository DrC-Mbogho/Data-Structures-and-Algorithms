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
 * is_full - Checks if the stack is full
 * @stack: Pointer to the stack
 *
 * Return: 1 if the stack is full, otherwise 0
 */
int is_full(stack_t *stack)
{
	if (stack == NULL || stack->top == (stack->size - 1))
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


/**
 * push - Adds an item to the top of the stack
 * @stack: Pointer to the stack
 * @data: String to add to the top of the stack
 *
 * Return: Nothing
 */
void push(stack_t *stack, const char *data)
{
	char **content = stack->content;

	if (is_full(stack))
	{
		printf("Stack is full.\n");
		return;
	}
	content[++(stack->top)] = strdup(data);
}


/**
 * pop - Removes an item from the top of the stack
 * @stack: Pointer to the stack
 *
 * Return: String that has been popped, otherwise null if stack is empty
 */
char *pop(stack_t *stack)
{
	char **content = stack->content;

	if (is_empty(stack))
	{
		printf("Stack is empty.\n");
		return (NULL);
	}

	return (content[(stack->top)--]);
}


/**
 * peek - Returns the item at the top of the stack without removing it
 * @stack: Pointer to the stack
 *
 * Return: String at the top of the stack, otherwise null if stack is empty
 */
char *peek(stack_t *stack)
{
	if (is_empty(stack))
	{
		printf("Stack is empty.\n");
		return (NULL);
	}
	return ((stack->content)[stack->top]);
}


/**
 * print_stack - Prints the existing stack on standard output
 * @stack: Pointer to the stack
 *
 * Return: Nothing
 */
void print_stack(stack_t *stack)
{
	int i;

	if (is_empty(stack))
	{
		printf("\nStack is empty.\n");
	}
	else
	{
		for (i = stack->top; i >= 0; i--)
			printf("%s\n", (stack->content)[i]);
	}
}
