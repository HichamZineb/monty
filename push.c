#include "monty.h"

/**
 * push - Pushes an element to the stacki.
 * @stack: Pointer to pointer to top.
 * @line_number: The number of the line.
 *
 * Return: Nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
	int n;

	if (global.arg == NULL || !isanumber(global.arg))
	{
		fprintf(stderr, "L%d: push integer\n", line_number);
		free_stack(*stack);
		fclose(global.file);
		free(global.line);
		exit(EXIT_FAILURE);
	}

	n = atoi(global.arg);

	if (add_node(stack, n) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		fclose(global.file);
		free(global.line);
		exit(EXIT_FAILURE);
	}
}
