#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pop(stack_t **stack, unsigned int line_number)
{
	printf("%d%p", line_number, (void *)stack);
}
void add(stack_t **stack, unsigned int line_number)
{
	printf("%d%p", line_number, (void *)stack);
}
void nop(stack_t **stack, unsigned int line_number)
{
	printf("%d%p", line_number, (void *)stack);
}