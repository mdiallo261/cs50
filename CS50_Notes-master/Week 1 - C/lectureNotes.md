# The C Language

## C Basics
Unlike Scratch, C is a written language, there's no graphical interface. All the code and commands are typed out. C also needs to be compiled, which is a process of converting source code into machine code (binary). C files are saved with .c extension. In this lecture the clang compiler is used which compiles the code into an executable file.  

## Commands
C has loops, conditionals, variables, if/else statements, and other commands found in Scratch. These commands are found in all programming languages. C also has pre-built functions, one of the common ones is printf, which prints the input to the screen.

## Variables and Data Types
C variables can store strings, integers, decimals, single characters, booleans, and other types of data. C needs to know the data type before the data is assigned. For example, *string x = "hello"* for strings or *int n = 13* for integers or *float pie = 3.14* for decimals.

When these variables are declared and assigned they can be used in functions. *printf(%s, x)* will print "hello" to the screen. This command says to substitute the string variable of x("hello").

While anything can be assigned to a variable, it's best practice to only assign variables for data that will be used more than once. If the value will only be used one time, there's no need for a variable.

## Functions
Aside from pre-built functions, custom functions can also be written in C. Functions can be declared with void functionName(argument, if applicable) {commands} or with dataType(int) functionName(argument, if applicable){commands}. Void functions don't return data, whereas functions created with a type do.

Clang compiles from top to bottom, so if a function is used before it's written in the program, there will be an error in compiling. What's best to do is declare the function before void main, then write the function algorithm after void main. That way Clang compiles the code without errors.

Functions should be done in layers, in modules. Instead of having one giant function that does **EVERYTHING**, instead have a main function that calls other functions. These other functions can also have minor functions within if necessary. Functions should also be done from simple to complex, work your way up. This is so the code is organized and easier to read, and thus easier to debug.

## Compiling
The compiling process is broken up into different steps:

1. Preprocessing happens before the code is compiled. Certain files that are included above the code, with the #include keyword, are run.
2. Compiling takes the source code, everything below #includes, and turns it into Assembly code.
3. Assembling turns the Assembly code into machine code.
4. Linking combines code from the assembling process and code from the #includes files and puts it all together.