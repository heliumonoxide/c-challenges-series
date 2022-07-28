#include <stdio.h>

int main(){
	unsigned int array[20] = {34, 21, 89, 24, 19, 11, 13, 21, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
	int search;
	int i, k, temp, min;
	int median, rataan, modus, modusSejati;
	
	//searching
	printf("Masukkan angka yang dicari: ");
	scanf("%d", &search);
	
	for(i = 0; i < 20; i++){
		if(array[i] == search){
			printf("\nSelamat! data angka yaitu %d ditemukan pada index ke-%d di dalam array\n", search, i);
			break;
		}
	}
	
	if(array[i] != search){
		printf("\nMaaf data anda tidak ditemukan di dalam array\n");
	}
	
	//sorting
	for (i = 0; i < 19; i++){
    	min = i;
    	for (k = i + 1; k < 20; k++) {
        	if (array[k] < array[min]){
           		min = k;
           	}
    	} 
    temp = array[i];
    array[i] = array[min];
    array[min] = temp;
  	}
	
	printf("\nBerikut adalah hasil sorting dari array:\n");
	for (i = 0; i < 20; i++){
		printf("%d  ", array[i]);
	}
	
	//Max Min
	printf("\n\nNilai Minimum dari array adalah %d\ndan nilai maksimum dari array adalah %d\n", array[0], array[19]);
	
	//Rataan/Mean
	rataan = array[0];
	for (i = 1; i < 20 ; i++){
    	rataan = rataan + array[i];
	}
	rataan = rataan / i;
	printf("\nNilai mean dari array adalah %d", rataan);
	
	//Median
	median = (array[0] + array[19])/2;
	printf("\nNilai median dari array adalah %d", median);
	
	//Modus
	temp = 0;
	for(i = 0; i < 19; i++){
		modus = 0;
		for(k = i + 1; k < 20; k++){
			if(array[i] == array[k]){
				modus += 1;
			}
		}
		if(temp < modus){
			temp = modus;
			modusSejati = array[i];
		}
	}
	
	printf("\nNilai modus dari array adalah %d\n", modusSejati);
	
	// Searching after sorting
	printf("\nMasukkan angka yang dicari: ");
	scanf("%d", &search);
	
	for(i = 0; i < 20; i++){
		if(array[i] == search){
			printf("\nSelamat! data angka yaitu %d ditemukan pada index ke-%d di dalam array", search, i);
			break;
		}
	}
	
	if(array[i] != search){
		printf("\nMaaf data anda tidak ditemukan di dalam array");
	}
	
	return 0;
}
