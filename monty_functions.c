#include "monty.h"

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *element= NULL;
	int num = 0;
	char *token = NULL;

	element = malloc(sizeof(stack_t))

	if (!element)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}    
	token = strtok(NULL, DELIM);
	if (!token || !stack)
	{
		printf("L%u: usage: push integer", line_number);
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