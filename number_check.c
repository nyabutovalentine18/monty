#include "monty.h"
/**
 *number_node - Where the command is become to number
 *@token: is the command
 *@line_number: the line number of the command being run
 *
 *Return: 0
 */
int number_node(char *token, unsigned int line_number)
{
	unsigned int i = 0, count = 0;
	char *found;

	found = strtok(token, " \t");
	found = strtok(NULL, " \t");
	if (found == NULL)
	{
		ERROR_MANAGE = -1;
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		return (-1);
	}
	for (i = 0; found[i]; i++)
	{
		if (isdigit(found[i]) == 0 && found[i] != '-')
		{
			ERROR_MANAGE = -1;
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			return (-1);
		}
	}
	for (i = 0; found[i]; i++)
		if (found[i] == '\t' || found[i] == '\n' || found[i] == ' ')
			count++;
	if (count == strlen(found))
	{
		ERROR_MANAGE = -1;
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		return (-1);
	}
	i = atoi(found);
	return (i);
}
