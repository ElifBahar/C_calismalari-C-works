#include <stdio.h>

//bir atm uygulaması, kullanıcı bakiyesi 1000 tl olarak tanımlanmıştır

int main(){
	int islem;
	float tutar, masraf, bakiye;
	bakiye=1000.0;
	
	
	printf("Hosgeldiniz.\n\nIslemler:\n1-Bakiye Sorgulama\n2-Para Cekme\n3-Para Yatirma\n4-Havale-EFT\n0-Kart Iade\n\n");

do{
	
	printf("\n\nLutfen yapmak istediginiz islemi seciniz: ");
	scanf("%d",&islem);

	
	
	
		switch (islem){
		
			case 1: printf("Hesap bakiyeniz: %.2f TL", bakiye);
					break;
				
			case 2: printf("Bakiyeniz: %.2f TL\n",bakiye);
					printf("Cekmek istediginiz tutari giriniz: ");
					scanf("%f",&tutar);
					if ( tutar > bakiye) {
						printf("Yetersiz bakiye.");
					}
					else {
					bakiye -= tutar;
					printf("Kalan bakiye: %.2f TL", bakiye);
				}
					break;
				
			case 3: printf("Bakiyeniz: %.2f TL\n",bakiye);
					printf("Yatirmak istediginiz tutari giriniz:");
					scanf("%f",&tutar);
					bakiye += tutar;
					printf("Yeni bakiyeniz %.2f TL", bakiye);
					break;
		
			case 4: printf("Bakiyeniz: %.2f TL\n",bakiye);
					printf("Havale etmek istediginiz tutari giriniz: ");
					scanf("%f",&tutar);
					masraf=tutar*1/10;
					if( tutar> bakiye || (tutar+masraf)> bakiye){
						printf("Yetersiz bakiye.");
					}
				
					else{
						bakiye = bakiye -tutar- masraf;
						printf("Havale etmek istediginiz %.2f TL icin %.2f TL islem masrafi bakiyenizden dusuruldu.\nKalan bakiyeniz: %.2f TL",tutar,masraf,bakiye);
				}
					break;
			
			
			default : if(islem !=0){
						printf("Gecersiz islem.");
					break;}
			
		}
			
}
while (islem != 0);

printf("Kartinizi alabilirsiniz.");
	
	return 0;
	
}
