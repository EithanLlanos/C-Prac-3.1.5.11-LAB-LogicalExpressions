//Scenario
//Write a program that computes and prints whether or not a given year is a leap year.
//A leap year is a year that is exactly(without a remainder) divisible by four, except for years that are exactly divisible by 100, but these years are leap years if they are exactly divisible by 400.
//Use the modulo operator and some logic operators in your program and try to write only one condition(of course you can now use the else keyword).
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample input
//2010
//
//Expected output
//2010 is not a leap year.
//
//Sample input
//2015
//
//Expected output
//2015 is not a leap year.
//
//Sample input
//2000
//
//Expected output
//2000 is a leap year.
//
//Sample input
//1900
//
//Expected output
//1900 is not a leap year.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	int v1;
	printf("Enter a year: \n");
	scanf_s("%d", &v1);
	if (v1 % 4 == 0 && ((v1 % 100 == 0) == (v1 % 400 == 0))) printf("%d is a leap year",v1);
	else printf("%d is not a leap year",v1);
}

