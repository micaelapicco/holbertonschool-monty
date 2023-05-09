#include "monty.h"
/**
 * _isdigit - checks if string has a letter in it
 * @string: string to check
 * Return: 0 if letter found, 1 if not
*/
int _isdigit(char string[])
{
	int i = 0;

	if (string[0] == '-')
		string[0] = '0';
	for (i = 0; string[i]; i++)
	{
		if (isdigit(string[i]) == 0)
			return (0);
	}
	return (1);
}
