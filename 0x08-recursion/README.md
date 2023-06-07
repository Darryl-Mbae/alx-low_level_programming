# Recursion
Recursion is the process of repeating items in a self-similar way. In programming languages, if a program allows you to call a function inside the same function, then it is called a recursive call of the function.
```
void recursion() {
   recursion(); /* function calls itself */
}

int main() {
   recursion();
}
```
Recursion is useful in situations where a problem can be divided into smaller, similar subproblems. It is particularly handy for tasks such as tree traversal, searching algorithms (e.g., binary search), mathematical operations (e.g., factorial), and problems that exhibit a divide-and-conquer pattern.

However, there are scenarios where recursion may not be the best choice:

* Performance concerns: Recursive solutions can be less efficient than iterative approaches due to the overhead of function calls and maintaining call stack frames.
* Stack overflow: Recursive functions can consume a significant amount of stack memory if the recursion depth is too large, potentially leading to a stack overflow error.
* Complex logic: Sometimes, using iteration or a straightforward iterative algorithm can result in clearer and more readable code compared to recursive solutions.
* Resource limitations: Recursive algorithms may not be suitable when resources like time or memory are constrained, as they can potentially lead to excessive resource usage.

## Explanations
> Kindly do not copy take your time to understand

[0-puts_recursion.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c) - Write a function that prints a string, followed by a new line.
> * The function takes a pointer to a character (char*) as a parameter named s. This pointer represents the string to be printed.
> * Inside the function, the condition if (*s) is used to check if the current character being pointed to by s is not the null character ('\0'). This condition acts as the base case for the recursion. If *s is not null, the function continues to execute.
> * Within the if block, _putchar(*s) is called to print the current character pointed to by s. This prints the character to the console or output device.
> * Next, _puts_recursion(s + 1) is called recursively, passing the incremented pointer s + 1. This moves the pointer to the next character in the string and invokes the _puts_recursion function again. This process continues until the null character is encountered, effectively printing each character of the string.
> * If the condition if (*s) becomes false (i.e., the null character is reached), the else block is executed. In this case, _putchar('\n') is called to print a newline character, indicating the end of the string.

[1-print_rev_recursion.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x08-recursion/1-print_rev_recursion.c) - Write a function that prints a string in reverse.
> * You initially call the _puts_recursion_reverse function with a pointer to the first character of the string you want to print in reverse order.
> * Inside the function, the condition if (*s) is checked. This condition checks if the current character being pointed to by s is not the null character ('\0'). If it is null, it means we have reached the end of the string, and the recursion stops.
> * If the condition if (*s) is true, the function proceeds to the next steps. The recursive call _puts_recursion_reverse(s + 1) is made. This recursive call moves the pointer s forward by one position, pointing to the next character in the string.
> * The recursive call effectively starts the process over again with the new value of the pointer s. The function execution is paused at this point, waiting for the recursive call to complete.
> * The recursive call continues the process by checking the condition if (*s) again. If the new character being pointed to is not null, it makes another recursive call, moving the pointer s forward once again.
> * This recursive process continues until the null character is encountered, which serves as the base case for the recursion. Once the null character is reached, the recursive calls start to return, one by one, in the original order they were made.
> * As the recursive calls return, the _putchar(*s) line is executed for each character. Here, *s represents the current character being pointed to by s, and _putchar(*s) prints the characters in the original order they appear in the string.
> * The function continues to return from each recursive call, printing each character in the original order until it reaches the original call to _puts_recursion_reverse.
> * Finally, the original call to _puts_recursion_reverse completes, and the entire string has been printed in the original order.

[2-strlen_recursion.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x08-recursion/2-strlen_recursion.c) - Write a function that returns the length of a string.

[3-factorial.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x08-recursion/3-factorial.c) - returns the factorial of a given number.

[4-pow_recursion.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x08-recursion/4-pow_recursion.c) -  returns the value of x raised to the power of y.

[5-sqrt_recursion.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x08-recursion/5-sqrt_recursion.c) -  returns the natural square root of a number.

[6-is_prime_number.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x08-recursion/6-is_prime_number.c) -  returns 1 if the input integer is a prime number, otherwise return 0.
