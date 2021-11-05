#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayi;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);
	if(sayi > 0){
		printf("Sayi 0dan buyuktur.");
	}else{
		printf("Else kodu calisti");
	}
	return 0;
}