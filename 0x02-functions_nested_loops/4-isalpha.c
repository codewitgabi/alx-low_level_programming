#include "main.h"

/**
 * _isalpha - function to check for alphabets
 * @c: param
 * Return: 1 if true otherwise 0
 */

int _isalpha(int c)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
			{
				return (1);
			}
		}
	}
	return (0);
}
