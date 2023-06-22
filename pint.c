#include "monty.h"

/**
 * op_pint - Prints the value at the top of the stack.
 * @stack: Pointer to pointer to stack.
 * @line_number: Number of line.
*/
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(global.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
