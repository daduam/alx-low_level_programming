#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: char*
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _is_palindrome - recursively checks if substring s[a..b] is a palindrome
 * @s: char*
 * @a: int
 * @b: int
 * Return: 1 if @s is palindrome. 0 if not
 */
int _is_palindrome(char *s, int a, int b)
{
	if (a == b)
		return (1);

	if (s[a] != s[b])
		return (0);

	if (a < b + 1)
		return (_is_palindrome(s, a + 1, b - 1));

	return (1);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: char*
 * Return: 1 if @s is palindrome. 0 if not
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);

	return (_is_palindrome(s, 0, n - 1));
}
