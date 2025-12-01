#include <stdio.h>

int main(){
	int sayi2, toplam, sayi1;
	printf("sayi1 ve sayi2 gir: ");
	scanf("%d %d", &sayi1, &sayi2);
	while (sayi1>sayi2){
		printf("Hatali girildi tekrar giriniz\nSayi1 ve sayi2 giriniz: ");
		scanf("%d %d",&sayi1, &sayi2);
	}
	while(sayi1<=sayi2){
		toplam=toplam+sayi1;
		sayi1++;
	}
	printf("\nsonuc= %d\n",toplam);
	
	return 0;
}
