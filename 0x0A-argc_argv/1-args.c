#include <stdio.h>

/**
* main - prints the number of arguments
*@argc: number of arguments
*@argv:array of arguments
*Return: the number of arguments
*/

int main(int argc, char *argv[])
{
	int count;

	(void)argv;

	count = argc - 1;
	printf("%d\n", count);
	return (0);
}

