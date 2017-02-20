/***********************************************************
*Daniel Bachler
*CS120
*11-2-15
*ch_6_project_1.c
*	Prints the largest non 0 and non negative number input
*	by the user
***********************************************************/
#include <stdio.h> /*printf scanf*/
/*Prototype for larger*/
double largest(double lastNum);

int main(void) {
	/*Calls and prints the result of largest*/
	printf("%f", largest(0));
	return 0;
}
/*Takes a parameter and compares it to an input, if the input is greater it
calls itself with the past input as a parameter, process repeates until a number 
less than zero is entered*/
double largest(double lastNum) {
	double input;
	/*Asks for and stores input*/
	printf("Please enter your number: ");
	scanf("%lf", &input);
	/*Checks if the number should terminate the process*/
	if(input <= 0) {
		/*If the number should terminate detects if any input was given, outputs accordinly*/
		if(lastNum == 0) {
			printf("No input ");
			return 0;
		} else {
			return lastNum;
		}
	/*If the input is larger call function with new largest*/
	} else if(input > lastNum) {
		largest(input);
	/*Otherwise repeat with current largest number*/
	} else {
		largest(lastNum);
	}
	return 0;
}