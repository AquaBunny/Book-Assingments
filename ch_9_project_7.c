/***********************************************************
*Daniel Bachler
*CS120
*11-2-15
*ch_9_project_7.c
*	Effienctly raises numbers to a given power from the 
*	user
***********************************************************/
#include <stdio.h> /*printf scanf]*/
#include <math.h> /*pow*/
/*Prototype for power*/
int power(int x, int n);

int main(void) {
	int x, n;
	printf("Please input x: ");
	scanf("%i", &x);
	printf("Please input n: ");	
	scanf("%i", &n);
	printf("\n%i", power(x, n));
	return 0;
}
/*Power function, is recurisve.  Takes x which is base and n which is exponent*/
int power(int x, int n) {
	/*If n is zero return 1*/
	if(n == 0){
		return 1;
	/*If n is even call power function with updated values then return it*/
	} else if(n % 2 == 0) {
		int temp = (int) (power(x, n / 2) * power(x, n / 2));
		return temp;
	/*If n is odd call modified power function and return value*/
	} else if(n % 2 == 1){ 
		int temp = (int) (x * power(x, n - 1));
		return temp;
	} 
}