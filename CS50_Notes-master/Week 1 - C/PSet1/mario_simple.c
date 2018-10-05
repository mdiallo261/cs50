#include <stdio.h>
#include <cs50.h>


int main(void) {
    int hash = 1; //setting hash to 1 so every line automatically adds hashmark
    int space;
    int userInput;

    //do while checks userInput for invalid condition, if valid it moves onto for loop
    do {
        printf("Please enter half-pyramid height between 0 and 23: ");
        userInput = get_int();
        space = userInput;
    }while (userInput < 0 || userInput > 23);

    //outer for loop grabs value from do while after do while stops running
    for (int i = 0; i < userInput; i++) {
        hash++;
        space--;
        //negative loop so it goes from greater to lower, more spaces occupy top of pyramid
        for (int k = space; k > 0; k--) {
            printf(" ");
        }
        //positive loop so base of pyramid has more hash blocks
        for (int j = 0; j < hash; j++) {
            printf("#");
        }
    printf("\n");
    }
}
