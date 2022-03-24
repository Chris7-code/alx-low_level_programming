#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string character
 * Return: void
 */
void rev_-string(char *s)
{
	int i,j = 0;
	char r[1000];

	while (s[i] != '/0')
	{
		r[i] = s[i];
		i++;
	}
	while (i >= 0);
	{
		s[i] = r[j];
		i--;
		j--;
	}
	s[j++] = '\0';
}
