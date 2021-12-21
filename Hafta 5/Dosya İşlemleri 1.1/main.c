#include <stdio.h>
#include <stdlib.h>

/* Rekürsif (kendi kendini çağırabilen) bir fonksiyon yazarak fibonacci serisinin ilk 20 elemanını hesaplayan bir C programı yazınız. Program hesapladığı değerleri 
bir dosya içerisine alt alta olacak şekilde kaydetmelidir 
0 f(0)  -----
1 f(1) -----
1 f(2) f(0) + f(1)
2 f(3) f(1) + f(2)
3 f(4) f(2) + f(3)
5 f(5) f(3) + f(4)
8 f(6) f(4) + f(5)
.
.
.
.
n f(n) f(n-2) + f(n-1)




*/

int fib(int sayi){
	if(sayi == 1 || sayi == 0){
		return sayi;
	}else{
		return (fib(sayi-2) + fib(sayi-1));
	}	
}

int main(int argc, char *argv[]) {
	FILE * dosya;
	dosya = fopen("fibonacci.txt","w");
	for(int i = 0; i<20;i++){
		fprintf(dosya,"%d\n",fib(i));
	}
	fclose(dosya);
	return 0;
}