# Pointers and arrays
A pointer is a variable which contains a memory address.

## Types and memory
Depending on the type of the variable, the computer will reserve more or less memory. The size of each type is generally defined in bytes (1 byte = 8 bits, each bit being 0 or 1). The sizes of the types also depend on the computer you are using. Here are the sizes of the most common types on most 64-bit Linux machines:

* char -> 1 byte
* int -> 4 bytes
* float -> 4 bytes

To determine the size of those types on your computer, you can use the sizeof operator.
```
printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));

Size of type of my variable n on my computer: 4 bytes
```
In this example, we simply declare a variable c of type char. The address of c is 8. At this stage, you have not assigned a value to your variable c. So you do not know its value. It depends on what this memory address was used for before. You should never assumed that it is 0.

```
char c;  

c = 'H';  
```
When we assign the value 'H' to c, then 'H' is stored at c‘s address.
![image](https://github.com/Darryl-Mbae/alx-low_level_programming/assets/102142446/bd9d6caa-ea3a-4f09-9094-29b695807e46)

But you know that a byte can only store numbers. So actually, the byte will not hold exactly the letter 'H', but its ascii code, which is 72 (man ascii). So it really looks like this in memory:

![image](https://github.com/Darryl-Mbae/alx-low_level_programming/assets/102142446/f106dab4-bbc5-4b7b-abb6-668806bdca94)

Since integers are stored within four bytes of memory, the same example with an int variable would look like this:

```
int n;  

n = 98;  
```
![image](https://github.com/Darryl-Mbae/alx-low_level_programming/assets/102142446/e3871d88-725d-4681-b9d3-5bb7577d2be7)

> Note that you do not control the address where the variable is stored. In order to know what is the address of a variable, you can use the “address-of unary operator” &.

```printf("Address of variable 'c': %p\n", &c);
Address of variable 'c': 0x7ffc370ef13b```

