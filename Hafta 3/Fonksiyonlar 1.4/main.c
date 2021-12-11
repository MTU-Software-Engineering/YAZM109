#include <stdio.h>
#include <stdlib.h>

/* 
Recursive üs alma işlemi yaparak sonucu geri döndüren fonksiyonu yazınız ve sonucu ekrana yazdırınız. 
5^3
5	3
*
5	2				hesap(5,3) -> 5*5*5*1 ->
*
5	1
*
5	0


*/
int hesap(int taban,int us){
	if(us==0){
		return 1;
	}
	
	return taban * hesap(taban,us-1);
}
int main(int argc, char *argv[]) {
	int sonuc;
	sonuc = hesap(2,2);
	printf("%d",sonuc);
	return 0;
	
}