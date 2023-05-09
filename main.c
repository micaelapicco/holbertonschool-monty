#include "monty.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *buffer = NULL, *token = NULL;
	stack_t *stack = NULL;
	FILE *file = NULL;
	int line_number = 0;
	size_t bufsize = 0;
	void (*f)(stack_t **stack, unsigned int line_number);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &bufsize, file) != -1)
	{
		line_number++;
		token = strtok(buffer, DELIM);
		f = get_func(token);
		if (!f)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, token);
			exit(EXIT_FAILURE);
		}
		f(&stack, line_number);
	}
	fclose(file);
	free(stack);
	free(token);
	return (0);
}
