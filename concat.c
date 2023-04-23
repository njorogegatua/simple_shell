#include "shell.h"

/**
  * _strcat - It concatenates the two str
  * @dest: Destination str
  * @src: Source str
  * Return: A ptr to resulting str destination
  */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
		dlen++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

/**
  * _strlen - It counts length of str
  * @s: str to count
  * Return: Length of str
  */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
  * _strcmp - It compares two str
  * @s1: First str
  * @s2: Second str
  * Return: int val
  */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, pos = 0, diff = 0, lim = 0;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (len_s1 <= len_s2)
		lim = len_s1;
	else
		lim = len_s2;

	while (pos <= lim)
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
  * _strdup - It dups a str
  * @str: String to dup
  * Return: Str duplicated
  */

char *_strdup(char *str)
{
	int idx = 0, len = 1;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	dup_str = malloc((sizeof(char) * len) + 1);
	if (dup_str == NULL)
		return (NULL);

	while (idx < len)
	{
		dup_str[idx] = str[idx];
		idx++;
	}

	dup_str[idx] = '\0';
	return (dup_str);
}

/**
  * _atoi -It converts str to int.
  * @s: Ptr to convert
  * Return: An int
  */

int _atoi(char *s)
{
	int min = 1, isi = 0, pos = 0;
	unsigned int ni = 0;

	while (s[pos])
	{
		if (s[pos] == '-')
			min *= -1;

		while (s[pos] >= '0' && s[pos] <= '9')
		{
			isi = 1;
			ni = (ni * 10) + (s[pos] - '0');
			pos++;
		}

		if (isi == 1)
			break;

		pos++;
	}

	ni *= min;
	return (ni);
}
