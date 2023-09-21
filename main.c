#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int line_number = 0;

int main(int argc, char *argv[])
{
	FILE *file = NULL;
	Stack stack;
	char opcode[100];
	int value;
	if (argc != 2) {
	fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
	return EXIT_FAILURE;
	}

	file = fopen(argv[1], "r");
	if (file == NULL) {
	perror("Unable to open file");
	return EXIT_FAILURE;
	}

	stack.top = -1;

	while (fscanf(file, "%s", opcode) != EOF) {
	line_number++;
	if (strcmp(opcode, "push") == 0)
	{
	if (fscanf(file, "%d", &value) != 1)
	{
	fprintf(stderr, "L%d: push requires an integer argument\n", line_number);
	return EXIT_FAILURE;
	}
	push(&stack, value);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
	pall(&stack);
	}
	else if (strcmp(opcode, "pint") == 0)
	{ 
	pint(&stack);
	}
	else if (strcmp(opcode, "pop") == 0)
	{ 
	pop(&stack);
	}
       	else if (strcmp(opcode, "swap") == 0)
	{
	swap(&stack);
	}
	else
	{
	fprintf(stderr, "L%d: Unknown opcode: %s\n", line_number, opcode);
	return EXIT_FAILURE;
	}
	}
	fclose(file);
	return EXIT_SUCCESS;
}
