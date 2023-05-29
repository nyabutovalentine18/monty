#include "monty.h"

/**
 * excute - where the command is search in the dictionary
 * @st: is the stack
 * @line: is the line of the comand
 * @command: is the command
 * @instruct: is the array whit whole commands
 * @monty_file: it the file how contain
 *
 * Return: if fails throught errors
 */
int excute(stack_t **st, unsigned int line, char *command,
	   instruction_t instruct[], FILE *monty_file)
{
	char *word = NULL, *number = NULL;

	unsigned int i = 0, count = 0, num = 0;

	if (command[i] == '\n' || command[i] == '#')
		return (0);
	for (i = 0; command[i]; i++)
		if (command[i] == '\t' || command[i] == '\n' || command[i] == ' ')
			count++;
	if (count == strlen(command))
		return (0);
	if (command[strlen(command) - 1] == '\n')
		command[strlen(command) - 1] = '\0';
	number = strdup(command), word = strtok(command, " \t");
	for (i = 0; instruct[i].opcode != NULL; i++)
	{
		if (strcmp(instruct[i].opcode, word) == 0)
		{
			if (instruct[i].f != NULL)
			{
				instruct[i].f(st, line);
				if (strcmp(instruct[i].opcode, "push") == 0)
				{
					num = number_node(number, line);
					(*st)->n = num;
				}
				if (ERROR_MANAGE == -1)
				{
					free(number), free(command), free_dlist(*st);
					fclose(monty_file), exit(EXIT_FAILURE);
				}
			}
			free(number);
			return (0);
		}
	}
	free(number);
	fprintf(stderr, "L%u: Unknown instruction %s\n", line, word);
	return (1);
}
