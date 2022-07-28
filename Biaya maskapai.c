#include <stdio.h>

int main() {
	int berat;
	int harga;
	int waktu;
	int totalHarga;
	
	printf("PROGRAM PENGHITUNG BIAYA AKHIR MASKAPAI \n");
	printf("=========================================== \n");
	printf("Masukkan berat bawaan anda : ");
	scanf("%d", &berat);
	printf("Masukkan biaya tiker normal anda : ");
	scanf("%d", &harga);
	printf("Masukkan jumlah waktu lama delay : ");
	scanf("%d", &waktu);
	printf("=========================================== \n");
	
	totalHarga = harga;
	
	if ( berat > 40 ) {
		totalHarga = harga - (harga*15/100);
	}
	
	if ( waktu > 60 ) {
		totalHarga = harga + (harga*15/100);
	}
	
	printf("Total harga yang perlu dibayar adalah : %d", totalHarga);
	
	return 0;
}
