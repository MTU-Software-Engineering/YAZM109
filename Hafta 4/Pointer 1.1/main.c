#include <stdio.h>
#include <stdlib.h>

/* Referans ile çağırma */

void referansKup(int *isaretci){
	*isaretci = *isaretci * *isaretci * *isaretci;
}

int main() {
	int sayi = 3;
	printf("Sayimiz = %d\n",sayi);
	referansKup(&sayi);
	printf("Sayimiz = %d",sayi);
	return 0;
}