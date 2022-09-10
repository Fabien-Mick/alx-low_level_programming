#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(b))
	printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %zu byte(s)\n,", (unsigned long)sizeof(e));
	return (0);
}
