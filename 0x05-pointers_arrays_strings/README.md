# Pointers, arrays and strings

## Arrays
### 1.Declaring Arrays
To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows <br><br>
```type arrayName [ arraySize ];```  eg.  ```double balance[10];```

### 2.Initializing Arrays
You can initialize an array in C either one by one or using a single statement as follows
```double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};```<br>
> The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [].<br>

If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write −<br>
```double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};```<br>
### 3.Assigning elements to an array
Following is an example to assign a single element of the array −
```balance[4] = 50.0;```<br>
The above statement assigns the 5th element in the array with a value of 50.0.<br>
Arays have 0 as the index of their first element which is also called the base index and the last index of an array will be total size of the array minus 1. Shown below is the pictorial representation of the array we discussed above <br><br>
![image](https://user-images.githubusercontent.com/102142446/227900854-7eeef9d3-0ed9-42fa-a1c6-e97a749a5677.png)<br>

### 4.Accessing Array Elements
The following example Shows how to access arrays
```
#include <stdio.h>
 
int main(){
    int value[7] = {1,2,3,4,5,6,7};
    int i;
    /* Printing array elements using loop */
    for(i = 0; i < 7; i++){
        printf("Element [%d] is %d\n", i, value[i]);
    }
     
    return 0;
}
```
Output
```
Element [0] is 1
Element [1] is 2
Element [2] is 3
Element [3] is 4
Element [4] is 5
Element [5] is 6
Element [6] is 7
```

## Multi-dimensional Arrays in C

C programming language allows multidimensional arrays. Here is the general form of a multidimensional array declaration −

```type name[size1][size2]...[sizeN];```
For example, the following declaration creates a three dimensional integer array −

```int threedim[5][10][4];```

A two-dimensional array a, which contains three rows and four columns can be shown as follows −<br>

![Screenshot 2023-03-27 122357](https://user-images.githubusercontent.com/102142446/227900360-5a5d5928-34d8-46c2-a9b5-f56c1f499d64.png)

Thus, every element in the array a is identified by an element name of the form a[ i ][ j ], where 'a' is the name of the array, and 'i' and 'j' are the subscripts that uniquely identify each element in 'a'.

### 1.Initializing Two-Dimensional Arrays
Multidimensional arrays may be initialized by specifying bracketed values for each row. Following is an array with 3 rows and each row has 4 columns.
```
int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};
```
### 2.Accessing Two-Dimensional Array Elements
An element in a two-dimensional array is accessed by using the subscripts, i.e., row index and column index of the array. For example −

```int val = a[2][3];```
The above statement will take the 4th element from the 3rd row of the array. You can verify it in the above figure. Let us check the following program where we have used a nested loop to handle a two-dimensional array −

```
#include <stdio.h>
 
int main () {

   /* an array with 5 rows and 2 columns*/
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 5; i++ ) {

      for ( j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }
   
   return 0;
}
```
When the above code is compiled and executed, it produces the following result −
```
a[0][0]: 0
a[0][1]: 0
a[1][0]: 1
a[1][1]: 2
a[2][0]: 2
a[2][1]: 4
a[3][0]: 3
a[3][1]: 6
a[4][0]: 4
a[4][1]: 8
```
## Pointers
