#include "stack_array.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main()
{
	stack_t *stack = NULL;

	stack = initialise_stack(5);
	push(stack, "Chao");
	push(stack, "Mark");
	push(stack, "Mary");
	push(stack, "Joseph");
	push(stack, "Billy");
	print_stack(stack);
	push(stack, "Hanifa");
	printf("Top of the stack: %s\n", peek(stack));
	pop(stack);
	pop(stack);
	pop(stack);
	printf("Top of the stack: %s\n", peek(stack));
	pop(stack);
	print_stack(stack);
	pop(stack);
	print_stack(stack;
	return (0);
}
