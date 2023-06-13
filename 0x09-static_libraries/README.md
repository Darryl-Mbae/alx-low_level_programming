# 0x09. C - Static libraries
One of the tools that compilers supply us with are libraries. A library is a file containing several object files, that can be used as a single entity in a linking phase of a program.

Unix systems (as well as most other modern systems) allow us to create and use two kinds of libraries - static libraries and shared (or dynamic) libraries.
* Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime
* Shared libraries (also called dynamic libraries) are linked into the program in two stages. First, during compile time, the linker verifies that all the symbols (again, functions, variables and the like) required by the program, are either linked into the program, or in one of its shared libraries. However, the object files from the dynamic library are not inserted into the executable file. Instead, when the program is started, a program in the system (called a dynamic loader) checks out which shared libraries were linked with the program, loads them to memory, and attaches them to the copy of the program in memory.

> We will be dealing with static library only


## Creating A Static "C" Library
The basic tool used to create static libraries is a program called 'ar', for 'archiver'. This program can be used to create static libraries , modify object files in the static library, list the names of object files in the library, and so on. In order to create a static library, we can use a command like this:

```ar rc libutil.a util_file.o util_net.o util_math.o```

This command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it.

After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols in the library won't matter during compilation 
The command used to create or update the index is called 'ranlib', and is invoked as follows:

```ranlib libutil.a```

> Helpful tips

 ``` ar -t libmy.a ```  Is used to list items inside your library.
 
 # Explanation
 You can go about it in two ways
1) I simply moved the required .o files from their folders to this folder using ```cp```  then to create the library with the .o files I used

 
```ar rcs libmy.a *.o ```

> r: Replace or add files to the archive. This option replaces any existing files in the archive with the new ones or adds new files if they don't already exist.

> s: Create an index or symbol table in the archive. This option creates or updates an index of the symbols defined in the object files within the archive. The index improves the efficiency of symbol lookup during linking.

> c: Suppress the display of informational messages during the creation of the archive. This option ensures a clean and concise output.

Then index it with ```ranlib```

```ranlib libmy.a```

2) You can create the the necessary c files in the folder then compile every one of them to get your .o file after that you can continue by creating your library using the same procedures in step 1
