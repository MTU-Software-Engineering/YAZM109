#include <stdio.h>
#include <stdlib.h>

/* Bir sınıftaki öğrencilerin bir derse ait sınav puanlarını klavye yolu ile kullanıcıdan alarak bir
dosyaya kaydeden C programını yazınız. */

int main() {
	int mevcut;
	int puan;
	printf("Sinif mevcudu kac kisidir?\n");
	scanf("%d",&mevcut);
	FILE * dosya;
	dosya = fopen("notlar.txt","w");
	for(int i=0;i<mevcut;i++){
		printf("%d. ogrencinin notunu giriniz.\n",i+1);
		scanf("%d",&puan);
		fprintf(dosya,"%d\n",puan);
	}
	fclose(dosya);
	return 0;
}