#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Define your data structures here */

/**
 * struct stack_s - Doubly linked list representation of a stack
 * @n: Integer value stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - Opcode and its corresponding function
 * @opcode: The opcode string
 * @f: Pointer to the function to execute the opcode
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Function prototypes */

/* Define your function prototypes here */

void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, int line_number, int value);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);

/* Add more function prototypes for other opcodes as needed */

#endif /* MONTY_H */
