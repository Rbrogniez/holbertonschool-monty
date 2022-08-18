#include "monty.h"

instruction_t* initfonc()
{
instruction_t *structfonc[8] = malloc (sizeof(instruction_t) * 8);
structfonc[0] ->
}

/**
* main -
*/


int main(int ac, char **av)
{
	FILE *file;

	int i;

	instruction_t structfonc [8];
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




	fclose(file);
	for (i = 0 ; i < 8; i++)
	free(structfonc[i])
	return (EXIT_SUCCESS);
}

