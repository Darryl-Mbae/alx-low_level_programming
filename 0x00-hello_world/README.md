# C Prorgramming

## C Output

## Standard input / output

* The ```getchar()``` function reads a character from the terminal and returns it as an integer. This function reads only a single character at a time.
* The ```putchar()``` function displays the character passed to it on the screen and returns the same character. This function too displays only a single character at a time.
* The ```gets()``` function reads a line from stdin(standard input) into the buffer pointed to by str pointer, until either a terminating newline or EOF (end of file) occurs.
* The ```puts()``` function writes the string str with a newline character ('\n') at the end to stdout. On success, a non-negative value is returned.

## Formatted input / output

* The ```printf()``` is a library function to send formatted output to the screen. The function prints the string inside quotations.
To use ```printf()``` in our program, we need to include stdio.h header file using the #include ```<stdio.h>``` statement.

* In C programming, ```scanf()``` is one of the commonly used function to take input from the user. ```The scanf()``` function reads formatted input from the standard input such as keyboards.

## Using System call
In computing, a system call is the programmatic way in which a computer program requests a service from the operating system on which it is executed.
We use ```#include <sys/syscall.h>``` header file to allow systems calls
*example

```
#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>
/**
 * main - Prints a string to standard error
 * Return: 1
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t message_len = strlen(msg);

	syscall(SYS_write, 2, msg, message_len);
	return (1);
}
```

## gcc common options
 
 * ```-B <directory>```           Add <directory> to the compiler's search paths.
 * ```-v```                       Display the programs invoked by the compiler.
 * ```-###```                   Like -v but options quoted and commands not executed.
 * ```-E```                       Preprocess only; do not compile, assemble or link.
 * ```-S```                       Compile only; do not assemble or link.
 * ```-c```                       Compile and assemble, but do not link.
 * ```-o <file>```                Place the output into <file>.
 * ```-shared```                  Create a shared library.
 * ```-x <language>```           Specify the language of the following input files.
                           Permissible languages include: c c++ assembler none
                           'none' means revert to the default behavior of
                           guessing the language based on the file's extension.
  
  
  
* [0-preprocessor](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor) ```gcc -E $CFILE -o c``` Writes a script that runs a C file through the preprocessor and save the result into another file.

* [1-compiler](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/1-compiler) ```gcc -c $CFILE -o "${CFILE%.c}.o"```
Write a script that compiles a C file but does not link.
 
  * The C file name will be saved in the variable $CFILE
  * The output file will be named the same as the C file, but with the extension .o instead of .c.
  * Example: if the C file is main.c, the output file should be main.o
 
> The $ symbol is used to reference the value of a variable in Bash. 
> Double quotes allow for parameter expansion and command substitution, which means that variables and commands within the quotes are evaluated by the shell before the string is passed to the command. 
> The ```${CFILE}``` parameter expansion is evaluated to the value of the ```$CFILE``` variable (main.c), and then the .c extension is removed using the ```${CFILE%.c}``` syntax. Finally, the .s extension is added to create the output file name.
 
 * [2-assembler](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/2-assembler) ```gcc -c $CFILE -o "${CFILE%.c}.s"```Writes a script that generates the assembly code of a C code and save it in an output file.
    * The C file name will be saved in the variable ```$CFILE``` .
    * The output file will be named the same as the C file, but with the extension .s instead of .c
 
 * [3-name](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/3-name) ```gcc $CFILE -o cisfun``` Writes a script that compiles a C file and creates an executable named cisfun.
 * [4-puts](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/4-puts.c) Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.


 * [5-printf](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/5-printf.c) Writes a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line
 * [6-size](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/6-size.c) Write a C program that prints the size of various types on the computer it is compiled and run on.
 * [100-intel](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/100-intel) ```gcc -S -masm=intel $CFILE -o "${CFILE%.c}.s"``` Writes a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
> The -masm=intel option is used to specify that the output assembly code should be in the Intel syntax, which is an alternative to the default AT&T syntax used by GCC.
* [101-quote.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/101-quote.c) Writes a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

  * You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
  * Your program should return 1
