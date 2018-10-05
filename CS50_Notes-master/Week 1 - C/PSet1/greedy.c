#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {

    //change as user input value
    float change;

    int changeCoin;

    //number of all coins used
    int coin = 0;

    //make sure user enters appropriate value
    do {
        printf("Customer change: ");
        change = get_float();
        //convert change float to changeCoin int for accurate math
        changeCoin = change * 1000;
        changeCoin /= 10;
    } while(change < 0);

    //quarter
    while (changeCoin >= 25) {
        coin++;
        changeCoin -= 25;
    }

    //dime
    while (changeCoin >= 10 && changeCoin < 25) {
        coin++;
        changeCoin -= 10;
    }

    //nickel
    while (changeCoin >= 5 && changeCoin < 10) {
        coin++;
        changeCoin -= 5;
    }

    //penny
    while (changeCoin > 0 && changeCoin < 5) {
        coin++;
        changeCoin -= 1;
    }

    //number of coins used
    printf("%i \n", coin);
}