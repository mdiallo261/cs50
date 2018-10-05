# In Depth Notes about Memory

## Hexadecimal
Decimal numbers 0-9 are known as base-10, these are the numbers we see all the time with ones, tens, hundreds...etc places we're used to. Binary numbers are base-2, 0s and 1s, and they go from right to left from 0,1,2,4,16,32...etc. Computers deal with binary.

Hexadecimal is base-16. These numbers go from 0-9 and A-F, with A-F representing 10-15. Each hexadecimal number represents 4 bits, and you'll notice that the largest value F(15) equals 1111, which is also the highest 4-bit value. **0x** is prefixed in front of a hexadecimal numbers to avoid confusion.

To find the ones/tens/hundreds/etc of hexadecimal, the power of 16 is used

* 16^0 is the ones place
* 16^1 is the tens place
* 16^2 is the hundreds place
* ...and so forth

Here's the formula to find the value of a hexadecimal number

* **0xADC**
* (A, which is 10 x 16^2) + (D, which is 13 x 16^1) + (C, which is 12 x 16^0)
* (10 x 256) + (13 x 16) + (12 x 1)
* 2560 + 208 + 12 = 2780

It's also possible to convert binary to hexadecimal  
 
The number is grouped into 4-bit chunks, from right to left, with any applicable 0s added to digits at the very left. This particular example happens to be 32-bits, so adding 0s isn't necessary (but note the 0 at the beginning that was originally there).

After the grouping, find the hexadecimal value of each group. Prefix that number with 0x and that's the hexadecimal number


* **01000110101000101011100100111101**
* **0110 0110 1010 0010 1011 1001 0011 1101**
* **4 6 A(10) 2 B(11) 9 3 D(13)**
* **0x46A2B93D**

Memory addresses are represented as hexadecimal numbers. I've also noticed that Assembly uses hexadecimal.


## Pointers
Pointers are an alternative way to pass data between functions. They're based by the actual variable instead of a copy. When int a = int b, a gets a copy of the b variable, but int *a = int &b, *a gets the actual data of &b.

Data is stored on a hard disk (or solid-state-drive), but nothing can be done with this data. It needs to be moved into memory (RAM, Random Access Memory) to make it usable. Any data on memory is temporary, it's gone if the program free()'s it or the machine shuts down. Memory is finite, and whenever a data type is declared some memory is used. Memory acts similar to an array, meaning it's indexed and can be accessed, but any location (address) on memory can be independently accessed. This is known as **Random Access**.

These addresses have hexadecimal locations, and each pointer is just an address(pointers are declared with the *). To access a pointer, the & is used. The pointer value is the memory address, and the type is the data at the address. These pointers allow us to manipulate real data instead of copies.

All pointers should be set to something, and if a pointer can't immediately be set to anything it should be set to *NULL*. This is important because a pointer set to NULL throws a Segmentation Fault when dereferenced, which defends against accidental manipulation. Dereferencing is changing the actual memory data.


## Dynamic Memory Allocation
Pointers can dynamically access memory as its running.

