#include <stdio.h>

int main () {
	//deklarasi
	int n;
	int baris;
	int kolom;
	int kasus;
	
	//user interface
	printf("============================================ \n");
	printf("PROGRAM PEMBUAT POLA LEONARDO \n");
	printf("============================================ \n");
	printf("Masukkan nilai n (tinggi dari pola): ");
	scanf("%d" , &n);
	printf("============================================ \n");
	printf("Pilihan Pola yang ada : \n");
	printf("1. * dan : \n");
	printf("2. $ dan - \n");
	printf("3. # dan o \n");
	printf("4. @ dan x \n");
	printf("Masukkan angka pilihan pola yang anda mau: ");
	scanf("%d" , &kasus);
	printf("============================================ \n");
	
	//komputasi
	switch (kasus) {
		case 1: 
			for (baris = 0 ; baris < n ; baris++) {
				for (kolom = 0 ; kolom < n ; kolom++ ) {
					if ( kolom == baris || baris + kolom == n - 1) {
						printf("*");
					}
					else {
						printf(":");
					}
				}
				printf("\n");
				
			}
			break;
			
		case 2:
			for (baris = 0 ; baris < n ; baris++) {
				for (kolom = 0 ; kolom < n ; kolom++ ) {
					if ( kolom == baris || baris + kolom == n - 1) {
						printf("$");
					}
					else {
						printf("-");
					}
				}
				printf("\n");
			}
			break;
			
		case 3:
			for (baris = 0 ; baris < n ; baris++) {
				for (kolom = 0 ; kolom < n ; kolom++ ) {
					if ( kolom == baris || baris + kolom == n - 1) {
						printf("#");
					}
					else {
						printf("o");
					}
				}
				printf("\n");
			}
			break;
			
		case 4:
			for (baris = 0 ; baris < n ; baris++) {
				for (kolom = 0 ; kolom < n ; kolom++ ) {
					if ( kolom == baris || baris + kolom == n - 1) {
						printf("@");
					}
					else {
						printf("x");
					}
				}
				printf("\n");
			}
			break;
			
	}
	return 0;
	
	
}
