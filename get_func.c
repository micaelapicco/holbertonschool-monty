#include "monty.h"
/**
 * get_func - get correct function
 * @op: operator from getline
 * Return: Function or NULL if doesn´t exist
*/

void (*get_func(char *op))(stack_t **stack, unsigned int line_number)
{
	int i = 0;

		instruction_t all_ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"nop", _nop},
		{"swap", _swap},
		{"add", _add},
		{NULL, NULL}
	};

	while (i < 7)
	{
		if (strcmp(all_ops[i].opcode, op) == 0)
		{
			return (all_ops[i].f);
		}
		i++;
	}
	return (NULL);
}
