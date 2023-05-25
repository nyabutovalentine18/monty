#include "monty.h"

/**
*push - adds a node to the stack
*@head: pointer to the stack head
*@count: line_number
*Return: nothing
*/

void push(stack_t **head, unsigned int count)
{
stack_t *top;
(void)count;
top = malloc(sizeof(stack_t));
if (top == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
top->n = var_global.push;
top->next = *head;
top->prev = NULL;
if (*head != NULL)
(*head)->prev = top;
*head = top;
}

