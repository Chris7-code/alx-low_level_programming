#include <stdio.h>

/**
 * print_something - prints a msg before the main
 */
void print_something(void) __attribute__ ((constructor));
void print_something(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
