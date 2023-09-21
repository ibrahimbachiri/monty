#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STACK_SIZE 100

typedef struct {
    int data[STACK_SIZE];
    int top;
} Stack;

void initialize(Stack* stack);

int is_empty(Stack* stack);

void push(Stack* stack, int value);

int pop(Stack* stack);

void print_stack(Stack* stack);

/* ... Other header declarations ... */

#endif /* MONTY_H */
