#include <stdio.h>
#include <stdlib.h>

/*
Bölme işlemini recursive(çıkarma ile) yaparak bölümü geri döndüren fonksiyonu yazınız ve bölümü ekrana yazdırınız.
9 3
9-3 1
6-3 2 
3-3 3
0

5 3
5-3 1
2-3
-1

*/
int bolme(int bolunen, int bolen){ 
	if(bolen == 0){
		return 0;
	}
	if(bolunen-bolen == 0){
		return 1;
	}
	if(bolunen<bolen){
		return 0;
	}
	return 1 + bolme(bolunen-bolen,bolen);

}
int main(int argc, char *argv[]) {
	int sonuc;
	sonuc = bolme(36,6);
	printf("%d",sonuc);
	return 0;
}