#include <stdio.h>		//Imports the library 

int number1;		// Define the variable that will be used for user input

int main(){
	
	printf("Please enter a integer: ");			// Asks for user input
	scanf("%d", &number1);				// User input will be assign to number1 variable
	
	if(number1 % 2 == 0){		// is number perfectly divideble by 2 
		printf("%d is an even number.", number1);		//if yes it is an even number
	}
	
	else{
		printf("%d is an odd number", number1);		// if no it is an odd number
	}
	
	return 0;
}





