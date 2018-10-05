# Vigenere Function

## Program steps

1. Use command line arguments to get a key from the user.
2. If the key is a string, ask the user for plaintext input
3. Use the key to convert the plaintext input to ciphertext output.


## Pseudocode

### Command Line Arguments
If the program receives two arguments, the second argument is used as the key value. That value must be a string.

### Plaintext
If the key is appropriate, the user is asked for a plaintext string input using the get_string() method.

### Plaintext Input
The program will look for the alphabetical characters in the plaintext, then look for lowercase and uppercase characters. Other characters will be ignored for encryption.

### c<sub>i</sub> = (p<sub>i</sub> + k<sub>j</sub>) mod 26
The value of each iterated encrypted character is equal each iterated plaintext character added to each iterated value of the key, and that's modulated by 26. Everything starts with a 0 index. If the plaintext is **HELLO** and the key is **EAT**:

* c = (H + E) % 26, (7 + 4) % 26 = 11, c = 11 so c is L
* c = (E + A) % 26, (4 + 0) % 26 = 4, c = 4 so c is E
* c = (L + T) % 26, (11 + 19) % 26 = 4, c = 4 so c is E
* c = (L + E) % 26, (11 + 4) % 26 = 15, c = 15 so c is P
* c = (O + A) % 26, (14 + 0) % 26 = 14, c = 14 so c is O

Using this formula, when we encrypt the **HELLO** with a key of **EAT**, the ciphertext is **LEEPO**. When it gets to the last character in the key, it iterates back from the beginning.


### ASCII
An ascii chart is needed to see the ascii values of the characters, and to see what they'll be when the key is applied. The concept is to add the character's current ascii value to the key value to encrypt the plaintext.

### 26 Modulos
Before doing any encryption, the characters (upper and lower) should be put into an array of [0:25] so the ascii value + key value % 26 equals the key value.

### Loop
A loop is needed to iterate over every character so the entire string can be encrypted and printed out.