#include<stdio.h>

/*Bu programda bir sinemadaki harcamalari hesaplansın.
    Sinemadaki fiyatları şu şekilde kabul edelim:
        Mısır 2 TL
		    Kola 2 TL
		    Su 1 Tl
		    Bilet 8 TL
	Bir kişinin aldığı adterlei girdiğinde ödemesi gereken tutarı hesaplatalım */
	
int main(){
	
	int misir,kola,su,bilet,toplam;		/*değişkenlerimizi belirledik */
	
	printf("Lutfen bilet sayisini giriniz: ");
	scanf("%d", &bilet);      /*kullanıcıdan bilet sayısını alıyoruz */
	
	printf("Lutfen su sayisini giriniz: ");
	scanf("%d", &su);		  /*kullanıcıdan su sayısını alıyoruz */
	
	printf("Lutfen kola sayisini giriniz: ");
	scanf("%d", &kola);		  /*kullanıcıdan kola sayısını alıyoruz */
	
	printf("Lutfen misir sayisini giriniz: ");
	scanf("%d", &misir);	  /*kullanıcıdan mısır sayısını alıyoruz */
	
	toplam = misir*2+ kola*2 + su*1 + bilet*8;   /*burada ise adetleri fiyatlarla çarpıp topluyoruz */
	
	printf("\n\nToplam tutar: %d TL", toplam);   /*Toplam tutarı yazdırıyoruz */
	
	return 0;
}