In **MOST** situations, variables with names are on the [Stack and variables without names are on the Heap](https://github.com/00SaadChaudhry/CS50_Notes/blob/master/Week%204%20-%20Memory/notes.md#stack-and-heap). because of this Dynamic Memory Allocation process. When the Heap or Stack collide into each other, the program can run out of memory.

Here's how the **malloc()** method does dynamic allocation:

* It goes through the Heap and returns a Pointer
* If no memory is available, the Pointer is NULL (Segmentation Fault)
* data-type *variable_name = malloc(sizeof(datatype)) dynamically allocates memory
* For an array, it's (x * sizeof(data))

Dynamically allocated memory isn't automatically returned, which can result in a memory leak. The free(variable) method releases the memory. Every block allocated with malloc() must be free() before the program ends. Free() should only run on malloc() allocated blocks. And free() shouldn't run more than once on those blocks.


## Structures
Structures are variables of separate data-types that can be unified into a new type with their own custom type name. They make it so elements of different types can be grouped together, and they act as a super-variable. A car struct, for example, can have a char data type and an int data type within it.

These structs are defined at the top of the program, or in separate h files with the #include at the top of the main program. To access data within a struct, the **.** operator accesses the structure field. 

* Struct car is created, with the int year data-type
* Struct car mycar is created, a mycar variable made from the car struct
* mycar.year = 2011; accesses the year field

Structs can be dynamically allocated, but pointer needs to dereference to the struct

* struct car *mycar = malloc(sizeof(car))
* (*mycar).year = 2011;
* **OR** it can be done with mycar->year = 2011  
the **->** dereferences the pointer and accesses the field


## Defining Custom Types
Existing data-types, such as a char, can be aliased with the typedef keyword. In the previous lessons this was done with **typedef char* string** so string is an alias for the char*, in the cs50 library.  
It can also be done with structs, struct mycar{...} car_t.

## Recursion
Recursion is when a function calls itself as part of its execution.

Recursive functions have a base case and a recursive case, and they can have multiple of each case. The base case is what terminates the function process when triggered, it's a simple solution that stops the function. The recursive case is when the function calls itself, but with a slight alteration to make itself smaller

One example of this is a factorial, which multiplies all the integers in a positive integer to each other. A factorial of 5 would be 5x4x3x2x1 = 120.

* factorial(1) = 1
* factorial(2) = 2 * factorial(1)
* factorial(1) = 3 * factorial(2)
* factorial(1) = 4 * factorial(3)
* factorial(1) = 5 * factorial(4)

This can be written as a recursive function, and it can be written with the curly brackets removed for single-line if/else statements

    int fact(int n)
    {
    	if (n == 1) //base case
    		return 1;
		else //recursive case
			return n * fact(n-1);
    }
    
Recursive functions replace loops. The base case occurs when the function finally hits factorial of 1, the function is over. The recursive case makes the function slightly smaller each time it runs.

## Call Stack
When a function is called, the system sets aside space in memory for it. These memory chunks are known as **Stack Frames** or **Function Frames**, and they live on the Stack.

Multiple frames can exist at a time, these are known as **Open Frames**; but only one Active Frame can exist at a time, the Active Frame is on top of the stack and the function currently running.

When a new function is called, it goes to the top of the stack. Only the function in the Active Frame is doing any work. The function below it needs to wait. When the function in the Active Frame is finished it pops off the stack, and the Open Frame function below is pushed to the Active Frame.

The Open Frame functions are waiting for the Active Frame function at the top of the stack to finish.

## File Pointers
FILE* is a pointer to a file. These files store data for read and write purposes. Files contain persistent data, which is data that still exists after the program ends. 

### fopen()
Opens the file and gives it a file pointer. This pointer will be used as an argument in other file methods. After an fopen() call, make sure the pointer isn't set to NULL.
	
	FILE *file_var = fopen("filename", "r/w/a") //either r or w or a
r is for read, so the file is read-only  
w is for write, write-only which overwrites all data in the file  
a is for append, to append data to the end of the file

### fclose()
This method closes the files

	fclose(*file_var)
Once a file is closed, no other file methods can be applied (except fopen)

### fgetc()
This gets the next character of the file and stores it in a variable, but the fopen must have a "r" designation. It reads content from the file pointer

	char f_char_get = fgetc(*file_var)
	
A while loop that ends when the EOF(End-Of-File) is detected can be used to print every character of the file to the screen. This is similar to the CAT command in terminal.

### fputc()
Similar to fget, but requires fopen to have a "w" or "a" designation. It instead writes from the file pointer

	char f_char_put = fputc(*file_var)
	
With a while loop this can copy the file contents into another file, similar to the CP terminal command.

### fread()
Similar to fgetc, but can be used for more than just one character, and file is usually stored in an array. Also requires an "r" designation.

	int arr[10];
	fread(arr, sizeof(int), 10, *file_var)

### fwrite()
Similar to fread(), but requires a "w" or "a" designation, as it writes to the file pointer.

	int arr[10];
	fwrite(arr, sizeof(int), 10, *file_var)