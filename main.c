#define _GNU_SOURCE
#include "monty.h"


int main(int argc, char *argv[])
{
 
    FILE *file;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    unsigned int line_number = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, file)) != -1)
    {
        line_number++;
        /* Parse the opcode and argument here */
        /* Call the appropriate function based on the opcode */
    }

    fclose(file);
    free(line);
    return (EXIT_SUCCESS);
}
