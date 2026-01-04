/*   10 elemanlý bir dizinin elemanlarý klavyeden girilecektir.Dizi elemanlarýndan negatif ve pozýtý
olanlarýnýn ayrý ayrý toplamýný bulup ekrana yazdýran problemi pointer kullanarak C ile çözünüz.(25
uan).*/

#include <stdio.h>

int main(){
	int dizi[10], i, pTop=0, nTop=0;
	int* ptr;
	ptr=dizi;
	
	printf("10 adet sayi giriniz: ");
	for(i=0;i<10;i++){
		scanf("%d", (ptr+i));
	}
	for(i=0;i<10;i++){
		if(*(ptr+i)>0){
			pTop+=*(ptr+i);
		}
		else{
			nTop+=*(ptr+i);
		}
	}
	printf("\nPozitif toplam: %d\n", pTop);
	printf("Negatif toplam: %d", nTop);
	
	
}
