#include "monty.h"
/**
 * _push -  pushes an element to the stack
 * @stack: pointer to head to stack
 * @line_number: line number
*/
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *element = NULL;
	unsigned int num = 0;
	char *token = NULL;

	element = malloc(sizeof(stack_t));

	if (!element)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(NULL, DELIM);
	if (!token || !stack || _isdigit(token) == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(token);
	element->n = num;
	element->prev = NULL;
	element->next = *stack;

	if (element->next != NULL)
		(element->next)->prev = element;
	*stack = element;
}
/**
 * _pall - prints all the values on the stack,
 * starting from the top of the stack
 * @stack: pointer to head to stack
 * @line_number: line number
*/
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack;

	(void)line_number;
	while (element)
	{
		printf("%d\n", element->n);
		element = element->next;
	}
}

/**
 * _pint - prints the value at the top of the stack
 * @stack: pointer to head to stack
 * @line_number: line number
*/
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
