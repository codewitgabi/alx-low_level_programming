#include <stdio.h>
#include "main.h"

int main(void)
{
	int r;

	r = is_palindrome("abcddcba");
	printf("%d\n", r);

	return (0);
}
