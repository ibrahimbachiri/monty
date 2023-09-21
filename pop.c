#include "monty.h"


int pop(Stack* stack) {
    if (!is_empty(stack)) {
        return stack->data[(stack->top)--];
    } else {
        fprintf(stderr, "can't pop an empty stack\n");
        exit(EXIT_FAILURE);
    }
}
