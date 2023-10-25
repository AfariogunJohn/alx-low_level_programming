#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 *
 * @n: input number.
 * @div: iterator.
 * Return: 1 if a number is divisible else 0
 */

int is_divisible(int n, int div)
{
	if (div == n - 1 || n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_divisible(n, div + 1));
}

/**
 * is_prime_number - checks for prime numbers
 *
 * @n: input number.
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, 2));
}
