#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen n elemanlı a dizisini küçükten büyüğe doğru Merge Sort (birleştirmeli
sıralama) algoritmasıyla sıralayan programı yazınız.
										sol < sag
  		  0  1  2  3  4  5					int	orta = (sol+sag)/2
		  45 78	98 12 54 3				
	 	  3-12-45-54-78-98	
	 				
	 				bol divide		birlestir merge
				  	
		0	1	
		5	7	   			
 */							
void birlestir(int a[],int sol, int orta, int sag){
	int elemansol = orta - sol + 1; 
	int elemansag = sag - orta;
	int soldizi[elemansol],sagdizi[elemansag];
	for(int i = 0;i<elemansol;i++){
		soldizi[i]=a[sol+i];
	}
	for(int j= 0;j<elemansag;j++){
		sagdizi[j] = a[orta+1+j];
	}
	int i = 0, j= 0, k=sol;
	while(i<elemansol && j < elemansag){
		if(soldizi[i]<=sagdizi[j]){
			a[k] = soldizi[i];
			i++;
		}else{
			a[k]=sagdizi[j];
			j++;
		}
		k++;
	}
	while(i<elemansol){
		a[k] = soldizi[i];
		i++;
		k++;
	}
	while(j<elemansag){
		a[k] = sagdizi[j];
		j++;
		k++;
	}
	
}							
void bol(int a[],int sol,int sag){
	if(sol<sag){
		int orta = (sol+sag)/2;
		bol(a,sol,orta);
		bol(a,orta+1,sag);
		birlestir(a,sol,orta,sag);
	}
}
int main() {
	int n;
	printf("Eleman sayisini giriniz:\n");
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i<n;i++){
		printf("%d. elemani giriniz.\n",i+1);
		scanf("%d",&a[i]);
		printf("%d.eleman = %d\n",i+1,a[i]);
	}
	bol(a,0,n-1);
	for(int i = 0;i<n;i++){
		printf("%d.eleman = %d\n",i+1,a[i]);
	}
	return 0;
}
