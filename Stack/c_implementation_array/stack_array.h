#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H


#include <stdio.h>
#include <stdlib.h>


/**
 * struct stack - A stack of strings
 * @size: Maximum number of items the stack can hold
 * @top: Pointer to the item currently at the top of the stack
 * @content: Array of strings contained in the stack
 *
 * Description: A structure of the stack abstract data type
 */
typedef struct stack
{
	size_t size = 0;
	size_t top = -1;
	char **content;
} stack_t;


int is_empty(stack_t *stack);
int is_full(stack_t *stack);
void push(stack_t *stack);
void pop(stack_t *stack);
void peek(stack_t *stack);


#endif /* ifndef STACK_ARRAY_H */
