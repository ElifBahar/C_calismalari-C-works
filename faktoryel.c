#include<stdio.h>

//girilen sayinin faktoriyelini alan program

int main(){
	
	int i,a,fakt;  /*değişkenlerimizi belirledik */
	i=1;
  
		printf("Lutfen faktoriyelini almak istediginiz sayiyi giriniz: ");
	scanf("%d",&a);    /*kullanıcıdan hangi sayının faktoryelini almak istediğini öğreniyoruz */
	
	
	while (i<=a){     /*while kullanarak döngümüzü oluşturuyoruz*/
	
		fakt=i*fakt;
		i++;
}
	
	printf("%d",fakt);  
	
	
	return 0;
}
