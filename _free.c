#include "monty.h"
/**
 * _free - free stack
 * @stack: stack
 * Return: Nothing
*/
void _free(stack_t *stack)
{
    stack_t *temp;

    while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
