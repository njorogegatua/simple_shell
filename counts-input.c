#include "shell.h"

/**
  * count_input - it Counts words typed by the user
  * @str: The str that contains the words
  * Return: The no of words found in the str
  */

int count_input(char *str)
{
	int i = 0, cw = 0, state = 0;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			state = 0;
		else if (state == 0)
		{
			state = 1;
			cw++;
		}

		i++;
	}

	return (cw);
}

/**
  * count_delims - it Counts delimiters in a str
  * @str: The str that contains the delimiters
  * @del: The delimiters to will find in the str
  * Return: The no of delimiters in the str
  */

int count_delims(char *str, char *del)
{
	int i = 0, j = 0, cw = 0;

	while (del[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[j] == del[i])
				cw++;
			j++;
		}
		i++;
	}

	return (cw);
}
