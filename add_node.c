#include "monty.h"

/**
 * add_node - Adds node to beginning of list.
 * @stack: Pointer to pointer to stack.
 * @data: New node data.
 *
 * Return: Pointer to the new node.
 */
stack_t *add_node(stack_t **stack, const int data)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	new_node->n = data;
	new_node->prev = NULL;

	if (!*stack)
		new_node->next = NULL;
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	*stack = new_node;

	return (new_node);
}
