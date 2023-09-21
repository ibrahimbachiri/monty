#include "monty.h"
void push(Stack* stack, int value) {
    if (stack->top < STACK_SIZE - 1) {
        stack->data[++(stack->top)] = value;
    } else {
        fprintf(stderr, "Stack overflow\n");
        exit(EXIT_FAILURE);
    }
}
