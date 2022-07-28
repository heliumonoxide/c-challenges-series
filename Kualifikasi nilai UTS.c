#include <stdio.h>

int
main () {
	int semester = 1;
	int nilaiMatematika;
	int nilaiFisika;
	int nilaiKimia;
	int totalSemua;
	int totalMatfis;
	
	printf("Semester: ");
	scanf("%d", &semester);
	
	while (semester != 0) {
		printf("Masukkan nilai Matematika: ");
		scanf("%d", &nilaiMatematika);
		printf("Masukkan nilai Fisika: ");
		scanf("%d", &nilaiFisika);
		printf("Masukkan nilai Kimia: ");
		scanf("%d", &nilaiKimia);
		
		totalSemua = nilaiFisika + nilaiMatematika + nilaiKimia;
		totalMatfis = nilaiMatematika + nilaiFisika;
		
		printf("Total nilai Matematika, Fisika ,dan Kimia : %d \n", totalSemua);
		printf("Total Matematika dan Fisika : %d \n", totalMatfis);
		
		if (nilaiMatematika >= 65 && nilaiFisika >= 55 && nilaiKimia >= 50 && (totalSemua >= 190 || totalMatfis >= 140)) {
			printf("Kandidat eligible \n");
		}
		else {
			printf("Kandidat tidak eligible \n");
		}
		
		printf("Masukan Semester anda untuk memasukan data, atau tekan 0 untuk selesai \n");
		printf("========================================================================= \n");
		printf("Semester: ");
		scanf("%d", &semester);
	}
	return 0;
}
