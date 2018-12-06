#include <stdio.h>

//bu programımızda iki sayının ortalamasını hesaplatacağız

int main(){
	
	int sayi1, sayi2, toplam; /*değişkenlerimizi belirledik */
	float ort; /* sayıların ortalaması tam sayı olmayabilir, bu yüzden float kullanıyoruz */
	
	
	printf("Lutfen ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);    /*kullanıcıdan ilk sayıyı aldık */
	
	printf("\nIlk sayi: %d , lutfen ikinci sayiyi giriniz: ", sayi1);
	scanf("%d", &sayi2);    /*kullanıcıdan ikinci sayıyı aldık */
	
	printf("\nIlk sayi: %d , ikinci sayi: %d", sayi1, sayi2);   /*kullanıcıdan aldığımız sayıları ekrana yazdırıyoruz, 
                                                                buna mecbur değiliz, daha güzel görünüyor */
	
	toplam = sayi1 + sayi2 ;  /*toplam değerimizi hesaplattık */ 
	printf("\nSayilarin toplami: %d", toplam);    /*sayıların toplamını yazdırıyoruz */
	
	ort = toplam/2;    /*ortalama değerimizi hesaplattık */ 
	printf("\nSayilarin ortalamasi: %f", ort);   /* ortalama değerimizi yazdırıyoruz */
	
	
	
	return 0;
	
