#include "main.h"
/**
 * _strncpy - function that copies a strings.
 * @src: pointer to source char.
 * @dest: pointer to destination char .
 * Return: char
 *@n: number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
