#include <stdio.h>

//klavyeden girilen değere göre suyun durumunu bulan program


int main(){
	
	float sicaklik;
	
	printf("Lutfen suyun sicaklik degerini giriniz: ");
	scanf("%f", &sicaklik);  /*kullanıcıdan sıcaklık değerini aldık*/
	
	// if kullanarak suyun bulunabileceği 3 halin de koşulunu ve koşulun sağlanması durumunda ne yapılacağını belirliyoruz
	
	if(sicaklik <= 0) {
		printf("Su bu sicaklikta katidir, yani buzdur.\n");
		}
	
	if(0 < sicaklik && sicaklik < 100 ){
			printf("Su bu sicaklikta sividir, yani sudur.");
		}	
		
	if(sicaklik >= 100){
		printf("Su bu sicaklikta gazdir, yani buhar.");
		}
			
	return 0;
	
}
