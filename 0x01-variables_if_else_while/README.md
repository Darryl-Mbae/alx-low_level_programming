## 0x01. C - Variables, if, else, while

## Arithmetic Operators
| Operator | Description | Example |
| --------------- | --------------- | --------------- |
| + | Adds two operands | A + B = 30 |
| - | Adds two operands |  A − B = -10 |
| * | Multiplies both operands. |  A * B = 200 |
| / | Divides numerator by de-numerator. | B / A = 20 |
| % | Modulus Operator and remainder of after an integer division. | B % A = 0 |
| ++ | Increment operator increases the integer value by one. | i++ |
| -- | Decrement operator decreases the integer value by one.. |i-- |

## Explanations 
[0-positive_or_negative.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c) ~ This is a C program that generates a random integer using the rand() function from the stdlib.h library and determines if it is positive, negative, or zero using a conditional statement.
> rand() - RAND_MAX / 2 subtracts half of the maximum value from the randomly generated integer. This effectively shifts the range of possible values from being centered around 0 to starting from -RAND_MAX/2. For example, if rand() generates the value 20000 and RAND_MAX is 32767, then rand() - RAND_MAX / 2 would be equal to 20000 - 16383 = 3617.
