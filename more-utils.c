#include "shell.h"

/**
 * _putchar - writes char c to stdout
 * @c: Char to print
 * Return: On success 1.
 * On error, -1 returned, and err-no is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
  * _puts - Prints str
  * @str: Str to print
  * Return: Nothing
  */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

/**
  * _strncmp - It compares at most the first n bytes of string1 and string2
  * @s1: The first str
  * @s2: The second str
  * @len: Limit bytes of comparison
  * Return: int value
  */

int _strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int pos = 0;
	int diff = 0;

	while (pos < len)
	{
		if (s1[pos] == s2[pos])
		{
			pos++;
			continue;
		}
		else
		{
			diff = s1[pos] - s2[pos];
			break;
		}

		pos++;
	}

	return (diff);
}

/**
  * _realloc - Resizes ptr that was previously allocated
  * @ptr: Ptr previously allocated
  * @old_size: Old size of pointer
  * @new_size: New size of new pointer
  * Return: New pointer to the mem block allocated with new size
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nptr);
}
