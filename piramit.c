#include <stdio.h>

int main(){
	int i, j,k,a,sayi;
	printf("kac tane: ");
	scanf("%d",&sayi);
	a=sayi;
	
	for(i=0; i<=sayi; i++){
		for(j=0; j<=sayi-i; j++){   //satýrýn baþýnda gerekli boþluk sayýsýný bulmak için toplam satýr sayýsýndan kaçýncý satýrda olduðumuzu çýkarýrýz
			printf(" ");
		}
		
		for(k=0; k<(2*i-1);k++){    //her satýrda gerekli olan yýldýz sayýsý = kaçýncý satýrdaysak onun 2 katýnýn 1 eksiði
			printf("*");
		}
		printf("\n");               //içerideki for dögülerinden ayrý olmasý ile alt satýra geçmeyi saðlar
		}
	
}
/*

  *
 ***
*****

*/



