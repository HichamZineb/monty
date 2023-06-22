#include "monty.h"

/**
 * pall - Prints all values on the stack.
 * @stack: Pointer to pointer to stack.
 * @line_number: Number of line.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *actual = *stack;

	while (actual != NULL)
	{
		printf("%d\n", actual->n);
		actual = actual->next;
		(void)line_number;
	}
}
