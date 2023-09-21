#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: Pointer to the pointer to the stack (doubly linked list)
 * @line_number: Line number in the Monty file
 *
 * Description: Pushes an integer onto the stack. If not an integer or no
 * argument given, prints an error and exits with EXIT_FAILURE.
 */
void push(stack_t **stack, unsigned int line_number)
{
    char *arg;
    int value;

    arg = strtok(NULL, " \t\n");

    if (!arg || !is_number(arg))
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = atoi(arg);

    /* Create a new node and push it onto the stack */
    add_node(stack, value);
}

/**
 * is_number - Checks if a string is a valid integer
 * @str: The string to check
 *
 * Return: 1 if it's a number, 0 otherwise
 */
int is_number(char *str)
{
    int i = 0;

    if (str[0] == '-')
        i = 1;

    for (; str[i] != '\0'; i++)
    {
        if (!isdigit((unsigned char)str[i]))
            return (0);
    }
    return (1);
}

/**
 * add_node - Adds a new node to the stack
 * @stack: Pointer to the pointer to the stack (doubly linked list)
 * @value: Value to be added to the new node
 */
void add_node(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack)
        (*stack)->prev = new_node;

    *stack = new_node;
}

/**
 * pint - Prints the value at the top of the stack
 * @stack: Pointer to the pointer to the stack (doubly linked list)
 * @line_number: Line number in the Monty file
 *
 * Description: Prints the integer value at the top of the stack, followed
 * by a newline. If the stack is empty, it prints an error message and exits
 * with EXIT_FAILURE.
 */
void pint(stack_t **stack, unsigned int line_number)
{
    if (!stack || !*stack)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*stack)->n);
}
