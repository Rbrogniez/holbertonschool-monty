#include "monty.h"
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void nop(stack_t **stack, unsigned int line_number)
{
	printf("%d%p", line_number, (void *)stack);
}

void freeStack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}
	free(tmp);
}

void initfonc(instruction_t *structfonc)
{
	structfonc[0].opcode = "push";
	structfonc[0].f = push;
	structfonc[1].opcode = "pall";
	structfonc[1].f = pall;
	structfonc[2].opcode = "pint";
	structfonc[2].f = pint;
	structfonc[3].opcode = "pop";
	structfonc[3].f = pop;
	structfonc[4].opcode = "add";
	structfonc[4].f = add;
	structfonc[5].opcode = "nop";
	structfonc[5].f = nop;
}

/**
* main - executes monty file
*@ac: should be 2
*@av: contatins file name
*Return: failure or success
*/


int main(int ac, char **av)
{
	FILE *file;
	char *word;
	int j;
	char line[256];
	unsigned int linenum = 0;
	instruction_t structfonc[6];
	stack_t *head = NULL;

	initfonc(structfonc);
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file) != NULL)
	{
		linenum++;
		word = strtok(line, " \n");
		for (j = 0; j < 6; j++)
		{
			if (word && strcmp(word, structfonc[j].opcode) == 0)
				structfonc[j].f(&head, linenum);
		}
	}
	freeStack(&head);
	fclose(file);
	return (EXIT_SUCCESS);
}

