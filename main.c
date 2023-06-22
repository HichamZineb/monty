#include "monty.h"

global_t global;

/**
 * main - Program start.
 * @argc: Number of arguments.
 * @argv: Pointer to array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	global.file = fopen(argv[1], "r");

	if (global.file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	file_execute(&stack);
	fclose(global.file);
	free(global.line);
	free_stack(stack);
	exit(EXIT_SUCCESS);
}

