## Argc & Argv

argc and argv are commonly used in C and C++ programming languages to handle command-line arguments passed to a program when it is executed.

* argc stands for "argument count" and is an integer that represents the number of command-line arguments passed to the program. It includes the name of the program itself as the first argument, so the minimum value of argc is 1.

* argv stands for "argument vector" and is an array of strings (char*) that contains the actual command-line arguments passed to the program. The first element argv[0] is always the name of the program itself, and the subsequent elements argv[1] to argv[argc-1] contain the additional arguments. 

The value of argc depends on the number of arguments passed when executing the program from the command line.

The contents of argv are determined by the actual arguments passed to the program. Each element of argv is a null-terminated string representing an individual argument.

* The last element of the argv array, argv[argc], is always set to NULL to indicate the end of the argument list.

* The program's name is usually stored in argv[0], although this is not a requirement.

```#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Number of arguments: %d\n", argc);
    printf("Program name: %s\n", argv[0]);

    for (int i = 1; i < argc; ++i) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
```
If you compile and run the above program with the command ./program arg1 arg2 arg3, it will output:
```
Number of arguments: 4
Program name: ./program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
```
