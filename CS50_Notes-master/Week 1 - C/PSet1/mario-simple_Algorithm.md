# Simple Mario

## Program Goal
Create a hashtag half-pyramid of a certain height according to the user's input. The height is an integer between 0 and 23. The half-pyramid length is the height plus one, except in the case of zero which is no pyramid.

## Program Methods

### Variables
This loop has 3 variables, all integers.  

* **hash**  which I set to 1 to automatically give it a +1 length.  
* **space** occupies the empty space of the half-pyramid. This empty space is so the half-pyramid increases in height from left to right.  
* **userInput** is the number the user enters.  

The space and userInput variables are unassigned during declaration.

### Do While Loop
This loops checks the userInput variable with the get_int() method. If the user enters a variable less than 0 or greater than 23 again, the loops runs until a valid number is added. This number first gets assigned to userInput, then space gets assigned to the value of userInput.

### Outer For Loop
This loop starts at 0 and increments by one. The loop's length is the userInput value. This loop increments the hash value by 1 and decrements the space value by 1.

### Inner For Loop (space)
A negative loop, so the value decreases with each iteration. It decreases so there are more spaces at the top of the pyramid, but less spaces at the bottom.  
The loop's initial value is determined by the value of the space variable. The space variable is assigned to whatever the userInput value is.

### Inner For Loop (hash)
This positive loop increases with each iteration so the top of the pyramid has only 2 hashes, while the base has the most hashes, i.e. the last iteration of the loop.  
The loop's length is determined by the hash value. The hash value keeps on incrementing thanks to the outer loop, and it stops once the outer loops runs it's last iteration.