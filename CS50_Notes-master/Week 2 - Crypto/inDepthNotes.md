# In Depth Notes about Functions, Scope, and Arrays

## Functions
Functions are known under a variety of names including methods, procedures, or subroutines, but they all refer to the same thing. A function processes one or more inputs to create a single output. They're used to organize code and make code reusable. Instead of having a specific commands repeated over-and-over, put them inside of a function. 

In C, the function needs to be declared above main as *value-type Function Name (arguments)*. The value type is also known as a return type, and it's what kind of data a function returns. Int main returns an integer, typically 0 as covered in the [previous notes](https://github.com/00SaadChaudhry/CS50_Notes/blob/master/Week%202%20-%20Crypto/lectureNotes.md#int-main-program).

The content of the function, all the instructions, are what's known as a function definition. A function that gets a return type needs to have a value input during a function call, but not all functions needs return types such as functions created with void.

## Variables and Scope
Scope defines which functions can accept which variables. There are two kinds of scope, global and local. Global scope variables are seen **EVERYWHERE** in the program and thus can be altered by any function. Local variables are placed within functions and can also be seen by that function as well as anything within that function's structure.

Local variables are passed by value, so the *callee*(function receiving input), receives its own copy of the value. Whereas with global it's a reference to that value.

It's best practice to use as little global variables as possible since programmers tend to come up with similar names and if something inadvertently alters a global value that can ruin the entire program.

## Arrays
Arrays hold values of the same value type, so it can be array of strings, floats, or integers, but nothing mixed together. The array elements, its contents, are partitioned into small identically spaced blocks. Each array element is accessed by an index number, with the first number being 0. It's possible to go over the length of an array, having arr[5] for an array with a length of 5 (instead of arr[4]), but it will cause problems. 

Arrays can't just be assigned into other variables they need to manually filled in. This can be done with a loop. However, the individual array elements can be treated the same as variables.

Since arrays can't be copied, they're passed by reference, so any changes made to an array's element affects the array.

## Command Line Arguments
It's possible to pass arguments at the command line using (int argc, string argv[ ]) as the parameters. Argc stands for argument-count, and while it's not required to write it like that, it's best practice since it's so common. This tells how many things the user typed, i.e. how many arguments are being typed on the command line, and counts the program itself as an argument.

Argv[ ] stands for argument vector(array) and it stores strings. This means **ANYTHING** passed into argv[ ] is a string, including numbers. Keep this in mind when working with numbers because they'll be treated like strings instead of integers or floats.

Argv[0] accesses the first item in the vector, whereas argv[argc - 1] accesses the last element.

## Magic Numbers
Magic numbers simply refer to constant numerical values in code. For example, a program that loops through a deck of cards can have the *magic number* of 52 to indicate length. However, if that same program is used for another card game it will cause problems because of that constant value.

One way to not use a magic number is to use a variable instead, but that will cause problems with variables of the same name with different values.

Another way is using something called a *Preprocessor Directive*, which can create symbolic constants. It's written as #define **NAME** *REPLACEMENT*, without a semicolon at the end. The Name is the name of the value, deckLength for example, and Replacement is what that name represents, perhaps 52.

These can't be changed like variables, but the replacements can be changed.