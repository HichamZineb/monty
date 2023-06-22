#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack.
 * @stack: Double pointer to stack.
 * @line_number: Line number.
 *
 * Return: Nothing.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *actual = *stack;
	(void) line_number;

	while (actual && actual->n > 0 && actual->n <= 127)
	{
		printf("%c", actual->n);
		actual = actual->next;
	}
	printf("\n");
}
