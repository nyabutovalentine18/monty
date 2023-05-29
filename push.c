#include "monty.h"
/**
 * push - pushes an element to the stack.
 * @stack: pointer to the top of the stack
 * @line_number: the line number of the command being run
 *
 * Return: 0
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *pStack;
	(void) line_number;
	pStack = malloc(sizeof(stack_t));
	if (pStack == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		ERROR_MANAGE = -1;
		return;
	}
	pStack->next = NULL;
	pStack->prev = NULL;
	if (*stack == NULL)
	{
		*stack = pStack;
		return;
	}
	pStack->next = *stack;
	(*stack)->prev = pStack;
	*stack = pStack;
}
