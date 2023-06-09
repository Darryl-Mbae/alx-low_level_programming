# 0x0B. C - malloc, free
malloc is a function in the C programming language (and C++) that is used to dynamically allocate memory at runtime. It stands for "memory allocation." Here are some important points to note about malloc:

## Syntax:

The function prototype for malloc is``` void* malloc(size_t size);```
* It takes a single argument size of type size_t, which represents the number of bytes to allocate.
Return Value:

* Malloc returns a pointer of type void* to the allocated memory block if successful.

* If the allocation fails, malloc returns NULL, indicating that the requested memory could not be allocated.
Dynamic Memory Allocation:

* Malloc allows you to allocate memory dynamically at runtime, as opposed to static memory allocation done at compile-time.
Dynamically allocated memory is stored on the heap, which is a region of the computer's memory separate from the stack.

## Size Calculation:

The size argument of malloc specifies the number of bytes to allocate.
You can calculate the size using the sizeof operator, which returns the size of a type in bytes.
For example, ```malloc(10 * sizeof(int))``` allocates space for 10 integers.
```
#include <stdlib.h>
void *malloc(size_t size);
```
The malloc() function allocates size bytes and returns a pointer to the allocated
memory
# Deallocation:

> It is essential to free the dynamically allocated memory when it is no longer needed to avoid memory leaks.

Use the free function to deallocate memory: ```void free(void* ptr);```.

The argument ptr is the pointer returned by malloc or related functions.

After calling free, the memory block becomes available for reuse.

## Explanation
* [0-create_array.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)
```
...

char *create_array(unsigned int size, char c) {
    if (size == 0)
        return NULL;

    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
        array[i] = c;

    return array;
}
```
In this function, we first check if the size is zero. If it is, we return NULL as specified in the requirements. Otherwise, we allocate memory for an array of chars using malloc and check if the allocation was successful. If the allocation fails, we also return NULL.

If the allocation succeeds, we use a loop to initialize each element of the array with the specified char c. Finally, we return the pointer to the created array.

Remember to include the <stdlib.h> header for the malloc function and to free the memory allocated by this function when you're done using it, to avoid memory leaks.
```
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
julien@ubuntu:~/0x0a. malloc, free$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
```

The output you are seeing after compiling the code is the hexadecimal representation of the character 'H', which corresponds to the ASCII value of 'H'.

In ASCII, 'H' has a decimal value of 72, which is equivalent to 0x48 in hexadecimal. The loop in the code initializes each element of the array with the character 'H', so when you print the elements of the array, you see the hexadecimal representation of 'H' (0x48) repeated multiple times.

If you want to see the actual character 'H' instead of the hexadecimal representation, you can modify the print statement like this:

```
for (unsigned int i = 0; i < 98; i++) {
    printf("%c ", array[i]);
}
```

* [1-strdup.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)

```
...
char *_strdup(char *str) {
    if (str == NULL)
        return NULL;

    int length = 0;
    while (str[length] != '\0')
        length++;

    char *new_str = (char *)malloc((length + 1) * sizeof(char));
    if (new_str == NULL)
        return NULL;

    for (int i = 0; i <= length; i++)
        new_str[i] = str[i];

    return new_str;
}
```
we use a while loop to calculate the length of the string manually. We iterate through each character of the input string str until we encounter the null terminator character '\0'. The length of the string is incremented with each iteration.

After calculating the length, we allocate memory for the new string and perform the necessary checks for successful memory allocation.

Then, we use a for loop to copy each character from the input string to the newly allocated memory.

Finally, we return the pointer to the duplicated string.


* [2-str_concat.c]()

> concatenates ~ It basically means joining

```
...
length = length1 + length2;
	combined = (char *)malloc(sizeof(char) * (length + 1));
	if (combined == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		combined[i] = s1[i];
	for (j = 0; j < length2; j++, i++)
		combined[i] = s2[j];
	combined[length] = '\0';

	return (combined);
}
```

The total length of the combined string is calculated by adding length1 and length2.

Memory is allocated for the combined string using malloc. The size of the allocated memory is (length + 1) * sizeof(char), where length + 1 accounts for the null terminator. If the memory allocation fails, NULL is returned.

The characters of s1 are copied into the combined string using a for loop. The loop iterates length1 times, and at each iteration, it assigns the character from s1 to the corresponding index in the combined string.

Similarly, the characters of s2 are copied into the combined string using another for loop. The loop iterates length2 times, and at each iteration, it assigns the character from s2 to the corresponding index in the combined string. The index i is used to ensure that the characters of s2 are copied after the characters of s1.

The null terminator '\0' is added at the end of the combined string to ensure it is properly terminated.

Finally, the pointer to the combined string is returned.


* []()
