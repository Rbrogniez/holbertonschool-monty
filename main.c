#include "monty.h"
instruction_t** initfonc()
{
	instruction_t *structfonc[6];
	structfonc[0]->opcode = "push";
	structfonc[0]->f = push;
	structfonc[1]->opcode = "pall";
	structfonc[1]->f = pall;
	structfonc[2]->opcode = "pint";
	structfonc[2]->f = pint;
	structfonc[3]->opcode = "pop";
	structfonc[3]->f = pop;
	structfonc[4]->opcode = "add";
	structfonc[4]->f = add;
	structfonc[5]->opcode = "nop";
	structfonc[5]->f = nop;
	return (structfonc);
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
	int i, linenum = 0;
	char line[256];
	instruction_t *structfonc[6];

	structfonc = initfonc();
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
	while (fgets(globline, sizeof(globline), file) != NULL)
	{
		linenum++;
		

		

	fclose(file);
	for (i = 0 ; i < 8; i++)
		free(structfonc[i]);
	return (EXIT_SUCCESS);
}

