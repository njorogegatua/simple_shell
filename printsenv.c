#include "shell.h"

/**
  * _print_env - it prints env built-in
  * Return: Nothing
  */

void _print_env(void)
{
	int i = 0;
	int j = 0;

	while (environ[i])
	{
		j = 0;
		while (environ[i][j])
		{
			_putchar(environ[i][j]);
			j++;
		}

		if (j != 0)
			_putchar('\n');
		i++;
	}
}
