#include "monty.h"

/**
 * main - Read Monty byte code files
 *
 * @ac: Number of arguments
 * @av: Arguements
 * Return: 0
 */

void push(stack_t **stack, unsigned int line_number)

{
printf ("push réussit ligne: %d %p \n ", line_number,(void*)stack);
}


int main(int ac, char **av)
{
	FILE *file;



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
	return (EXIT_SUCCESS);
}
