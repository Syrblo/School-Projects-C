/*
50 adet sayýyý pozitif negatif diye A dizisinden B ve C dizisine aktarsýn.
pointer kullan  */
#include <stdio.h>

int main(){
	int i, elemanB=0, elemanC=0, A[50], B[50], C[50];
	int *ptrA, *ptrB, *ptrC;
	ptrA=A;
	ptrB=B;
	ptrC=C;
	
	printf("A dizisinin elemanlarini giriniz: ");
	for(i=0;i<5;i++){
		scanf("%d", ptrA+i);
	}
	for(i=0;i<5;i++){
		if(*(ptrA+i)<0){
			*(ptrB+elemanB)=*(ptrA+i);
			elemanB++;
		}else if(*(ptrA+i)>0){
			*(ptrC+elemanC)=*(ptrA+i);
			elemanC++;
		}
		
		
	}
	printf("B dizisi elemanlari: \n");
	for(i=0;i<elemanB;i++){
		printf("%d\n", *(ptrB+i));
	}
	printf("\nC dizisi elemanlari: \n");
	for(i=0;i<elemanC;i++){
		printf("%d\n", *(ptrC+i));
	}
	
}
	
