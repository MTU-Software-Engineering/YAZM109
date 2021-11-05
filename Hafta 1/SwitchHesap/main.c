#include <stdio.h>
#include <stdlib.h>


int main() {
	char islem;
	float sayi1,sayi2;
	printf("Islem turunu tuslayiniz : ");
	scanf("%c",&islem);
	printf("Bir sayi giriniz :");
	scanf("%f",&sayi1);
	printf("Bir sayi daha giriniz :");
	scanf("%f",&sayi2);
	switch(islem){
		case '+':
			printf("Sonuc : %f",sayi1+sayi2);
			break;
		case '-':
			printf("Sonuc : %f",sayi1-sayi2);
			break;
		case '*':
			printf("Sonuc : %f",sayi1*sayi2);
			break;
		case '/':
			printf("Sonuc : %f",sayi1/sayi2);
			break;
	}
	return 0;
}