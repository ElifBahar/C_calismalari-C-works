#include <stdio.h>

// ideal kilo hesaplama

int main(){
	
	float kilokadin, kiloerkek,boy,yas;   /*değikenleri float olarak aldım, tamsayı girilmemesi ihtimaline karşı */
	
	printf("Lutfen boyunuzu santimtre olarak giriniz: ");
	scanf("%f", &boy);		/* kullanıcıdna boy değerini alıyoruz */
	
	printf("Lutfen yasinizi giriniz: ");
	scanf("%f", &yas);		/* kullanıcıdan yaş değerini alıyoruz */
	
	kilokadin = (boy-100+yas/10)*0.8;	/*kadın ideal kilosunun hesaplanması*/
	kiloerkek = (boy - 100 + yas / 10 )*0.9;	/*erkek ideal kilosunun hesaplanması*/
	
	printf("\n\n\nKadinsaniz ideal kilonuz: %f\nErkekseniz ideal kilonuz: %f", kilokadin,kiloerkek);   /*sonucları yazdırıyoruz */
	
	return 0;
	
	
	
}
