#include "main.h"

/**
 * is_palindrome - checkes if a string is a palindrome
 * using recursion
 * @s: string to check
 * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
	int length = 0, mid, i = 0;

	while (*(s + length))
		length++;

	mid = length / 2;

	return (check_opp_str(s, mid, length, i));
}

/**
 * check_opp_str - checks opposite string at a particular index
 * @s: a string to check
 * @mid: mid index of the string
 * @length: length of the string
 * @i: current index at string a
 * Return: correct palindromw of s
 */

int check_opp_str(char *s, int mid, int length, i)
{
	if (length == 0)
		return (1);

	if (i <= mid)
	{
		if (*(s + i) == s[length - 1 - i] && i == mid)
			return (1);

		return (check_opp_str(s, mid, length, i + 1));
	}

	if (i > mid)
		return (0);
}
