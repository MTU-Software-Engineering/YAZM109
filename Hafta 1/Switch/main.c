#include <stdio.h>
#include <stdlib.h>


int main() {
	char islem;
	printf("Islem turunu tuslayiniz :");
	scanf("%c",&islem);
	switch(islem){
		case '+':
			printf("Islem toplamadir.");
			break;
		case '-':
			printf("Islem cikartmadir.");
			break;
		case '/':
			printf("Islem bolmedir.");
			break;
		case '*':
			printf("Islem carpmadir.");
			break;
	}
	return 0;
}