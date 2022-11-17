## Project Description
Variadic Functions and declaring constant variables. Variadic functions allow us to take as many arguments as possible. If you have worked with python really well then you must have seen `*args` and `**kwargs`. The functionality of `*args` is same as that of variadic function in C. Constant help us to declare varibles or pointers whose value or memory address cannot be changed.

### Variadic Function
* Syntax
```
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void var_func(int n, ...);

int main(void)
{
	var_func(2, 6, 8, 3, 0, 1);

	exit(EXIT_SUCCESS);
}

void var_func(int n, ...)
{
	va_list arg;
	int i;
	
	va_start(arg, argument_before_var_argument);

	for (i = 0; i < n; i++)
		printf("%d\n", va_arg(arg, data_type));
	va_end(arg);
}
```

`<stdarg.h>` is the header file that contains the various macros used for working with variadic function arguments.
The following are a list of some of the macros contained in `<stdarg.h>`
* va_list: This declares a variable and holds a list of all arguments.
* va_start: instanciate the first argument. It takes two parameter. First is the variable defined with `va_list` the other is the last argument before the variadic arguments.
* va_arg: takes two arguments. The first is the variable declared by `va_list` and the other is the data type of the argument passed. It automatically increments to the next variable.
* va_end: frees the memory and takes the variable declared by `va_list`.

### Declaring constants
The basic syntax for declaring a constant is by using the `const` keyword.
`const int var = 12;`

The value of `var` cannot be changed in the program.

You can make a pointer to a variable constant.
```
int var = 12;
const int *ptr = &var;
```

Reassigning `*ptr = 10` results to an error. But `ptr = 10` still works even though it doesn't make that much sense. It changes the mem-address of `var`.

You can also make the mem-addr a constant by doing;

```
int var = 12;
int * const ptr = &var;
```

Changing the mem-addr results in an error. But now, the value at that address can be changed.

In order to make the pointer to be a constant both at memory level and at value level, we say;

```
int var = 12;
const int * const ptr = &var;
```

This way, both the value and mem-addr cannot be changed.

## Author
Gabriel Michael Ojomakpene
gabrielmicheal497@gmail.com
09020617734
