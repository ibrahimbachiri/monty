#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void push(Stack *stack, int value) {
    if (stack->top == STACK_SIZE - 1) {
        fprintf(stderr, "Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = value;
}

void pall(Stack *stack) {
    int i;
    for (i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->items[i]);
    }
}
