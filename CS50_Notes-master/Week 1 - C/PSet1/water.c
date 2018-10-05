#include <stdio.h>
#include <cs50.h>

int main(void) {
    int minutes;
    //do while checks for user input, if number is positive it stop, if negative the loop runs
    do { 
        printf("Minutes: ");
        minutes = get_int();
    }
    while(minutes < 0); //if user input is a negative value, run loop

    printf("Bottles: %i\n", minutes * 12);
}