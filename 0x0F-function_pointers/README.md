## Project Decription
In the past, we have talked about pointer to variables, pointer as function arguments(call by reference) and pointer to arrays. In this directory  we will talk more about function pointers. 

Functions are also stored in a memory address so therefore, it is onky ideal that it can be pointed to. It is no different from the pointers we have done before.

## Advantages of function pointer
The first question that pops up on a person's mind is __Why do I need function pointers?__ Fubction pointers come in handy when you need to call a function in another function. Yeah we could call a function in another function even without using a pointer but it only makes more sense in a way if it is passed as a pointer.

## Basic Syntax
type (*ptr)(arg_type) = function;

say we have a function;

```
#include <stdio.h>

void foo(char *var)
{
	printf("%s\n", var);
}
```

To declare a pointer to the function `foo`, we say;

`void (*foo_ptr)(char *) = foo;`
__OR__
`void (*foo_ptr)(char *) = &foo;`

## Calling the function
To call a pointer to a function, we can say;

`(*foo_ptr)("argument");`
__OR__
`foo_ptr("argument");`

## Author
Gabriel Michael Ojomakpene
gabrielmicheal497@gmail.com
