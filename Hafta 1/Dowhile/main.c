#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	printf("Bir sayi giriniz :");
	scanf("%d",&i);
	do{
		printf("%d",i);
		i++;
	}while(i > 5);
	return 0;
}