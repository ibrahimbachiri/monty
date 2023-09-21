#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: A pointer to the stack.
 *
 * This function swaps the positions of the top two elements of the stack.
 * If the stack contains less than two elements, it prints an error message
 * and exits with EXIT_FAILURE.
 */
void swap(Stack *stack)
{
	int temp = stack->items[stack->top];
	if (stack->top < 1)
	{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	stack->items[stack->top] = stack->items[stack->top - 1];
	stack->items[stack->top - 1] = temp;
}

