# Pointers, arrays and strings

## Declaring Arrays
To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows <br><br>
```type arrayName [ arraySize ];```  eg.  ```double balance[10];```

## Initializing Arrays
You can initialize an array in C either one by one or using a single statement as follows −<br>
```double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};```<br>
The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ].
If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write −

```double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};```
