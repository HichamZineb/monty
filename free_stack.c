#include "monty.h"

/**
 * free_stack - Frees actual stack.
 * @stack: Stack to free.
 *
 * Return: Nothing.
 */
void free_stack(stack_t *stack)
{
	stack_t *actual;

	while (stack)
	{
		actual = stack;
		stack = stack->next;
		free(actual);
	}
}
