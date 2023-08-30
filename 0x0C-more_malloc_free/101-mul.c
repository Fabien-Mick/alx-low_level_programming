#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - Check if a character is a digit.
 * @c: The character to check.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		print_error_and_exit();
	}

	multiply(argv[1], argv[2]);

	return (0);
}

/**
 * is_valid_number - Check if a string is a valid number.
 * @num: The string to check.
 * Return: 1 if the string is a valid number, 0 otherwise.
 */
int is_valid_number(char *num)
{
	int i = 0;

	while (num[i])
	{
		if (!_isdigit(num[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * print_error_and_exit - Print "Error" and exit with status 98.
 */
void print_error_and_exit(void)
{
	char *error = "Error\n";

	while (*error)
	{
		_putchar(*error);
		error++;
	}
	exit(98);
}

/**
 * string_length - Calculate the length of a string.
 * @str: The string to calculate the length of.
 * Return: The length of the string.
 */
int string_length(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/**
 * multiply - Multiply two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int len1 = string_length(num1);
	int len2 = string_length(num2);
	int len_result = len1 + len2;
	int *result = malloc(sizeof(int) * len_result);
	int i, j;

	if (result == NULL)
		exit(98);

	for (i = 0; i < len_result; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	for (i = 0; i < len_result; i++)
	{
		_putchar(result[i] + '0');
	}
	_putchar('\n');

	free(result);
}
