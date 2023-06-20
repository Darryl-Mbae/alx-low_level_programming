# 0x0D. C - Preprocessor

Have a look at this [README file](https://github.com/Darryl-Mbae/alx-low_level_programming/tree/master/0x00-hello_world#readme) to remind yourself about the compilation process

## Object-like Macros
An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

You create macros with the ```#define``` directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. For example,

```#define BUFFER_SIZE 1024```
