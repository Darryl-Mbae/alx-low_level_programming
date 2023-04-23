# 0x02. C - Functions, nested loops

## 1. Functions
A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

## Defining a Function
The general form of a function definition in C programming language is as follows −
```
return_type function_name( parameter list ) {
   body of the function
}
```
## Calling a Function
While creating a C function, you give a definition of what the function has to do. To use a function, you will have to call that function to perform the defined task.

When a program calls a function, the program control is transferred to the called function. A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the program control back to the main program.

To call a function, you simply need to pass the required parameters along with the function name, and if the function returns a value, then you can store the returned value. For example −
```
#include <stdio.h>
 
/* function declaration */
int max(int num1, int num2);
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
```
> 1. Functions usually return a value but if you use void it means it won't return a value

## 2. Header Files
A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files

## Include Syntax
Both the user and the system header files are included using the preprocessing directive #include. It has the following two forms −

* ```#include <file>```
This form is used for system header files. It searches for a file named 'file' in a standard list of system directories. You can prepend directories to this list with the -I option while compiling your source code.

* ```#include "file"```
This form is used for header files of your own program. It searches for a file named 'file' in the directory containing the current file. You can prepend directories to this list with the -I option while compiling your source code.

## How does it work
The #include directive works by directing the C preprocessor to scan the specified file as input before continuing with the rest of the current source file. The output from the preprocessor contains the output already generated, followed by the output resulting from the included file, followed by the output that comes from the text after the #include directive. 

For example, if you have a header file header.h as follows −
```
char *test (void);
```

and a main program called program.c that uses the header file, like this −
```
#include "header.h"
int x;
int main (void) {
   puts (test ());
}
```
the compiler will see the same token stream as it would if program.c read.
```
char *test (void);
int x;
int main (void) {
   puts (test ());
}
```
## Answers
> Don't copy answers kindly take your time to understand the syntax 
* [0-putchar.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c) ~  A program that prints _putchar, followed by a new line.
* [1-alphabet.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c) ~ A function that prints the alphabet, in lowercase, followed by a new line.
* [2-print_alphabet_x10.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c) ~ A function that prints 10 times the alphabet, in lowercase, followed by a new line.
> The 2-main.c file in the code contains the main() function, which is the entry point for the program. The main() function is required in a C program and it's where the execution of the program starts.

> In this case, the main() function is used to call the print_alphabet_x10() function, which is defined in the 2-print_alphabet_x10.c file. Without the 2-main.c file, there would be no way to execute the print_alphabet_x10() function or any other functions defined in the project.
* [3-islower.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c) ~  A function that checks for lowercase character.
* [4-isalpha.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c) ~  A function that checks for alphabetic character.
* [5-sign.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c) ~ A function that prints the sign of a number.
* [6-abs.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c) ~ Write a function that computes the absolute value of an integer.
* [7-print_last_digit.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c) ~ Write a function that prints the last digit of a number.
* [8-24_hours.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c) ~ Writes a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
* [9-times_table.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c) ~ Writes a function that prints the 9 times table, starting with 0.
* [10-add.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c) ~ Writes a function that adds two integers and returns the result.
* [11-print_to_98.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c) ~ Writes a function that prints all natural numbers from n to 98, followed by a new line.


