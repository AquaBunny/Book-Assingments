/***********************************************************
*Daniel Bachler
*CS120
*10-27-15
*ch_4_project_1.c
*	Takes a 2 digit number and reverses its digits
***********************************************************/
#include <stdio.h> /*printf, scanf*/

int main(void) {
	int input, firstNum, secondNum; /*Input is user input, and the 2 ints for reversing the input*/
	/*Collects user input and stores it to input*/
	printf("Please enter the number you would like reversed: "); 
	scanf("%d", &input);
	/*Reverses input*/
	firstNum = input / 10;
	secondNum = input % 10;
	/*Prints reversed input*/
	printf("You're reversed number is %i%i", secondNum, firstNum);
	return 0;
}