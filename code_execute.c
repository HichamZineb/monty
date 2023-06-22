#include "monty.h"

/**
 * code_execute - executes code in argv.
 * @arg_v: Pointer to code to execute.
 * @stack: Pointer to pointer to stack.
 * @line_number: Number to line.
 *
 * Return: Nothing.
 */
void code_execute(char *arg_v, stack_t **stack, unsigned int line_number)
{
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(arg_v, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, arg_v);
	free_stack(*stack);
	fclose(global.file);
	free(global.line);
	exit(EXIT_FAILURE);
}
