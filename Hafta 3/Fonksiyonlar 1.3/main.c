#include <stdio.h>
#include <stdlib.h>

/* 
Recursive çarpma işlemi(toplama ile) yaparak sonucu geri döndüren fonksiyonu yazınız ve sonucu ekrana yazdırınız.
5*4
5	4
+
5	3
+
5	2
+
5	1
+
5	0
 */
int carpma(int a, int b){ 
	if(b == 0){
		return 0;
	}
	return a + carpma(a,b-1);
}
int main(int argc, char *argv[]) {
	int sonuc;
	sonuc = carpma(3,5);
	printf("%d",sonuc);
	
	return 0;
}