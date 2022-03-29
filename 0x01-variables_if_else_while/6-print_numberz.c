#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 9
 * you are not allowed to use any variable of type char
 * you can only use the putchar function
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
