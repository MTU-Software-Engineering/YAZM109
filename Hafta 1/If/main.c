#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayi;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);
	if(sayi > 0){
		printf("Sayi 0 dan buyuk.");
	}
	if(sayi < 3){
		printf("\tSayi 3den kucuk.");
	}

	
	return 0;
}