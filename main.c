#include "monty.h"
/**
 * free_vglo - frees the global variables
 *
 * Return: no return
 */

int main()
{
    Stack stack;
    initialize(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    pop(&stack);

    print_stack(&stack);

    return EXIT_SUCCESS;
}
