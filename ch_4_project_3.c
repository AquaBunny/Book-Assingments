/***********************************************************
*Daniel Bachler
*CS120
*11-2-15
*ch_4_project_3.c
*	Reverses a three digit number without arithmatic
***********************************************************/
#include <stdio.h> /*printf scanf*/

int main(void) {
	int firstNum, secondNum, thirdNum;
	/*Getting user input and storing each digit into its own int*/
	printf("Please input a three digit number to be reversed: ");
	scanf("%1d%1d%1d", &firstNum, &secondNum, &thirdNum);
	/*Printing reversed input*/
	printf("Your number reversed is: %i%i%i", thirdNum, secondNum, firstNum);
	return 0;
}