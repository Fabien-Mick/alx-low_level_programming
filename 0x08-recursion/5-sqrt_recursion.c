#include "main.h"

/**
 * natural_sqrt - Calculates the natural square root of a number recursively
 * @n: The number to calculate the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of the number, or -1 if it doesn't have one
 */
int natural_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (natural_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of the number, or -1 if it doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (natural_sqrt(n, 0));
}
