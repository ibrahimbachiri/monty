#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @stack: Pointer to the pointer to the stack (doubly linked list)
 * @line_number: Line number in the Monty bytecodes file
 *
 * Description:
 * This function prints the value at the top of the stack, followed by a newline.
 * If the stack is empty, it prints an error message and exits with EXIT_FAILURE.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
