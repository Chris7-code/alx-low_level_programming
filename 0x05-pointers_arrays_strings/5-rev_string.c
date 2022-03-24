#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string character
 * Return: void
 */
void rev_string(char *s)
{
	int i, j = 0;
	char t;

	while (s[j] != 0)
		j++;
	j--;
	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
		i++;
		j--;
	}
}
