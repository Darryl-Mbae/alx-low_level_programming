 ## gcc common options
 
 * -B <directory>           Add <directory> to the compiler's search paths.
 * -v                       Display the programs invoked by the compiler.
 * -###                     Like -v but options quoted and commands not executed.
 * -E                       Preprocess only; do not compile, assemble or link.
 * -S                       Compile only; do not assemble or link.
 * -c                       Compile and assemble, but do not link.
 * -o <file>                Place the output into <file>.
 * -shared                  Create a shared library.
 * -x <language>            Specify the language of the following input files.
                           Permissible languages include: c c++ assembler none
                           'none' means revert to the default behavior of
                           guessing the language based on the file's extension.
  
  
  
[0-preprocessor](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor) ```gcc -E $CFILE -o c``` Writes a script that runs a C file through the preprocessor and save the result into another file.
