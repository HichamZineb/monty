#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Pointer to pointer to stack.
 * @line_number: line number of the opcode
 **/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(global.line);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;

	if (*stack != NULL)
		(*stack)->prev = NULL;
}
