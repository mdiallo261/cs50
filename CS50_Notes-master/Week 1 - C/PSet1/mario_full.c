#include <stdio.h>
#include <cs50.h>

int main(void) {

    //leftHash and rightHash are given value 0 for counter/loop purposes
    int leftHash = 0;
    int rightHash = 0;
    //space gets value from userInput
    int space;
    //get_int() assigns value for userInput
    int userInput;

    do {
        printf("Please print pyramid height: ");
        userInput = get_int();
        space = userInput;
    } while (userInput < 0 || userInput > 23);

    for (int height = 0; height < userInput; height++) {
        leftHash++; //left half gets bigger to build base
        space--; //decrements for space on right side
        rightHash++; //increments on right side to build base
        
        //loops through empty space for left half of pyramid
        for (int i = space; i > 0; i--) {
            printf(" ");
        }
        //loops through left half of pyramid
        for (int j = 0; j < leftHash; j++) {
            printf("#");
        }
        //just a simple loop for a gap
        for (int gap = 0; gap < 2; gap++) {
            printf(" ");
        }
        //loops through right half
        for (int l = 0; l < rightHash; l++) {
            printf("#");
        }
        printf("\n");
    }
}