# 0x0D. C - Preprocessor

Have a look at this [README file](https://github.com/Darryl-Mbae/alx-low_level_programming/tree/master/0x00-hello_world#readme) to remind yourself about the compilation process

## Object-like Macros
An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.

You create macros with the ```#define``` directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. For example,

```
#define BUFFER_SIZE 1024
```
Defines a macro named BUFFER_SIZE as an abbreviation for the token 1024. If somewhere after this ‘#define’ directive there comes a C statement of the form

```
foo = (char *) malloc (BUFFER_SIZE);
```

Then the C preprocessor will recognize and expand the macro BUFFER_SIZE. The C compiler will see the same tokens as it would if you had written

```
foo = (char *) malloc (1024);
```

## Macro Arguments
Macro arguments in C programming are parameters that can be passed to macros defined using the #define directive. 
Macros with arguments provide a way to create reusable code by allowing the macro to accept different values at each usage.

When defining a macro with arguments, you can specify placeholders (also called formal parameters) within the macro definition. These placeholders act as variables that will be replaced with the actual values provided when the macro is invoked.

Here's a simple example of a macro with arguments:

```
#define MAX(a, b) ((a) > (b) ? (a) : (b))
```
In this example, the macro MAX takes two arguments, a and b. When the macro is used, the arguments will be substituted for the corresponding placeholders in the macro definition.

For instance, consider the following usage:
```
int result = MAX(10, 20);
```
During the preprocessing phase, the macro invocation MAX(10, 20) will be replaced with the expanded code:

```
int result = ((10) > (20) ? (10) : (20));
```
As a result, result will be assigned the value 20.

Macro arguments can be used like variables within the macro definition, and they can participate in expressions, comparisons, or any other valid C code construct. The arguments can be of any valid C data type, and the macro can have multiple arguments separated by commas.

It's important to note that macros are expanded by the preprocessor and don't undergo type checking. Therefore, it's essential to be cautious while using arguments within macros to ensure they are used correctly and avoid unexpected behavior.
