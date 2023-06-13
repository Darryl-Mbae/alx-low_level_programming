# 0x09. C - Static libraries
One of the tools that compilers supply us with are libraries. A library is a file containing several object files, that can be used as a single entity in a linking phase of a program.

Unix systems (as well as most other modern systems) allow us to create and use two kinds of libraries - static libraries and shared (or dynamic) libraries.
* Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime
* Shared libraries (also called dynamic libraries) are linked into the program in two stages. First, during compile time, the linker verifies that all the symbols (again, functions, variables and the like) required by the program, are either linked into the program, or in one of its shared libraries. However, the object files from the dynamic library are not inserted into the executable file. Instead, when the program is started, a program in the system (called a dynamic loader) checks out which shared libraries were linked with the program, loads them to memory, and attaches them to the copy of the program in memory.

## Creating A Static "C" Library
The basic tool used to create static libraries is a program called 'ar', for 'archiver'. This program can be used to create static libraries , modify object files in the static library, list the names of object files in the library, and so on. In order to create a static library, we can use a command like this:

```ar rc libutil.a util_file.o util_net.o util_math.o```
his command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it.

After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols in the library won't matter during compilation 
The command used to create or update the index is called 'ranlib', and is invoked as follows:

```ranlib libutil.a```
