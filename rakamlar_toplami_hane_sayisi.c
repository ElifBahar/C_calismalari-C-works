#include <stdio.h>

//  girilen sayının rakamları toplamını ve baamak sayısını bulan program

int main(){
	
	int sayi, basamak=0, toplam=0;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	
	do {
			toplam += sayi % 10;
			
			basamak ++;		
		
			sayi = sayi / 10;
		
	}
	while(sayi > 0);
	
	printf("Sayinin rakamlari toplami %d, sayi %d basamaklidir.",toplam,basamak);
	
	return 0;
	
}
