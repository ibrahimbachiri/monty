#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @stack: Pointer to the pointer to the stack (doubly linked list)
 * @line_number: Line number in the Monty bytecodes file
 *
 * Description:
 * This function removes the top element of the stack. If the stack is empty,
 * it prints an error message and exits with EXIT_FAILURE.
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
