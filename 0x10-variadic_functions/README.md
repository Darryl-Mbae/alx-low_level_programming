0x10. C - Variadic functions

stdarg.h is a header file in the C programming language that provides facilities for accessing variadic arguments. "Variadic" means that the number and type of arguments can vary. This header file is part of the standard C library and is typically used when writing functions that accept a variable number of arguments.

The key function provided by stdarg.h is va_start(), which initializes a variable of type va_list to point to the first variadic argument. This allows the function to iterate through the arguments. Once the arguments have been processed, the function should call va_end() to perform any necessary cleanup.

Here's a brief overview of the main functions and macros provided by stdarg.h:

* va_start(va_list ap, last): This macro initializes the va_list object ap to point to the first variadic argument, after the last named argument. It must be called before accessing the variadic arguments.

* va_arg(va_list ap, type): This macro retrieves the next argument of type type from the va_list object ap, and advances ap to the next argument. The type of the argument must be specified, so the correct size and alignment can be determined.

* va_copy(va_list dest, src): This macro makes a copy of the va_list object src into dest. It is used when you need to make multiple passes over the variadic arguments.

* va_end(va_list ap): This macro performs any necessary cleanup for the va_list object ap. It should be called after all the variadic arguments have been processed

Example of code 
```
#include <stdio.h>
#include <stdarg.h>

void print_ints(int num, ...)
{
va_start(va_list  args, num);

for (int i=0; i < num; i++)
{
int value = va_arg(args,int);
printf("%d: %d\n",i,value);
}

va_end(args);
}
```
