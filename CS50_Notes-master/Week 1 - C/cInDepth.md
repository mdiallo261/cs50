# In Depth Discussion about the C Language


## The Command Line

The first topic covered is the command line. I'm already familiar with some basic terminal commands. I use Windows OS and the Git bash, and while most commands are the same between Windows and Unix, there are a few that are different. What's covered here works in any kind of terminal.  
*The commands are typed in lowercase, but I'm using uppercase in this blog for readability purposes.*

* **LS** to list non-hidden contents in a directory
* **CD** to change between different directories, cd ./ goes to the current directory, and cd ../ goes back one directory
* **MKDIR** to create a new directory
* **TOUCH** to create a new file
* **CP** to copy files and directories. cp just copies files, whereas cp -r will copy a directory and all its contents. The -r stands for "recursive"
* **RM** to remove a file. rm -r can be used to recursively remove a directory and all its contents
* **RMDIR** to remove an empty directory
* **MV** to move files or directories. If files or directories are moved to the same location, they're renamed instead.


## Data Types

C requires variables to be typed before a value can be assigned. This is different from Javascript which doesn't require any typing beforehand. By default C comes with the integer, char, float, and double value types. Types like strings and booleans need to be included before the source code. In the CS50 lecture they include a library so C can read strings and booleans.

**INT** can hold 4bytes(32bits, that is 32 binary digits) of data. The number range is between approximiately -(2^16 -1) and 2^16 -1.  
*If unsigned integers are used, the range becomes 0 to 2^32, so the positive range can hold twice as many bytes at the expense of negative values.*   
**CHAR** can hold 1byte, which gives a range of -127 to 127. These numerical values are used to represent single keyboard characters.  
**FLOAT** is used for decimal values, also 4 bytes of data. However, they need to take the integer value as well as the decimal value into account, so it's impossible to have a value of 1billion with 1billion decimal places. Floats are used for very accurate decimal values.  
**DOUBLE** hold 8 bytes and are used for very long numbers.

**BOOLEAN** is used for true/false values.

**STRING** is used for words, sentences, paragraphs, etc.

### Void
**VOID** isn't a data type, it's a type used for functions. Void doesn't return any data from a function. Void is also used for functions that don't require arguments, void is placed instead of an argument.

### Variable Syntax
Variables can be declared and assigned two different ways.

1. int num;  
num = 13;

2. int num = 13;

Both are accurate, but the second way is faster. Sometimes the first way is used if you're not sure what value the variable will immediately have.


## Operators
C allows basic mathematical operators (+, -, *, /). In C the value on the right is assigned to the value on the left. There's also a modulus operator (%) to find the remainder.

### Operator Shortcuts
There are shortcuts in programming languages for operations frequently used.   
x = x * 5 can also be written as x *= 5  
x = x + 1 can be written as x++, there's also x-- for x = x - 1

### Booleans
Booleans are used to compare values, if a value is true/false, run this code. When it comes to numbers, any non-zero value is true and zero is false.

### Logical Operators
These operators run conditions whether a value is true or false.

* **&&** The And operator, which does something if both values are true. If one value is false or if both values are false, it doesn't run.
* **||** The Or operator, which runs code if at least one value is true. If both values are true the code will run, but if both values are false it won't run.
* **!** Is an inversion or the Not operator. The code runs if the condition is inverted.

### Relational Operators
These are basically less than < (or equal to <=), greater than > (or equal to >= ), equality (represented as ==), or inequality (represented as !=)


## Conditionals

### If, Else, Else If
A Conditional basically means to do something if the condition applies. The most basic conditional is the If statement. If the condition is true, run the code, and if it's not true nothing happens.  
There's also **IF/ELSE** which means if the condition is true to run the code, Else run this other piece of code.  
**ELSE IF** is similar to Else, but it means to check this condition, and if that's true to run the code.

The condition will be checked in the If statements until a condition is met. Once the condition is met, it runs the code for that statement. If no conditions are met it runs the Else statement,

### Switch statements
Switch is similar to If/Else except it checks for cases rather than "conditions." Breaks must be put in between each case or every piece of code will run for every single case. There's also a default case for switch statements if a condition isn't met.

### Ternary Operator
This is basically a condensed version of an If/Else statement, that only checks one condition. The syntax is confusing, but it saves space.  
It's typically written as x ? a : b. Which means if the a condition applies to x to run a, else run b. It's not necessary to write ternary operators, but they appear in real code.

## Loops
Loops are used to repeat code. Instead of writing the same statement multiple times it can be put in a loop. There are three kinds of loops.

### While Loop
While the condition is true, run this loop, but if the condition ever becomes false, stop the loop. This can theoretically go on forever unless a break is put into the loop. While loops are used when the length is unknown and you're not sure if the user will ever activate the code to run them.

### Do While Loop
Similar to the While Loop, except it runs once, checks the condition, and runs the loop or stops depending if the condition is met or not. Do While is used if you want the code to run at least once, but you're not sure if there will be any repetition.

### For Loop
For loops are the most advanced of loops. A for loop sets a condition, sets a length, and also sets an incrementation. If the condition is true, run this loop for x amount of times, and increment it for x amount of times.  
A for loop first checks the condition, if it's true it runs the loop once. The value is incremented, condition is checked again, and so forth.  
The for loop is ran until the condition is no longer true, which is typically when it reaches the set length. For loops are used when the length is known but the input is unknown.