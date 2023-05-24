#include "monty.h"

/**
*pall- prints the stack
*@head: head of the linked list
*@count: unused
*
*Return: nothing
*/

void pall(stack_t **head, unsigned int count)
{
stack_t *temp = NULL;

temp = *head;

if (*head == NULL)
{
return;
}

while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}

