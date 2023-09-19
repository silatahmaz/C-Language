#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) 
{ 
int n;
    int dizi_uzunlugu; 
 	printf("\nDizi uzunlugunu giriniz:\n"); 
	 
	scanf("%d", &dizi_uzunlugu);
	 
	n = dizi_uzunlugu; 
	 
	int dizi[n]; 
	
	int kopya_dizi[n]; 
 
	int tekrarEdenElemanSayilari[n]; 
 
	int i = 0; 
	while(n > 0) {
		
		printf("%d. elemani giriniz:\n" , i+1);
		
		scanf("%d", &dizi[i]);
		
		i++;
		n--;
	} 
	 
	 for(i = 0; i < dizi_uzunlugu; i++)
	 {
	
			kopya_dizi[i] = dizi[i];
			
			tekrarEdenElemanSayilari[i] = 1;
	 }
	
	for(i = 0; i < dizi_uzunlugu; i++)
	{
	
		for(int j = 0; j <dizi_uzunlugu; j++){
		
			if(i != j) {
			
				if(dizi[i] == kopya_dizi[j])
				 {
				
					tekrarEdenElemanSayilari[i] = tekrarEdenElemanSayilari[i] + 1;
				}
				
			}
			
		}
		
	} 
	
	for(i = 0; i < dizi_uzunlugu; i++)
	{
	
		printf("%d elemani tekrar sayisi: %d\n" ,dizi[i], tekrarEdenElemanSayilari[i]);
	}
	return 0;
}