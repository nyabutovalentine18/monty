#include "monty.h"

/**
 * free_dlist - free a double linked list
 * @stack: pointer to the top of the stack
 */
void free_dlist(stack_t *stack)
{
	stack_t *h;

	while (stack != NULL)
	{
		h = stack;
		stack = stack->next;
		free(h);
	}
}
