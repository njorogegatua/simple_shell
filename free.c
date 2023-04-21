#include "shell.h"

/**
  * frees_get_env - frees environment
  * @env_path: Env variable to free
  * Return: Nothing
  */

void frees_get_env(char *env_path)
{
	int i;

	for (i = 4; i >= 0; i--)
		env_path--;

	free(env_path);
}

/**
  * frees_tokens - frees token
  * @tokns: token
  * Return: Nothing
  */

void frees_tokens(char **tokns)
{
	char **temp = tokns;

	if (tokns)
	{
		while (*tokns)
			free(*tokns++);

		free(temp);
	}
}
