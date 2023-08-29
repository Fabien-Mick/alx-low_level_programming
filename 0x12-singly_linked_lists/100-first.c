#include "lists.h"
#include <stdio.h>

/**
 * print_before_main - Prints specified lines.
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * before_main - Initializes data before main.
 */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	print_before_main();
}
