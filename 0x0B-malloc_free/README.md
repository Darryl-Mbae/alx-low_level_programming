# 0x0B. C - malloc, free

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

* [2-str_concat.c]()

Finally, we return the pointer to the duplicated string.

