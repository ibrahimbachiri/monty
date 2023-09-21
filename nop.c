#include "monty.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * nop - Does nothing (no operation).
 * @stack: A pointer to the stack.
 *
 * This function does nothing and serves as a placeholder for the "nop" opcode.
 * It's used when the "nop" opcode is encountered in the bytecode.
 */
void nop(Stack *stack)
{
	(void)stack;
}
