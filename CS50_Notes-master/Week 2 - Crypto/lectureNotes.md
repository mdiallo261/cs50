# CS50 Week 2 Lecture

## Debugging
There are different ways to debug code. The first is to analyze the error(s) Clang throws at you and try to make sense of what it's saying. If it's code you're familiar with, this way might work — you'll know if you're missing a certain library or have incorrect syntax.

The CS50.io virtual IDE has a help50 commmand to send your program to the CS50 staff, though this should be used sparingly. It also has a debug50 command, which is a graphical interface that you can select for certain lines of code. Debug50 works when the program works logically, but it doesn't have your intended outcome.

The final method of debugging is known as Rubber Duck Debugging, which is manually going through code, almost reading it aloud line-by-line, to see if it makes sense. This works best for code that's syntactically correct, but logically *incorrect*. Some examples include printing 0 as a negative integer, when you didn't want that, or printing an *extra* line in a for loop.


## Cryptography
Cryptography has to do with encrypting and decrypting messages/data. Encryption takes a plaintext message (the input) and uses a key to convert the message into ciphertext(output), which is coded. They key is known only between the sender and the recipient, so if an outsider finds the encrypted message, he won't know what it means. A key is needed to encode and decode messages.


## Strings
A string can be any input of characters in between double-quotes. Strings can be as short as a word, or theoretically as long as a book. It's possible for strings to be **TOO LONG**, though the amount of bytes a string requires isn't known until the user types the string, and a too long string can return errors in a program.


## strlen()
Strings can be manipulated character-by-character, and one way of doing this is with the strlen(*string variable*) built-in function. If you use this in a loop you can print out every character in that string.

However, you can make this process more efficient. What's normally done in a for loop is the length of the counter is set to the string length, strlen in this case, but strlen counts every character of the string every time it's used. So for every iteration of the loop, every character in the string is counted. A better method is to assign strlen to a variable, and use that variable as the loop length.


## toupper()
This method changes characters to uppercase, with the inclusion of the ctype.h library. If it's not possible to convert to an uppercase, the original character is returned.


## '\0' Sentinel character
This character is seen more under the hood than used in actual practice, but it represents 8 0-bits in a row. This character separates strings and is used at the end of a string.

The sentinel character concept is used as part of the strlen() method. For a while loop with a (!= '\0') condition, the loop will run until a new string, or end of the string appears.


## Type Casting
Type Casting is known as converting one variable value type to another, int to char or vice-versa for example. This can be done explicitly with the use of a method, or implicitly when using %*variable* symbol.

Using (char)*int variable* will change an integer to a character, using (int)*char variable* will change a character to an integer. During a printf, if %c is used for an integer, a character will print out, %i will print an integer for a character.

During these conversions, ASCII is used to represent the values, unless otherwise indicated.


## Arrays
Arrays are kind of like lists that hold the same data type. There can be array of integers or even strings. However, for an array of string values, each character in each string is part of an array, so it's an array within an array. The values in an array are of equivalent data size.


## int main Program
In previous lectures, the main program has taken no arguments at the command line, it's been written as int main(void), void to indicate no arguments. However, it's possible for int main to take an integer argument or an array argument at the command line. The program's name can be taken as an argument to be passed in some cases, for an argument-counter type of parameter.

It's good practice for the int main function to return a value of 0 at the end. 0, because the main program is an integer, and returning 0 means the program ran fine. Within the program there can be error conditions, such as return 1 to indicate errors.