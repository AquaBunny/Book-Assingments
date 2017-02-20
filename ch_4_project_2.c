/***********************************************************
*Daniel Bachler
*CS120
*11-2-15
*ch_4_project_2.c
*	Takes a 3 digit number and reverses its digits
***********************************************************/
#include <stdio.h> /*printf, scanf*/

int main(void) {
	/*Input is user input, and the 3 ints for reversing the input*/
	int input, firstNum, secondNum, thirdNum; 
	/*Collects user input and stores it to input*/
	printf("Please enter the number you would like reversed: ");
	scanf("%d", &input);	
	/*Reverses input*/
	firstNum = input / 100;
	secondNum = input / 10 % 10;
	thirdNum = input % 10;
	/*Prints reversed input*/
	printf("You're reversed number is %i%i%i",thirdNum, secondNum, firstNum);
	return 0;
}