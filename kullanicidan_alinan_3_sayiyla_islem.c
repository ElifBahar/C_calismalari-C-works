#include <stdio.h>

// bu programda kullanıcının girdiği 3 sayıyla yapılabilecek aritmetik işlemlerden bazılarını gösterelim

int main(){
	
	int sayi1, sayi2, sayi3, carpim, toplam;   /*değişkenlerimizi belirledik */
	float ort;        /*ortalama her zaman tam sayı çıkmaz, bu yüzden float kullanıjyoruz */
	
	printf("Lutfen ilk sayiyi giriniz: ");
	scanf("%d", &sayi1);      /*kullanıcıdan ilk sayıyı aldık */
	
	printf("\nIlk sayi %d, lutfen ikinci sayiyi giriniz: ", sayi1);
	scanf("%d", &sayi2);	  /*kullanıcıdan ikinci sayıyı aldık */
	
	printf("\nIlk sayi %d, ikinci sayi %d, lutfen ucuncu sayiyi giriniz: ", sayi1, sayi2, sayi3);
	scanf("%d", &sayi3); 	  /*kullanıcıdan üçüncğ sayıyı aldık */
	
	carpim = sayi1 * sayi2 * sayi3;     /*çarpımı hesaplatıyoruz */
	toplam = sayi1 + sayi2 + sayi3;		/*toplamı hesaplatıyoruz */
	ort = toplam / 3;					/*ortalamayı hesaplatıyoruz */
	
	printf("\n\nSayilar: %d, %d, %d", sayi1,sayi2,sayi3);  /*kullanıcının girdiği sayıları tekrar yazdırdık, daha belirgin oluyor*/
	
	printf("\nSayilarin carpimi: %d\nSayilarin toplami: %d\nSayilarin Ortalamasi: %f", carpim,toplam,ort); /*işlemlerin sonucunu yazdırdık */
	
	
	return 0;
	
	
}
