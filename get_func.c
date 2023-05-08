#include "monty.h"
/**
 * get_func - get correct function
 * @stack: point to head of stack data structure
 * @op: operator from getline
 * @line_number: line number
 * Return: Function or NULL if doesn´t exist
*/
void get_func(stack_t **stack, char *op, unsigned int line_number)
{
	int i = 0;

		instruction_t all_ops[] = {
		{"push", _push},
		{"pall", _pall},
		{NULL, NULL}
	};

	while (i < 2)
	{
		if (all_ops[i].opcode[0] == op[0])
		{
			return (all_ops[i].f);
		}
		i++;
	}
	return (NULL);
}
