#include <stdio.h>
#include <stdlib.h>

/* Değerle çağırma */

int kupAl(int x){
	x = x*x*x;
	return x;
}


int main(int argc, char *argv[]) {
	int sayi = 3;
	int sonuc = kupAl(sayi);
	printf("%d",sonuc);
	return 0;
}