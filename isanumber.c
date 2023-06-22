#include "monty.h"

/**
 * isanumber - Checks if string is a number.
 * @s: string to be checked.
 *
 * Return: 1 if string is a number, 0 if not.
 */
int isanumber(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);

	if (*s == '-' || *s == '+')
		s++;

	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}

	return (1);
}
