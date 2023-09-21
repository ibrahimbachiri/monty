#include "monty.h"
/**
 * push - Pushes an integer onto the stack.
 * @stack: Pointer to the stack data structure.
 * @value: The integer value to be pushed.
 *
 * This function pushes the specified integer onto the stack
 * if there is space available. If the stack is full, it
 * prints an error message and exits with EXIT_FAILURE.
 */
void push(Stack* stack, int value)
{
	if (stack->top < STACK_SIZE - 1) {
	stack->data[++(stack->top)] = value;
	}
	else
	{
	fprintf(stderr, "Stack overflow\n");
	exit(EXIT_FAILURE);
	}
}
void initialize(Stack* stack) {
    stack->top = -1;
}

int is_empty(Stack* stack) {
    return stack->top == -1;
}
int pop(Stack* stack) {
    if (!is_empty(stack)) {
        return stack->data[(stack->top)--];
    } else {
        fprintf(stderr, "can't pop an empty stack\n");
        exit(EXIT_FAILURE);
    }
}

void print_stack(Stack* stack) {
    for (int i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->data[i]);
    }
}
