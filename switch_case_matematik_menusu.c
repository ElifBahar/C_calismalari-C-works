#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayi, sayi2, islem,sonuc;
	float pi=(3,14);
	
		printf("Matematik Menusu\n*******************\n\n");
		
		
		
		printf("1-Girilen sayiyla karede alan ve cevre hesabi\n");
		printf("2-Girilen sayiyla dikdortgende alan ve cevre hesabi\n");
		printf("3-Girilen sayiyla dairede alan ve cevre hesabi\n");
		printf("4-Girilen sayinin kupu\n\n");
		
		printf("Lutfen islem yapmak istediginiz sayiyi girin: ");
		scanf("%d",&sayi);
		printf("Lutfen ikinci sayiyi giriniz: (UYARI, TEK SAYIYLA ISLEM YAPMAK ISTIYORSANIZ IKINCI SAYIYI 0 GIRINIZ)");
		scanf("%d",&sayi2);
		printf("Lutfen isleminizi secin: ");
		scanf("%d",&islem);
		
		switch(islem){
			case 1:
				printf("Alan: %d, Cevre: %d", (sayi*sayi), (sayi*4));
				break;
			case 2:
				printf("Alan: %d, Cevre: %d", (sayi*sayi2),(2*sayi+2*sayi2));
				break;
			case 3:
				printf("Alan: %f, Cevre: %f", (pi*sayi*sayi),(2*pi*sayi));
				break;
			case 4:
				printf("Sonuc: %d", (sayi*sayi*sayi));
				break;
			default: printf("Gecersiz islem");
		}		

 return 0;
}
