#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line.
 * @stack: pointer to the top of the stack
 * @line_number: the line number of the command being run
 *
 * Return: 0
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)

	{
		ERROR_MANAGE = -1;
		printf("L%d: can't pint, stack empty\n", line_number);
		return;
	}
	printf("%d\n", (*stack)->n);
}
