#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pint - Prints the value at the top of the stack, followed by a new line.
 * @stack: A pointer to the stack.
 *
 * This function prints the value at the top of the stack, followed by a new line.
 * If the stack is empty, it prints an error message and exits with EXIT_FAILURE.
 */
int line_number = 0;
void pint(Stack *stack)
{
	if (stack->top == -1)
	{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->items[stack->top]);
}

