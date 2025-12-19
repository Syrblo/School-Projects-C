#include <stdio.h>

int main(){
	int i, j,k,a,sayi;
	printf("kac tane: ");
	scanf("%d",&sayi);
	a=sayi;
	
	for(i=0; i<=sayi; i++){
		for(j=0; j<=a-1; j++){
			printf(" ");
		}
		a--;
		for(k=0; k<i;k++){
			printf("*");
		}
		printf("\n");
		}
	

/*

  *
 ***
*****
   
   
   

*/
}


