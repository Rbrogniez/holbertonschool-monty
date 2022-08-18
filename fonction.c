#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * push - pushes element to the stack
 *
 * @line_number: line in file "filename"
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	int i, num;
	stack_t *new;
	stack_t *tmp;

	tmp = *stack;
	for (i = 0; i < 256 && globline[i]; i ++)
	{
		if (strcmp(globline + i, "push") == 0)
		{
			i += 4;
			while(!globline[i])
				i++;
			num = atoi(globline + i);
			if (!num && globline[i] != '0')
			{
				printf("L%d: usage: push integer\n",line_number);
				exit(EXIT_FAILURE);
			}
		}
		i++;
	}
	if (i == 256)
	{
		printf("L%d: usage: push integer\n",line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	new->n = num;
	new->next = tmp;
	new->prev = NULL;
	if(tmp)
		tmp->prev = new;
	*stack = new;
}

/**
 * pall - prints all ellements in stack
 *
 * @line_number: line in file "filename"
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	while (tmp)
	{
		printf("%d\n",tmp->n);
		tmp = tmp->next;
	}
	if(0)
		printf("%d",line_number);


}
void pint(stack_t **stack, unsigned int line_number)
{
	printf("%d%p",line_number,(void *)stack);
}
void pop(stack_t **stack, unsigned int line_number)
{
	printf("%d%p",line_number,(void *)stack);
}
void add(stack_t **stack, unsigned int line_number)
{
	printf("%d%p",line_number,(void *)stack);
}
void nop(stack_t **stack, unsigned int line_number)
{
	printf("%d%p",line_number,(void *)stack);
}
