#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add - Adds the top two elements of the stack.
 * @stack: A pointer to the stack.
 *
 * This function adds the top two elements of the stack. If the stack contains
 * less than two elements, it prints an error message and exits with EXIT_FAILURE.
 * The result is stored in the second top element of the stack, and the top element
 * is removed.
 */
void add(Stack *stack) {
  
  int result = stack->items[stack->top] + stack->items[stack->top - 1];
    if (stack->top < 1) {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

  
    stack->items[stack->top - 1] = result;
    stack->top--;
}
