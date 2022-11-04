##Project Description

This project covers the `argc` and `argv` parameters of the main function in a C program.

`argc` - argument count which holds the number of elements in argv.
`argv` - argument vector which holds command line arguments(flags).

## Fixing possible compilation errors

In some of the above exercises, either of argc or argv is not used so during compilation, an unused variable error is raised. to suppress this error, you can use the method in the code file or this.

`int main(int argc __attribute__((unused)), char* argv[]);`
if argc is not to be used or

`int main(int argc, char* argv[] __attribute__((unused)));`
if argv is not to be used.
