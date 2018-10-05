#include <stdio.h>
#include <cs50.h>

int main(void) {

    long long cred; //stored value for credit card number
    int digit;
    int oddDigit;

    //credit card lengths, divided by 2 and rounded up for loop purposes
    int amLen = 8;
    int masLen = 8;
    int visLen1 = 7;
    int visLen2 = 8;

    //makes sure number entered is positive
    do {
        printf("Number: \n");
        cred = get_long_long();
    } while(cred < 0);
    long long fullCred = cred;

    //Visa 13 digit
    if (fullCred >= 4000000000000 && fullCred < 5000000000000) {
        int x = 1;
        int digSum = 0;
        int oddDigSum = 0;
        int fullDigSum = 0;

        for(int i = 0; i < visLen1 ; i++) {
            digit = cred % (100 * x);
            digit /= (10 * x);
            oddDigit = cred % (10 * x);
            oddDigit /= x;
            cred /= 10;
            digit *= 2;

            if (digit >= 10) {
                int tensDigit = digit / 10;
                digit %= 10;
                digit += tensDigit;
            }

            //printf("New Digit value: %i\n", digit);
            x *= 10;
            digSum += digit;
            oddDigSum += oddDigit;
            fullDigSum = digSum + oddDigSum;
        }
        //printf("Even Digit Sum: %i\nOdd Digit Sum: %i\nFull Digit Sum: %i\n", fullDigSum, oddDigSum, fullDigSum);

        if (fullDigSum % 10 == 0) {
            printf("Visa\n");
        }
        else {
            printf("Invalid card\n");
        }
    }

    //Visa 16 digit
    else if (fullCred >= 4000000000000000 && fullCred < 5000000000000000) {
        int x = 1;
        int digSum = 0;
        int oddDigSum = 0;
        int fullDigSum = 0;

        for(int i = 0; i < visLen2 ; i++) {
            digit = cred % (100 * x);
            digit /= (10 * x);
            oddDigit = cred % (10 * x);
            oddDigit /= x;
            cred /= 10;
            digit *= 2;

            if (digit >= 10) {
                int tensDigit = digit / 10;
                digit %= 10;
                digit += tensDigit;
            }

            //printf("New Digit value: %i\n", digit);
            x *= 10;
            digSum += digit;
            oddDigSum += oddDigit;
            fullDigSum = digSum + oddDigSum;
        }
        //printf("Even Digit Sum: %i\nOdd Digit Sum: %i\nFull Digit Sum: %i\n", fullDigSum, oddDigSum, fullDigSum);

        if (fullDigSum % 10 == 0) {
            printf("Visa\n");
        }
        else {
            printf("Invalid card\n");
        }
    }

    //American Express 34
    else if (fullCred >= 340000000000000 && fullCred < 350000000000000) {
        int x = 1;
        int digSum = 0;
        int oddDigSum = 0;
        int fullDigSum = 0;

        for(int i = 0; i < amLen ; i++) {
            digit = cred % (100 * x);
            digit /= (10 * x);
            oddDigit = cred % (10 * x);
            oddDigit /= x;
            cred /= 10;
            digit *= 2;

            if (digit >= 10) {
                int tensDigit = digit / 10;
                digit %= 10;
                digit += tensDigit;
            }

            //printf("New Digit value: %i\n", digit);
            x *= 10;
            digSum += digit;
            oddDigSum += oddDigit;
            fullDigSum = digSum + oddDigSum;
        }
        //printf("Even Digit Sum: %i\nOdd Digit Sum: %i\nFull Digit Sum: %i\n", fullDigSum, oddDigSum, fullDigSum);

        if (fullDigSum % 10 == 0) {
            printf("American Express\n");
        }
        else {
            printf("Invalid card\n");
        }
    }


    //American Express 37
    else if (fullCred >= 370000000000000 && fullCred < 380000000000000) {
        int x = 1;
        int digSum = 0;
        int oddDigSum = 0;
        int fullDigSum = 0;

        for(int i = 0; i < amLen ; i++) {
            digit = cred % (100 * x);
            digit /= (10 * x);
            oddDigit = cred % (10 * x);
            oddDigit /= x;
            cred /= 10;
            digit *= 2;

            if (digit >= 10) {
                int tensDigit = digit / 10;
                digit %= 10;
                digit += tensDigit;
            }

            //printf("New Digit value: %i\n", digit);
            x *= 10;
            digSum += digit;
            oddDigSum += oddDigit;
            fullDigSum = digSum + oddDigSum;
        }
        //printf("Even Digit Sum: %i\nOdd Digit Sum: %i\nFull Digit Sum: %i\n", fullDigSum, oddDigSum, fullDigSum);

        if (fullDigSum % 10 == 0) {
            printf("American Express\n");
        }
        else {
            printf("Invalid card\n");
        }
    }


    //Mastercard
    else if (fullCred >= 5100000000000000 && fullCred < 5600000000000000) {
        int x = 1;
        int digSum = 0;
        int oddDigSum = 0;
        int fullDigSum = 0;

        for(int i = 0; i < masLen ; i++) {
            digit = cred % (100 * x);
            digit /= (10 * x);
            oddDigit = cred % (10 * x);
            oddDigit /= x;
            cred /= 10;
            digit *= 2;

            if (digit >= 10) {
                int tensDigit = digit / 10;
                digit %= 10;
                digit += tensDigit;
            }

            //printf("New Digit value: %i\n", digit);
            x *= 10;
            digSum += digit;
            oddDigSum += oddDigit;
            fullDigSum = digSum + oddDigSum;
        }
        //printf("Even Digit Sum: %i\nOdd Digit Sum: %i\nFull Digit Sum: %i\n", fullDigSum, oddDigSum, fullDigSum);

        if (fullDigSum % 10 == 0) {
            printf("MasterCard\n");
        }
        else {
            printf("Invalid card\n");
        }
    }

    else {
        printf("invalid\n");
    }

    return 0;

}