# 0x0B. C - malloc, free

[0-create_array.c]()
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
