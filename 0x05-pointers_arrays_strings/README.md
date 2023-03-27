# Pointers, arrays and strings

## Arrays
## 1.Declaring Arrays
To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows <br><br>
```type arrayName [ arraySize ];```  eg.  ```double balance[10];```

## 2.Initializing Arrays
You can initialize an array in C either one by one or using a single statement as follows
```double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};```<br>
> The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [].<br>

If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write −<br>
```double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};```<br>
## 3.signing elements to an array
Following is an example to assign a single element of the array −
```balance[4] = 50.0;```<br>
The above statement assigns the 5th element in the array with a value of 50.0.<br>
Arays have 0 as the index of their first element which is also called the base index and the last index of an array will be total size of the array minus 1. Shown below is the pictorial representation of the array we discussed above <br><br>
![](https://www.tutorialspoint.com/cprogramming/images/array_presentation.jpg)

