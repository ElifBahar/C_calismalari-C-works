#include<stdio.h>

// kullanıcının belirlediği aralıkta kullanıcının belirlediği sayının katlarını bulan program
int main(){
		
	int baslangic,i,bitis,bolen; /*değişkenlerimizi belirledik*/
	
	printf("***\n***\nBu program sizin belirlediginiz aralikta sizin belirlediginiz sayiyla bolunen sayilari listeler.\n***\n***\n\n\n");
	
	printf("Lutfen baslangic sayisini giriniz: ");
	scanf("%d",&baslangic);		/*kullanıcıdan aralığın başlangıc değerini alıyoruz*/
	
	printf("Lutfen bitis sayisini giriniz: ");
	scanf("%d",&bitis);			/*kullanıcıdan aralığın bitiş değerini alıyoruz*/
	
	printf("Kaca bolunenler gosterilsin? ");
	scanf("%d",&bolen);			/*kullanıcıdan kaçın katlarını istediğini alıyoruz*/
	
	printf("\n\n%d ile %d arasinda %d ile bolunen sayilar\n",baslangic,bitis,bolen);
	
	for(i=baslangic;i<=bitis;i++) /*for döngümüzün başlangıcını kullanıcının girdiği baslangıc değerine,
				      bitişini kullanıcının girdiği bitiş değerine eşitliyoruz ve döngümüzün 1er 1er artmasını söylüyoruz*/
		if( ( i%bolen )==0 )
		   printf("%d ",i);	/*if kullanarak döngümüzdeki sayının bölen sayısına kalansız bölünmesi koşulunda 
                                                                        ekrana yazdırılmasını sağlıyoruz*/ 
	
	
	return 0;	
}
