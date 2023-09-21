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

int pop(Stack* stack)
void push(Stack* stack, int value);


/* ... Other header declarations ... */

#endif /* MONTY_H */
