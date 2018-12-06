#include <stdio.h>

//bu programda kulannıcının girdiği 2 sayının bölümünü ve kalanını bulalım

int main(){
	
	int sayi1, sayi2, kalan, bolum; /*değişkenlerimizi tanımladık */
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);		/*kullanıcıdan ilk sayıyı aldık */
	 
	printf("%d sayisini bolmek istediginiz sayiyi giriniz: ", sayi1);
	scanf("%d", &sayi2);		/*kullanıcıdan bölen değerini aldık*/
	
	bolum = sayi1 / sayi2;		/*bölüm değerini hesapladık*/
	kalan = sayi1 % sayi2;		/*mod operatörüyle kalanı hesapladık*/
	
	if( (sayi1 % sayi2) == 0 )	/*if kullanarak sayi1 ve sayı 2 nin kalansız bölünme koşulunda yapılacak işlemi açıklıyoruz*/
	 printf("\n%d, %d ile tam bolunur.\n", sayi1, sayi2);
	 
	if( (sayi1 % sayi2) != 0 )	/*if kullanarak sayi 1 ve sayi 2 nin kalanlı bölünmesi koşulunda yapılacak işlemi açıklıyoruz*/
	 printf("\n%d, %d ile tam bolunmez.\n", sayi1, sayi2);
	
	printf("\nBolum: %d , Kalan: %d", bolum, kalan);   /*bölüm ve kalanı yazdırıyoruz*/
	
	return 0;
		
}
