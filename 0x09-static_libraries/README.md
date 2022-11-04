## Project Description
This project covers __static library__ in C.

### Creating a static library
Before creating a static library, the following files must be present.
* .c files to convert into a static library
* header file containing prototypes of the c files
* main C file to to be compiled.

__Important commands to note__
`ar` - for archiving object files.
`nm` - checking out files present in the archived file
your static library must begin with the prefix `lib` and have a `.a` extension.

After having the necessary files, for standard static files, run;

```
$ mkdir include
$ mkdir lib
```

your `include` directory should hold your header file while `lib` directory should hold your static library.

In your main directory, convert all files to be converted to static libraries to object files using;

`gcc -c <file1.c> <file2.c>`

When you `ls`, you will see that those .c files have been converted to .o files but still retaining their original file. the __.o__ is the object file that will soon be archived.

After that, run;

`ar -rc lib<lib_name>.a <obj_file.o> <objfile2.o>`

The `-r` flag replace existing files if they already exist. `-c` creates a new file if it does not exist.

After this, our static library will be created.

Use `ar -t <static_lib>` to check object files in the static library.

### Compiling static libraries
I will be doing this in two parts. First, by using the include and lib folders and Secondly, running it from your main directory.

__From main directory__

`gcc <main c file> -l<static library without lib prefix and .a suffix> -L.`

__NOTE__ When using this, your header file in your main c file should be in quote. e.g `#include "header file"`.

__From include and lib folder__
Move your static library into the lib folder and the header file into include.

After that, run;
`gcc <main c file> -l<static library without lib prefix and .a suffix> -I include -L lib`

__NOTE__ When using this, your header file in your main c file should be written like a standard library. e.g `#include <header_file.h>`
