#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - Pushes an element onto the stack.
 * @stack: A pointer to the stack.
 * @value: The integer value to push onto the stack.
 *
 * This function pushes an integer element onto the stack. It checks for
 * stack overflow and exits with an error message if the stack is full.
 */
void push(Stack *stack, int value)
{
	if (stack->top == STACK_SIZE - 1)
	{
	fprintf(stderr, "Stack overflow\n");
	exit(EXIT_FAILURE);
	}
	stack->items[++stack->top] = value;
}

/**
 * pall - Prints all values on the stack, starting from the top.
 * @stack: A pointer to the stack.
 *
 * This function prints all the values on the stack, starting from the top
 * and going down to the bottom. If the stack is empty, it does not print
 * anything.
 */
void pall(Stack *stack)
{
	int i;
	for (i = stack->top; i >= 0; i--)
	{
	printf("%d\n", stack->items[i]);
	}
}
