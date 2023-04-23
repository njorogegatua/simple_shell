#include "shell.h"

/**
  * remove_new_line -  it removes new line character from str
  * @str: The str
  * Return: string without  new line character
  */

char *remove_new_line(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '\n')
			str[i] = '\0';
		i++;
	}

	return (str);
}

