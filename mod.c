#include "monty.h"

/**
 * mod - Computes the modulus.
 * @stack: Double pointer to stack.
 * @line_number: Line number.
 *
 * Return: Nothing.
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int a, b;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	if (a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = b % a;
	pop(stack, line_number);
}
