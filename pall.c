#include "monty.h"
/**
* pall - prints all elements in  the stack
* @head: pointer to the top node
* @line_number: number used in bytecode file
* Return: nothing
*/
void pall(stack_t **head, unsigned int line_number)
{
stack_t *h;
(void)line_number;
h = *head;
if (h == NULL)
return;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
}
}
