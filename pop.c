#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop - Removes the top element of the stack.
 * @stack: A pointer to the stack.
 *
 * This function removes the top element of the stack.
 * it prints an error message and exits with EXIT_FAILURE.
 */

void pop(Stack *stack)
{
	if (stack->top == -1)
	{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
	}
	stack->top--;
}
