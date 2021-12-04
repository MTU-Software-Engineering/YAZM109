#include <stdio.h>
#include <stdlib.h>

/* N kişilik bir sınıfın herhangi bir dersten yıl sonu notları girilmektedir. 
Buna göre sınıf ortalamasının altında kalanlara “Kaldı” diğerlerine “Geçti” yazan C programını yazınız. */

int main() {
	int mevcut = 0;
	float ortalama = 0;
	int toplam = 0;
	printf("Sinif mevcudunu giriniz.\n");
	scanf("%d",&mevcut);
	printf("Sinif mevcudu = %d\n",mevcut);
	int dizi[mevcut];
	for(int i = 0; i<mevcut;i++){
		printf("%d.ogrencinin notunu giriniz.\n",i+1);
		scanf("%d",&dizi[i]);
		printf("%d.ogrencinin notu = %d\n",i+1,dizi[i]);
		toplam = toplam + dizi[i];
		printf("Suanki toplam = %d\n",toplam);
	}
	ortalama = (float)toplam / (float)mevcut;
	printf("Ortalama = %f\n",ortalama);
	for(int i = 0; i<mevcut;i++){
		if(dizi[i]<ortalama){
			printf("%d. ogrenci kaldi.\n",i+1);
		}else{
			printf("%d. ogrenci gecti. \n",i+1);
		}
	}
	return 0;
}