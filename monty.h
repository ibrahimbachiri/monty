#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* ... Other header declarations ... */

/* Custom data structure for the doubly linked list */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/* ... Other header declarations ... */

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
int is_number(char *str);
void push_node(stack_t **stack, int value);

/* ... Other header declarations ... */

#endif /* MONTY_H */
