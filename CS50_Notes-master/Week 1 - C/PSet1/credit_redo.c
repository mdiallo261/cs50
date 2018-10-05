#include <stdio.h>
#include <cs50.h>

int main(void) {

	//credit card number entries
	long long credConst, credDyn;
	//range of credit card numbers from lowest possible to highest possible
	long long amex34Start, amex34End, amex37Start, amex37End, mascStart, mascEnd, visa13Start, visa13End, visa16Start, visa16End;
	//individual digits in card number, and for loop length
	int digX2, dig, len;
	//sum of digits
	int digX2Sum, digSum, fullDigSum;
	//digit iterator
	int tenCount;

	//checks for positive long long using while invalid condition
	do {
		printf("Number: \n");
		credConst = get_long_long();
		credDyn = credConst;
	} while(credConst < 0);

	//full range of 15-digit American Express cards starting with 34
	amex34Start = 340000000000000; //Must be greater than or equal to this value
	amex34End = 350000000000000; //Must be less than this value

	//full range of 15-digit American Express cards starting with 37
	amex37Start = 370000000000000; //Must be greater than or equal to this value
	amex37End = 380000000000000; //Must be less than this value

	//full range of 16-digit MasterCard cards, starting with digits 51, 52, 53, 54, or 55
	mascStart = 5100000000000000; //Must be greater than or equal to this value
	mascEnd = 5600000000000000; //Must be less than this value

	//full range of 13-digit Visa cards starting with 4
	visa13Start = 4000000000000; //Must be greater than or equal to this value
	visa13End = 5000000000000; //Must be less than this value

	//full range of 16-digit Visa cards starting with 4
	visa16Start = 4000000000000000; //Must be greater than or equal to this value
	visa16End = 5000000000000000; //Must be less than this value


	//checking card digit range to determine length and card type
	//length is digit length/2, rounded up for odd numbers
	if (
		((credConst >= amex34Start) && (credConst < amex34End)) || 
		((credConst >= amex37Start) && (credConst < amex37End)) || 
		((credConst >= mascStart) && (credConst < mascEnd)) || 
		((credConst >= visa16Start) && (credConst <visa16End))
		) 
	{
		len = 8;
	}
	else if ((credConst >= visa13Start) && (credConst < visa13End)) {
		len =  7;
	}
	else {
		len = 0;
	}

	//These values will be altered within for loop
	digX2Sum = 0;
	digSum = 0;
	fullDigSum = 0;
	tenCount = 1;
	
	//looping through digits to calculate Luhn checksum formula
	for (int i = 0; i < len; i++) {
		//loops through second to last number until beginning
		digX2 = credDyn % (100 * tenCount);
		digX2 /= (10 * tenCount);
		//loops through last number until beginning
		dig = credDyn % (10 * tenCount);
		dig /= tenCount;
		credDyn /= 10; //reduces credDyn by a Tens Place
		digX2 *= 2; //multiples digX2 by 2

		if (digX2 >= 10) {
		    int tensDigit = digX2 / 10;
		    digX2 %= 10;
		    digX2 += tensDigit;
		}

		tenCount *= 10;
		digX2Sum += digX2;
		digSum += dig;
		fullDigSum = digX2Sum + digSum;
	}

	//AmEx
	if (((fullDigSum % 10 == 0) && ((credConst >= amex34Start) && (credConst < amex34End))) ||
		((fullDigSum % 10 == 0) && ((credConst >= amex37Start) && (credConst < amex37End)))
		)
	{
		printf("American Express\n");
	}

	else if ((fullDigSum % 10 == 0) && ((credConst >= mascStart) && (credConst < mascEnd))) {
		printf("MasterCard\n");
	}

	//Visa
	else if (((fullDigSum % 10 == 0) && (len == 7)) || 
		((fullDigSum % 10 == 0) && ((credConst >= visa16Start) && (credConst <visa16End)))
		) 
	{
		printf("Visa\n");
	}
	else {
		printf("Invalid\n");
	}

	return 0;
}