## Project Description
This project covers the concept of arrays, pointers and strings in the C programming language. The various ways that pointers can be used in a C program is further broken down into various files as will be listed below.

### 0-reset_to_98.c
In this file, a function is written that takes a pointer to an int as parameter and updates the value it points to to 98.

### 1-swap.c
A function is written to swap the value of two integers.
A pointer is used so that we cam get the memory addresses of both parameters and change the value from the memory address directly. Just like going through the headquarter to get something done rather than from outposts. Surely answers will be more effective when it comes from hq.

### 2-strlen.c
A function is written to find the length of a string rather than using the builtin strlen() function.
The following syntaxes can also be used.

```
int l = 0!
while (*(s + l))
	l++;
```
or

```
int i = 0;
while (*s)
{
	i++;
	s++;
}
```
__Probably wondering what `*s` and `s` hold__
`s` holds both the memory address and value of the pointer `*s`. Therefore, `printf("%p\n", s);` prints the pointer to the first character in `*s` and `printf("%s\n", s);` prints the whole string.

`*s` on the other hand, gets only a single chatacter. So `printf("%c\n", *s);` gets the first character in the string `s`. *(s + 1); gets the second and so on.

Note that the above syntax works for both array of characters and char pointer.

### 3-puts.c
A function is written that prints a string, followed by a new line, to stdout. This string is outputted using the _putchar() function in _putchar.c

### 4-print_rev.c
A function is written that prints a string, in reverse, followed by a new line using the _putchar() function.

### 5-rev_string.c
A function is written that reverses a given string.

### 6-puts2.c
A function is written that prints every other character of a string, starting with the first character, followed by a new line. In other words, print string at odd indexes.

### 7-puts_half.c
A function is written that prints half of a string, followed by a new line. The function prints the second half of the string.

### 8-print_array.c
A function is written that prints n elements of an array of integers, followed by a new line using _putchar() function.
* Numbers are separated by comma, followed by a space
* The numbers are displayed in the same order as they are stored in the array
* printf() is user in this file

### 9-strcpy.c
A function is written that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
* Return value for the function is the pointer to dest.

## Command for compiling files
The normal `gcc <filename>` or `gcc <filename> -o <new_name>` cam be used to compile any of the files above but strictly for use in any ALX project, this command should be used.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "main.c" <file_to_compile> -o <new_file_name>`

* Where "main.c" is the file that contains the code to be executed.
