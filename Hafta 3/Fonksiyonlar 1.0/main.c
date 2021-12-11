#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Kullanıcının girdiği sayıyı yine kullanıcının girdiği dereceleri tam sayı olan polinom fonksiyonunda yerine koyan ve sonucu hesaplayan program.
 */

void yazdir(float dizi[],int derece){
	for(int i=0;i<=derece;i++){
		if(i!=derece){
			printf("%f*x^%d + ",dizi[i],i);	
		}else{
			printf("%f*x^%d\n",dizi[i],i);
		}
		
	}
}

float hesapla(float dizi[],int derece, int x){
	float sonuc=0;
	for(int i=0;i<=derece;i++){
		sonuc = sonuc + dizi[i]*pow(x,i);
	}
	return sonuc;
	
}

int main() {
	int derece;
	int x;
	printf("Polinomun derecesini giriniz.\n");
	scanf("%d",&derece);
	float katsayi[derece];
	for(int i = 0; i<=derece;i++){
		printf("%d. katsayiyi giriniz.\n",i+1);
		scanf("%f",&katsayi[i]);
	}
	printf("Polinomun cozulmesini istediginiz x degerini girin.\n");
	scanf("%d",&x);
	yazdir(katsayi,derece);
	printf("Sonuc = %f",hesapla(katsayi,derece,x));
	return 0;
}