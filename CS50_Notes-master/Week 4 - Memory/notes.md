# CS50 Week 4 - Memory

## C Under The Hood
In the previous lessons, **Syntactic Sugar** was used to make the code easier to read for humans. We didn't see what was happening under the hood because we were still learning programming and programming concepts. But in this lesson we dive into that, and **Memory** is the topic covered.

While it's always possible to write code using the Syntactic Sugar, knowing what really occurs makes the program easier to understand. We can avoid errors, bugs, unexpected results, and even worse when we know what's really going on.

## Values in Memory
When accessing values, the program doesn't look for the value itself, but rather where it's stored in memory. If you're comparing two of the exact same strings, but they're assigned to different variables, the program looks for their location in memory. This location is called the address, and because the variables are different the address is also different — they're stored in different parts of the memory. That's why you can't directly compare string a to string b.

To get around this, the addresses are compared.

### Memory Address *
To lookup the memory **address**, the asterisk(*) is used before the variable name. Now values within addresses can be properly compared. This * just represents the location of the value in memory. 


### Strings and Characters
In the previous CS50 lessons, the *string* data type was used with the cs50 library, but in reality there aren't any strings in C. A string is a set of char data types ending with sentinel character **'\0'**. The cs50 library and string data type were implemented in earlier lessons for ease of use.

A string in C is really a char * (*variable*), which is the memory address of the first character ending with a sentinel character. The strcmp() method compares the value of two char * variables.

Before we learned about the * referring to the address, a variable assigned to another variable copied the value as well as the memory address, so one variable affected the other. But using char * and a for loop, different strings can have the same value with different addresses.


### Pointers
When going under the hood and accessing memory, you can't just assign values to data types as was done in previous lessons. Memory has to be allocated, the * needs to point to a location in memory before a value can be assigned. This is done with the **malloc()** method, which allocates memory based on the parameter (*which can be a constant or the number of bytes in an integer or other data type*). 

If memory isn't properly allocated, the program can cause memory leaks, which does happen with real-world programs. During a memory leak, that amount of memory is "gone" unless it's released, which is done by rebooting your computer, or (in our case) by running the free() method if a leak is detected.

## Stack and Heap
Memory is made up of different sections, but the two covered in this lesson are **Stack** and **Heap**. Stack is where functions (including Main) are stored. Functions in Stack are ordered from the outermost scope (Main) being on the bottom, and the innermost being on top of the Stack. Functions that are called by other functions are higher in the Stack. The Stack moves upward and disposes of memory. 

Heap is the section above Stack, it moves downward and allocates memory. Allocated memory writes from left-to-right and top-to-bottom, going down towards the Stack. 

### Overflow
If too much memory is written it can go past the Heap and into the Stack. While in the Stack it can write to where certain functions are stored and run those functions. This is how some malicious programs run, they write down into the Stack and until they reach a certain function, then that function runs. This function might possibly delete all your data for example.

Because of their location and their movement towards each other, they can collide, and this collision is known as an Overflow.  
A Stack Overflow is too much of the Stack being used, and a Heap Overflow is too much of the Heap in use.  
A Buffer Overflow refers to an overflow between any sections in memory.

## Images and Hexadecimal
Two of the most common image file types are bitmaps and jpegs. Bitmap means a map of all the bits, i.e. it maps a bit to a particular location and displays a particular pixel.

JPEGs typically start with the same 3 bytes(255 216 255), but in hexadecimal form. Instead of using a bunch of bits to figure out the color of the pixel, each byte is divided into 4 bits, and those 4 bits have a max value of 16. Instead of using 0s and 1s to represent that 16, 0-9 and a-f are  used.

### Hexadecimal Breakdown (255 216 255)
255 is a [magic number](https://github.com/00SaadChaudhry/CS50_Notes/blob/master/Week%202%20-%20Crypto/inDepthNotes.md#magic-numbers) that represents the maximum amount of bits(1111 1111), and the minimum amount of bits is 0 (0000 0000). Instead of writing all that, hexadecimal is used, with a max value of 15(0-indexed). 

The hexadecimal numbers are 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f; with a-f representing 10, 11, 12, 13, 14, 15.

* 255 has a binary value of 11111111
	- 11111111 is divided into two 4-bit numbers, 1111 1111
		+ 1111 1111 has a numerical value of 15 15
			* 15 15 has a hexadecimal value of f f (represented as 0xff)
* 216 has a binary value of 11011000
	- 11011000 is divided into two 4-bit numbers, 1101 1000
		+ 1101 1000 has a numerical value of 13 8
			* 13 8 has a hexadecimal value of d 8 (represented as 0xd8)
* 255 has a binary value of 11111111
	- 11111111 is divided into two 4-bit numbers, 1111 1111
		+ 1111 1111 has a numerical value of 15 15
			* 15 15 has a hexadecimal value of f f (represented as 0xff)

## Printing to files
In the previous lessons, the programs printed data to the screen using printf. In this lesson we learned the fprintf command which prints data to a file, that is saves it to a file.


### Struct
Struct was briefly touched on in this lesson. I wish I took more notes on it, but from my understanding it seems similar to a Class in other programming languages or a Javascript Object.

In the example he created a Struct known as Student, saved in its own file, and that Struct had a Student Name and Student Dorm. A program runs that struct and fprints 3 students to another file.