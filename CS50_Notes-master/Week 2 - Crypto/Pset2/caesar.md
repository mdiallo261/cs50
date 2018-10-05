# Caesar Function

## Program steps

1. Use command line arguments to get a key from the user.
2. If the key is valid, ask the user for plaintext input
3. Use the key to convert the plaintext input to ciphertext output.


## Pseudocode

### Command Line Arguments
If the program receives two arguments, the second argument is used as the key value. That value must be an integer between 1 and 25 to proceed to the next step.

### atio()
This takes the seconds argument and converts it to an integer, an if statement checks if that integer is between 1 and 25.

### Plaintext
If the key is appropriate, the user is asked for a plaintext string input using the get_string() method.

### Plaintext Input
The program will look for the alphabetical characters in the string, and also look for the lowercase and uppercase characters. All other characters will be ignored.

### ASCII
An ascii chart is needed to see the ascii values of the characters, and to see what they'll be when the key is applied. The concept is to add the character's current ascii value to the key value to encrypt the plaintext.

### 26 Modulos
Before doing any encryption, the characters (upper and lower) should be put into an array of [0:25] so the ascii value + key value % 26 equals the key value.

### Loop
A loop is needed to iterate over every character so the entire string can be encrypted and printed out.
