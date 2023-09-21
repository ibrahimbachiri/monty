#ifndef MONTY_H
#define MONTY_H

#define STACK_SIZE 100

extern int line_number;
typedef struct Stack {
    int items[STACK_SIZE];
    int top;
} Stack;
void pop(Stack *stack);
void push(Stack *stack, int value);
void pall(Stack *stack);
void pint(Stack *stack);
#endif
