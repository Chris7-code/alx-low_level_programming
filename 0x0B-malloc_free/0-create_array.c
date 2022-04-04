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
	unsigned int i;

	if (size == 0)
		return (NULL);
	char *s = (*char)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
