#include "monty.h"
/**
 * push - Pushes an element onto the stack
 *
 * @stack: Pointer to the pointer of the stack (doubly linked list)
 * @line_number: Line number where the push operation is called
 * @value: The value to be pushed onto the stack
 *
 * Description:
 * This function pushes an integer value onto the top of the stack.
 * It allocates memory for a new node, assigns the value to it, and
 * links it to the previous top node (if any) to maintain the doubly
 * linked list structure.
 *
 * Return: None (void)
 *
 * If malloc fails to allocate memory, an error message is printed
 * to stderr, and the program exits with a failure status.
 */
void push(stack_t **stack, int line_number, int value)
{
	stack_t *new_node;
	(void)line_number;
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
	(*stack)->prev = new_node;

	*stack = new_node;
}
