#include <stdio.h>

int main () {
	int damage;
	int agility;
	
	while (1) {
		printf("Masukkan damage dari hero yang biasanya kamu mainkan : ");
		scanf("%d", &damage);
	
		printf("Masukkan agility dari hero yang biasanya kamu mainkan : ");
		scanf("%d", &agility);
	
		if (damage > 700 && damage <= 1000 && agility > 45 && agility <= 60) {
			printf("================================ \n");
			printf("Role yang cocok adalah Carry \n");
			printf("================================ \n");
		}
	
		else if (damage > 600 && damage <= 700 && agility <= 50 && agility >= 40) {
			printf("================================ \n");
			printf("Role yang cocok adalah Midlaner \n");
			printf("================================ \n");
		}
	
		else if (damage >= 500 && damage <= 600 && agility < 40 && agility >= 35) {
			printf("================================ \n");	
			printf("Role yang cocok adalah Offlaner \n");
			printf("================================ \n");
		}
	
		else if (damage == -1 || agility == -1) {
			printf("==================================== \n");	
			printf("Terima kasih, program akan berhenti \n");
			printf("==================================== \n");
			break;
		}
	
		else {
			printf("================================ \n");	
			printf("Role tidak dapat ditentukan \n");
			printf("================================ \n");
		}
	}
	return 0;
 }
