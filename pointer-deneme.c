#include <stdio.h>

int main(){
	int a=10, dizi[10];
	int i;
	int* ptr;
	ptr = &a;
	for(i=0; i<10; i++){
		dizi[i]= 20+i;
	}
	printf("%d\n", *ptr);
	printf("%p\n", ptr);
	ptr = &dizi[3];
	printf("%d\n", *ptr);
	printf("%p\n", ptr);
	
	
	for(i=0; i<3; i++){
		scanf("%d", &dizi[i]);
	}
	for(i=0; i<3; i++){
		scanf("%d", ptr);
	}
	
	
	
}
