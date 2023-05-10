#include "monty.h"

/**
 * _swap - removes the top element of the stack
 * @stack: pointer to head to stack
 * @line_number: line number
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp1 = (*stack);
	tmp2 = (*stack)->next;
	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
	(*stack) = tmp2;
}

/**
 * _add - adds the top two elements of the stack.
 * @stack: pointer to head to stack
 * @line_number: line number
*/
void _add(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	_pop(stack, line_number);
	(*stack)->n += tmp;

}
