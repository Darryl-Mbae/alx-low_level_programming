# Debugging
In computer programming and software development, debugging is the process of finding and resolving bugs (defects or problems that prevent correct operation) within computer programs, software, or systems.

# Rubber Duck Debugging
Computers process information differently than humans do.
For example

![image](https://github.com/Darryl-Mbae/alx-low_level_programming/assets/102142446/40446e72-1e11-473b-958c-b35e275e1fd6)

In the Image above us humans can say It looks cold here 
To a computer it would rather define cold like
* Absolute zero is cold, so no temperature on the surface of planet Earth can possibly be described accurately as cold.
* n a summer evening in a temperate climate, most humans would describe 48ºF (9ºC) as cold. So the current temperature being 42ºF is clearly “cold.”
* On a winter day in a temperate climate, most humans would generally say that 42ºF is not really “cold.” 20ºF (-6ºC) is “cold.”
Without having one of those standards picked for it, most computers would have no idea how to answer the question of it being “cold.” Even if it knew with a high degree of certainty and precision that its was 52.9ºF outside, with a mild breeze and few clouds.

## Why should you tell a duck about your programming problem?

When you hit a roadblock when programming, it’s likely that you’re not thinking the way a computer does. Computers are painfully precise. Humans are, generally, forgiving and loose in their understanding. So many of the “bugs” and issues you have when solving a problem in your program originate in not being clear and explicit enough in your instructions.
This is where the concept of “rubber duck debugging” comes in.

![image](https://github.com/Darryl-Mbae/alx-low_level_programming/assets/102142446/9a6bfc85-2287-4314-ad70-0638b10a7a24)

* If you’re like most, when you’re explaining something to someone else two important things shift in your head. First, you’re likely to slow down and be more exacting than you are when you’re power-typing code. Most of us think way faster than we talk. So especially if you’re verbally explaining what’s going on to this other object, you’re likely to be a bit more careful and precise by virtue of that speed bump of saying it.
* This effect is linked but distinct from the second shift, which is that you have to work from the knowledge that the rubber duck you’re explaining your code to doesn’t know as much about the problem as you do
When you’re assuming the ignorance of your rubber duck, you’re having to explain more thoroughly and exactly than you were likely thinking those specific lines of code through in your head. You’re forced, by the need to be precise while helping someone else understand your problem, to pay very careful attention to all that you were previously just taking for granted.
* By explaining your program to a duck, you often magically find the flaw in your code. 

## Explanation
> Kindly don't copy take your time to understand 
> Also remember to update your main.h 

[0-main.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x03-debugging/0-main.c) - Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.
> No new code is required after reading the question the only task required is to substitute the 98 with 0 so as to give a case of 0

[1-main.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x03-debugging/1-main.c) - Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
> Note that Betty is specific with comments "//" she doesnt allow this

[2-largest_number.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x03-debugging/2-largest_number.c) - Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.
> Take your time read I advise you read through the given one and try to fix it remember they are teaching to debug not come up with our own code

[3-print_remaining_days.c](https://github.com/Darryl-Mbae/alx-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c) - Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.
> Hint : something does NOT belong there

