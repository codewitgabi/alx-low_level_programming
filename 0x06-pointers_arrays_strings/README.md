# Project Description
This project covers more concept on pointers, arrays and string in the C programming language. Sit back and relax while you learn more on the topic by building projects(mainly builtin functions).

## Code breakdown for 103-infinite_add.c

`a` - to count the number of characters in n1
`b` - to count the number of characters in n2
`lc` - largest count. Checks which of n1 and n2 has the largest number of characters.
`ln1` - last number of n1
`ln2` - last number of n2
`rem` - gives the remainder when two numbers are added. e.
```
a = 18
b = 23
```
To solve a and b simply, we add `8` and `3` first which gives us `11` but we write only `1` and add the other `1` to the next sum. rem stores that number to be added to the other sum.
`cur_sum` - stores sum of previously added numbers.

```
while (n1[a] != '\0')
	a++;
```

The above code, similar to the one below, counts the number of characters in n1. Since the last element in an array of char is \0 - null byte, we loop until we encounter one.

```
lc = a >= b ? a : b;
```

A ternary operator that instanciates `lc` to a if a is the largest count else b.

```
if (size_r <= lc + 1)
	return (0);
```

This line terminates the program if the sum to be returned cannot be stored in r.

`r[lc + 1] = '\0';`
Put a null byte to mark the last index of the array.

to be continued...
