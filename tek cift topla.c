#include <stdio.h>

int main(){
	int i, sayi1,sayi2,t=0;
	printf("baslangic ve bitis satisi giriniz: ");
	scanf("%d %d", &sayi1, &sayi2);
	
	printf("Tek sayilarin toplami icin 1\ Cift sayilarin toplamý icin 2\n");
	scanf("%d", &i);
	
	if(i==1){
		if(sayi1%2==1){
		while(sayi1<=sayi2){
			t=t+sayi1;
			sayi1=sayi1+2;
		}}
		else{
			sayi1++;
			while(sayi1<=sayi2){
				t=t+sayi1;
				sayi1=sayi1+2;
			}
		}
	} else{
		if(sayi1%2==1){
			sayi1++;
			while(sayi1<=sayi2){
			t=t+sayi1;
			sayi1=sayi1+2;
		}}
		else{
			while(sayi1<=sayi2){
				t=t+sayi1;
				sayi1=sayi1+2;
			}
		}
	}
	
	
	
	
	
	
	printf("%d", t);
	
	return 0;
}



