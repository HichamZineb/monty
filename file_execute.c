#include "monty.h"

/**
 * file_execute - Executes code from file.
 * @stack: Pointer to pointer to stack.
 *
 * Return: Nothing;
 */
void file_execute(stack_t **stack)
{
	char *arg_v = NULL;
	size_t length = 0;
	ssize_t line_read;
	unsigned int line_number = 0;

	while ((line_read = getline(&global.line, &length, global.file)) != -1)
	{
		line_number++;
		arg_v = strtok(global.line, " \t\r\n\a");
		global.arg = strtok(NULL, " \n\t");

		if (arg_v == NULL || *arg_v == '#')
			continue;

		code_execute(arg_v, stack, line_number);
	}
}
