#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars, with a specific char.
 * @size: input size
 * @c: input char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
		s = malloc(size * sizeof(char));
	else
		return (NULL);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i += 1;
	}
	return (s);
}
