#include <stdio.h>
#include <stdlib.h>

/* -3,3 aralığında değerler alana 2 adet 3x3lük matrisin çarpımı işlemi

1	2	3		1	2	3		1	2	3					
4	5	6		4	5	6		4	5	6	
7	8	9		7	8	9		7	8	9

sonuc[a][b] = bir[a][c]*iki[c][b] + bir[a][c+1]*iki[c+1][b] + bir[a][c+2]*iki[c+2][b]
sonuc[0][0] = bir[0][0]*iki[0][0] + bir[0][1]*iki[1][0] + bir[0][2]*iki[2][0] 
sonuc[0][1] = bir[0][0]*iki[0][1] + bir[0][1]*iki[1][1] + bir[0][2]*iki[2][1]
sonuc[0][2] = bir[0][0]*iki[0][2] + bir[0][1]*iki[1][2] + bir[0][2]*iki[2][2]
sonuc[1][0] = bir[1][0]*iki[0][0] + bir[1][1]*iki[1][0] + bir[1][2]*iki[2][0]
sonuc[1][1] = bir[1][0]*iki[0][1] + bir[1][1]*iki[1][1] + bir[1][2]*iki[2][1]

 */

int main() {
	int bir[3][3],iki[3][3],sonuc[3][3],toplam=0;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			bir[i][j]=(rand() % 7 )-3;
			iki[i][j]=(rand() % 7 )-3;
		}
	}
	printf("Birinci dizi : \n");
	for(int i = 0;i<3;i++){
		for(int j = 0; j<3; j++){
			printf("%d\t",bir[i][j]);
		}
		printf("\n");
	}
	printf("Ikinci dizi : \n");
	for(int i = 0;i<3;i++){
		for(int j = 0; j<3; j++){
			printf("%d\t",iki[i][j]);
		}
		printf("\n");
	}
	
	for(int a = 0; a<3;a++){
		for(int b = 0; b<3;b++){
		toplam = 0;
			for(int c = 0; c<3;c++){
				toplam = toplam + bir[a][c]*iki[c][b];
			}
		sonuc[a][b]=toplam;	
		}
	}
	printf("Sonuc dizi : \n");
	for(int i = 0;i<3;i++){
		for(int j = 0; j<3; j++){
			printf("%d\t",sonuc[i][j]);
		}
		printf("\n");
	}
	return 0;
}