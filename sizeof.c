#include <stdio.h>

int main(){
	printf("\nsize of an integer variable:\t%lu", sizeof(int));			//sizeof shows the variable's memory size in bytes
	printf("\nsize of a char variable:\t%lu", sizeof(char));			// I used \t to make all number in same row
	printf("\nsize of a float variable:\t%lu", sizeof(float));			// %lu used for unsigned long integers
	printf("\nsize of a string limited to 8:\t%lu", sizeof(char[8]));
	printf("\nsize of a string limited to 13:\t%lu", sizeof(char[13]));
	printf("\nsize of a double variable:\t%lu", sizeof(double));
	
	
}
