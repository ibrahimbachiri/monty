#ifndef MONTY_H
#define MONTY_H

#define STACK_SIZE 100

typedef struct Stack {
    int items[STACK_SIZE];
    int top;
} Stack;

void push(Stack *stack, int value);
void pall(Stack *stack);
void pint(Stack *stack);
#endif
