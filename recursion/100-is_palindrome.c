#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the input string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	s[len - 1] = '\0';

	return (is_palindrome(s + 1));
}
