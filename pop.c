#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @stack: Pointer to the pointer to the stack
 * @line_number: Line number in the Monty file
 *
 * Description: Removes the top element of the stack.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	if (*stack)
	(*stack)->prev = NULL;

	free(temp);
}
