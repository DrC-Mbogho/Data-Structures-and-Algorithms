#include "stack_array.h"


/**
 * is_empty - Checks if the stack is empty
 * @stack: Pointer to the stack
 *
 * Returns: 1 if the stack is empty, otherwise 0
 */
int is_empty(stack_t *stack)
{
	if (stack == NULL || stack->top == -1)
		return (1);
	return (0);
}
