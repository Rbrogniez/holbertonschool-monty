#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pop - remove top element of stack
 *
 * @line_number: line in file "filename"
 * @stack: the stack to change
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	printf("%d%p", line_number, (void *)stack);
}
/**
 * swap - swaps top 2 elements of stack
 *
 * @line_number: line in file "filename"
 * @stack: the stack to change
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	printf("%d%p", line_number, (void *)stack);
}
/**
 * add - add the top 2 elements of stack
 *
 * @line_number: line in file "filename"
 * @stack: the stack to change
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	printf("%d%p", line_number, (void *)stack);
}
/**
 * nop - does nothing
 *
 * @line_number: line in file "filename"
 * @stack: the stack to change
 * Return: void
 */
void nop(stack_t **stack, unsigned int line_number)
{
	printf("%d%p", line_number, (void *)stack);
}
