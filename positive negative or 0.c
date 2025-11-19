#include <stdio.h>

int number;


int main(){
	
	printf("Please enter an integer: ");
	scanf("%d", &number);
	
	if(number > 0){			// is number greater than 0
		printf("%d is positive", number);
	}
	else if(number < 0){	// is number less than 0
		printf("%d is negative", number);
	}
	else{
		printf("%d is 0", number);
	}
	
	return 0;
}




