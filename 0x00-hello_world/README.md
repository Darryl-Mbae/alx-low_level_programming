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
  * The output file should be named the same as the C file, but with the extension .o instead of .c.
  * Example: if the C file is main.c, the output file should be main.o
 
> The $ symbol is used to reference the value of a variable in Bash. 
> Double quotes allow for parameter expansion and command substitution, which means that variables and commands within the quotes are evaluated by the shell before the string is passed to the command. 
> The ```${CFILE}``` parameter expansion is evaluated to the value of the ```$CFILE``` variable (main.c), and then the .c extension is removed using the ```${CFILE%.c}``` syntax. Finally, the .s extension is added to create the output file name.
