/*   10 elemanlı bir dizinin elemanları klavyeden girilecektir.Dizi elemanlarından negatif ve pozıtı
olanlarının ayrı ayrı toplamını bulup ekrana yazdıran problemi pointer kullanarak C ile çözünüz.
*/

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

