#include <stdio.h>
#include <stdlib.h>

/* -3,3 Aralığında Random Değer Almış 2 adet 3×3 Matrislerde Toplama işlemi 

1	2	3			1	2	3					sonuc[0][0]= bir[0][0]+iki[0][0]	sonuc[0][1]= bir[0][1]+iki[0][1] sonuc[0][2]= bir[0][2]+iki[0][2]
4	5	6			4	5	6					sonuc[1][0]= bir[1][0]+iki[1][0]	sonuc[1][1]= bir[1][1]+iki[1][1] sonuc[1][2]= bir[1][2]+iki[1][2]
7	8	9			7	8	9					sonuc[2][0]= bir[2][0]+iki[2][0]	sonuc[2][1]= bir[2][1]+iki[2][1] sonuc[2][2]= bir[2][2]+iki[2][2]



*/

int main(int argc, char *argv[]) {	
	int bir[3][3],iki[3][3],sonuc[3][3];
	
	for(int i = 0; i<3;i++){
		for(int j = 0; j<3;j++){
			bir[i][j]=(rand() % 7) -3;
			iki[i][j]=(rand() % 7) -3;
		}
	}
	printf("Birinci Dizi:\n");
	for(int i = 0;i<3;i++){
		for(int j = 0; j<3;j++){
			printf("%d\t",bir[i][j]);	
		}
		printf("\n");
	}
	printf("Ikinci Dizi:\n");
	for(int i = 0;i<3;i++){
		for(int j = 0; j<3;j++){
			printf("%d\t",iki[i][j]);	
		}
		printf("\n");
	}
	printf("Sonuc Dizi:\n");
	for(int i = 0;i<3;i++){
		for(int j = 0; j<3;j++){
			sonuc[i][j]= bir[i][j]+iki[i][j];
			printf("%d\t",sonuc[i][j]);	
		}
		printf("\n");
	}		
	return 0;
}