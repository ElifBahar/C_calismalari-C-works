#include <stdio.h>

// bu programımız vizenin %40, finalin %60 olarak hesaplandığı son ortalamaya göre,
// vize notunu giren kullanıcının sınıfı geçmesi için finalden alması gereken en düşük notu hesaplayacak
// geçme notu 50 olarak kabul edilmiştir


int main(){
	
	int vize, final, toplam, almali;	/*değişkenlerimizi belirledik*/
		
	printf("Lutfen vize notunuzu giriniz: ");
	scanf("%d", &vize);		/*kullanıcıdan vize notunu aldık*/
	
	
	almali = (50 - (0.4*vize) ) *10 / 6;  /*almali, kullanıcın finalden alması gereken en dusuk not anlamında kullanılmıştır*/
	
	/* Almamız gereken minimum not 50, bunun bir kısmı vizenin yüzde kırkı.
	Öncelikle 50'den vizenin %40'ını çıkarıyoruz. Kalan kısım finalin %60'ı alınarak hesaplanır
	kesirlerde tersten giderek hesaplanan sorular gibi hesaplayıp işlemi yazdık yukarıya    */
	
	printf("\nAlman gereken not: %d", almali);
	
	
	
	return 0;
}
