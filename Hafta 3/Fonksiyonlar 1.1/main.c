#include <stdio.h>
#include <stdlib.h>

/* 

Sayının asal sayı olup olmadığını kontrol eden fonksiyon yazınız.main den asal_sayi_hesapla() fonksiyonunu çağırarak.
1 ve kendisi dışında hiçbir sayıya bölünmeyen 1 den büyük sayıya asal sayı denir.
2 en küçük asal sayı
2	3 asal sayı
2,3 4 asal değil
2,3,4, 5 asal sayi
2,3,4,5 6
 */
void asal_sayi_hesapla(int sayi){
	int degisim=0;
	for(int i=2;i<sayi;i++){
		if(sayi%i == 0){
			degisim = 1;
		}
	}
	if((degisim == 0) && (sayi > 1) ){
		printf("Sayi asaldir.");
	}else{
		printf("Sayi asal degildir.");
	}
	
	
	
}
int main(int argc, char *argv[]) {
	int sayi;
	printf("Sayi giriniz.\n");
	scanf("%d",&sayi);
	asal_sayi_hesapla(sayi);
	return 0;
}