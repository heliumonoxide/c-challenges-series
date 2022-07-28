#include <stdio.h>

int main () {
	int n;
	int start=0;
  	float angka;
  	float max;
  	float sum=0;
 	float rataan;
 	
 	printf("Berapa jumlah angka yang akan dimasukkan? ");
 	scanf("%d" , &n);
 	
 	while(start < n)  {
 		printf("Masukkan angka : ");
 		scanf("%f", &angka);
 		sum = sum + angka;
 		
 		if (angka > max){
 			max = angka;
		 }
		
		start++;
	 }
	
	rataan = sum/n;
	printf("Dari angka-angka yang ada akan menghasilkan rata-rata : %f \n", rataan);
	printf("Nilai maksimum dari angka-angka yang ada adalah %f \n", max);
	
	return 0;
}
