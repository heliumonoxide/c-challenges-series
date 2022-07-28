#include <stdio.h>
#include <stdlib.h>

void pilihan();

int main() {
	int jenisAwal, jenisAkhir;
	float derajatAwal, derajatAkhir;
	int i;
	int eof;
	
	printf("==================================\n");
	printf("      PROGRAM KONVERSI SUHU\n");
	printf("==================================\n");
	printf("Berapa kali anda ingin menghitung? ");
	scanf("%d", &eof);
	
	for (i = 0; i < eof; i++){
		printf("==========================\nSATUAN SUHU AWAL\n");
		pilihan();
		scanf("%d", &jenisAwal);
		
		while (jenisAwal != 1 && jenisAwal != 2 && jenisAwal != 3 && jenisAwal != 4) {
			printf("Jenis tidak ada, mohon masukkan jenis ulang: ");
			scanf("%d", &jenisAwal);
		}
		
		printf("Masukkan suhu awal: ");
		scanf("%f", &derajatAwal);
		printf("==========================\nSATUAN SUHU TUJUAN\n");
		pilihan();
		scanf("%d", &jenisAkhir);
		
		while (jenisAkhir != 1 && jenisAkhir != 2 && jenisAkhir != 3 && jenisAkhir != 4) {
			printf("Jenis tidak ada, mohon masukkan jenis ulang: ");
			scanf("%d", &jenisAkhir);
		}
		
		if (jenisAwal == 1) {
			while (jenisAkhir == 1) {
				printf("Pilihan anda sama dengan jenis suhu awal.\n\nMasukkan pilihan ulang:\n");
				pilihan();
				scanf("%d", &jenisAkhir);
			}
			
			if (jenisAkhir == 2) {
				derajatAkhir = derajatAwal * 0.8;
				printf("Maka suhu akhirnya adalah %.2f R\n", derajatAkhir);
			}
			
			else if (jenisAkhir == 3) {
				derajatAkhir = 1.8 * derajatAwal + 32;
				printf("Maka suhu akhirnya adalah %.2f F\n", derajatAkhir);
			}
			
			else if (jenisAkhir == 4) {
				derajatAkhir = derajatAwal + 273;
				printf("Maka suhu akhirnya adalah %.2f K\n", derajatAkhir);
			}
			
		}
		
		if (jenisAwal == 2){
			while (jenisAkhir == 2){
				printf("Pilihan anda sama dengan jenis suhu awal.\n\nMasukkan pilihan ulang:\n");
				pilihan();
				scanf("%d", &jenisAkhir);
			}
			
			if (jenisAkhir == 1){
				derajatAkhir = derajatAwal * 1.25;
				printf("Maka suhu akhirnya adalah %.2f C\n", derajatAkhir);
			}
			
			else if (jenisAkhir == 3){
				derajatAkhir = 2.25 * derajatAwal + 32;
				printf("Maka suhu akhirnya adalah %.2f F\n", derajatAkhir);
				
			}
			
			else if (jenisAkhir == 4) {
				derajatAkhir = 1.25 * derajatAwal + 273;
				printf("Maka suhu akhirnya adalah %.2f K\n", derajatAkhir);
			}
		}
		
		if (jenisAwal == 3){
			while (jenisAkhir == 3){
				printf("Pilihan anda sama dengan jenis suhu awal.\n\nMasukkan pilihan ulang:\n");
				pilihan();
				scanf("%d", &jenisAkhir);
			}
			
			if (jenisAkhir == 1){
				derajatAkhir = 0.55 * (derajatAwal - 32);
				printf("Maka suhu akhirnya adalah %.2f C\n", derajatAkhir);
			}
			
			else if (jenisAkhir == 2){
				derajatAkhir = 0.44 * (derajatAwal - 32);
				printf("Maka suhu akhirnya adalah %.2f R\n", derajatAkhir);
			}
			
			else if (jenisAkhir == 4) {
				derajatAkhir = 0.55 * (derajatAwal - 32) + 273;
				printf("Maka suhu akhirnya adalah %.2f K\n", derajatAkhir);
			}
		}
		
		if (jenisAwal == 4){
			while (jenisAkhir == 4){
				printf("Pilihan anda sama dengan jenis suhu awal.\n\nMasukkan pilihan ulang:\n");
				pilihan();
				scanf("%d", &jenisAkhir);
			}
			
			if (jenisAkhir == 1){
				derajatAkhir = derajatAwal - 273;
				printf("Maka suhu akhirnya adalah %.2f C\n", derajatAkhir);
			}
			
			else if (jenisAkhir == 2){
				derajatAkhir = 0.8 * (derajatAwal - 273);
				printf("Maka suhu akhirnya adalah %.2f R\n", derajatAkhir);
			}
			
			else if (jenisAkhir == 3) {
				derajatAkhir = 0.55 * (derajatAwal - 273) + 32;
				printf("Maka suhu akhirnya adalah %.2f F\n", derajatAkhir);
			}
		}
	}
	
	return 0;
}

void pilihan() {
	printf("1. Celcius\n2. Reamur\n3. Fahrenheit\n4. Kelvin\nPilihlah salah satu: ");
}
