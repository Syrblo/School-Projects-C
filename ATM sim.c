/* Kullanıcıdan bakiye ve çekilmek istenen tutarı iste.
eğer çekilmek istenen tutar bakiyeden fazlaysa "yetersiz bakiye yaz".
Eğer tutar bakiyeyi 100tl'nin altına düşürecekse kritik seviye uyarısı versin ve onay istesin*/
#include <stdio.h>

int bakiye;
int tutar;
int tuslama;

int main(){
	
	printf("Lutfen hesabinizdaki bakiye miktarini giriniz: ");
	scanf("%d", &bakiye);
	printf("\nLutfen hesabinizdan cekmek istediginiz tutari giriniz: ");
	scanf("%d", &tutar);
	while(tutar <= 0){
		printf("\n!! Hatali tuslama yaptiniz. Lutfen cekilebilir bir tutar giriniz.\n");
		printf("Hesabinizdan cekmek istediginiz tutari giriniz: ");
		scanf("%d", &tutar);
	}
	printf("\n--------------------------------\n\n");
	
	if(tutar > bakiye){
		printf("\n----  Hesabinizda yeterli bakiye mevcut degil!  ----");
		printf("\n\n");
		return 0;
	}
	if((bakiye - tutar) <= 100){
		printf("!! Hesabinizdaki para kritik duzeye dusecektir!\n\nPara cekme islemini onayliyorsaniz 1\'i,\nOnaylamiyorsaniz lutfen 0\'i tuslayiniz.\n\n [1, 0]\n ------> ");
		scanf("%d", &tuslama);
		while(tuslama != 1 && tuslama != 0){
			printf("\n!! Hatali tuslama yaptiniz. Lutfen tekrar deneyiniz.\n\nPara cekme islemini onayliyorsaniz 1\'i,\nOnaylamiyorsaniz lutfen 0\'i tuslayiniz.\n\n [1, 0]\n ------> ");
			scanf("%d", &tuslama);
		}
		if(tuslama == 1){
			printf("\nPara cekme islemini onayladiniz.\n\n--------------------------------\n\n");
			printf("Hesabinizda kalan tutar: %d", (bakiye-tutar));
			printf("\nAsagidaki bolmeden %d liranizi alabilirsiniz\n", tutar);
			return 0;
		}
		else if(tuslama == 0){
			printf("\n0\'i tusladiniz. \n\n\n       ------------------------\n\n----  Isleminiz iptal edilmistir.  ----\n\n       ------------------------\n\n");
			return 0;
		}
	} else{
		printf("Hesabinizda kalan tutar: %d", (bakiye-tutar));
		printf("\nAsagidaki bolmeden %d liranizi alabilirsiniz\n", tutar);
		return 0;
	}
	
	return 0;
}


