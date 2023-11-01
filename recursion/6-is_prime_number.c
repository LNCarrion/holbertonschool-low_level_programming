#include "main.h"

/**
 * is _prime_number_helper - help to check if a number is prime.
 * @n: the number checker
 * @divisor: the divisor to test
 *
 *Return: 1 if it is prime, 0 if not
 */

int is_prime_number_helper(int n, int divisor)
{
	if (divisor <= 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_number_helper(n, divisor - 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 *
 * Return: 1 if it is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);

	return (is_prime_number_helper(n, n / 2));
}
