#include <stdio.h>

int
main () {
	int umur;
	int npm = 2006531996;
	int umurSaya = 20;
	
	printf("Halo Bryan, Kamu memiliki NPM yaitu %d \n",npm);
	printf("==================================================\n");
	printf("Berapakah umur kamu saat ini? ");
	scanf("%d", &umur);
	printf("==================================================\n");
	if ( umur > umurSaya ) {
		printf ("Anda lebih tua daripada saya");
	}
	
	if (umur < umurSaya ) {
		printf ("Anda lebih muda daripada saya");
	}
	
	if ( umur == umurSaya ) {
		printf ("Umur anda sama dengan saya");
	}
	
	return 0;
}
