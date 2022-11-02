#include "main.h"

/**
 * is_palindrome - checkes if a string is a palindrome
 * using recursion
 * @s: string to check
 * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;

	if (length == 0)
		return (1);

	return (check_opp_str(s, 0, length - 1));
}

/**
 * check_opp_str - checks opposite string at a particular index
 * @s: a string to check
 * @a: current index of the string
 * @b: length of the string
 * Return: correct palindrome of s
 */

int check_opp_str(char *str, int a, int b)
{
	if (a == b)
		return (1);

	if (str[a] != str[b])
		return (0);

	if (a < b + 1)
		return check_opp_str(str, a + 1, b - 1);

	return (1);
}
