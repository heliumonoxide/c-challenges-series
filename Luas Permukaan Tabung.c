#include <stdio.h>

int
main () {
	float phi = 3.14;
	float r;
	float t;
	float hasil;
	
	printf("PROGRAM PENGHITUNG LUAS PERMUKAAN TABUNG \n");
	printf("========================================= \n");
	printf("Masukkan ukuran tinggi : ");
	scanf("%f" , &t);
	printf("Masukkan ukuran jari-jari : ");
	scanf("%f" , &r );
	printf("========================================= \n");
	
	hasil = 2*phi*(r*r) + 2*phi*r*t;
	
	printf("Luas permukaan dari tabung adalah %.2f ", hasil);
	
	return 0;
	
}
