#include <stdio.h>

/* bu programımızda kullanıcı tarafından girilen iki sayiyi karşılaştıran bir kod yazalım. */
/* değişken sayisini arttırarak ve if ekleyerek daha fzla sayıyla yapabilirsiniz */

int main(){
	
	int sayi1, sayi2;   /*değişkenlerimizi tanımladık */
	
	printf("Bu program girdiginiz iki sayiyi karsilastirmak icin yazildi.\n\nLutfen ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);		/*kullanıcıdan ilk sayıyı aldık*/
	printf("Ilk sayi %d , lutfen ikinci sayiyi giriniz: ", sayi1);
	scanf("%d", &sayi2);		/*kullanıcıdan ikinci sayıyı aldık*/
	
	printf("\n\n");   /*2 satır aşağı geçiriyoruz*/

//sayıları karşılaştırırken 3 durum söz konusudur, sayılar ya eşittir, ya birincisi büyüktür, ya da birincisi küçüktür
		
	if( sayi1 == sayi2 )		/*if karar yapısıyla sayıların eşit olması koşulunda ne yapılacağını açıkladık*/
		printf("Ilk sayi ikinci sayiya esittir.\n");
			
	if( sayi1 < sayi2 )			/*if karar yapısıyla ilk sayının küçük olma koşulunu açıkladık ve farkı yazdırdık*/
		printf("Ilk sayi ikinci sayidan %d kucuktur.\n", sayi2-sayi1);
			
	if( sayi1 > sayi2 )			/*if karar yapısıyla ilk sayının büyük olma koşulunu açıkladık ve farkı yazdırdık*/
		printf("Ilk sayi ikinci sayidan %d buyuktur.\n", sayi1-sayi2);
	
	
	return 0;
}
