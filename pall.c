#include "monty.h"
/**
 * pall -  prints all the values on the stack, starting from
 * the top of the stack.
 * @stack: pointer to the top of the stack
 * @line_number: the line number of the command being run
 *
 * Return: 0
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *p = *stack;
	(void) line_number;

	while (p != NULL)
	{
		fprintf(stderr, "%d\n", p->n);
		p = p->next;
	}
}
