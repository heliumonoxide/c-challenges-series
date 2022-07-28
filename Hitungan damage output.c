#include <stdio.h>
#include <windows.h>

int damageCalculate (int base_atk, int weapon_atk, float add_atk, float crit_dmg, float crit_rate); //prototype
void panduan();
void pilihan();
void pilihanPanduan();

int main () { //main function
	int baseAttack, weaponBaseAttack, num, num2;
	float addAttackPerc, damageCritPerc, critRatePerc;
	
	do {
		pilihan();
		printf("pilih 1/2/3: ");
		scanf("%d", &num);
		switch (num) {
		case 1: // if you want to compute the damage
			do {
				printf("=============================================================================== \n");
				printf("Masukkan base attack                  : ");
				scanf("%d", &baseAttack);
				printf("Masukkan weapon base attack           : ");
				scanf("%d", &weaponBaseAttack);
				printf("Masukkan additional attack percentage : ");
				scanf("%f", &addAttackPerc);
				printf("Masukkan critical damage percentage   : ");
				scanf("%f", &damageCritPerc);
				printf("Masukkan critical rate percentage     : ");
				scanf("%f", &critRatePerc);
				printf("=============================================================================== \n");
				
				damageCalculate(baseAttack, weaponBaseAttack, addAttackPerc, damageCritPerc, critRatePerc);
			
				printf("=============================================================================== \n");
				printf("Apakah anda ingin melakukan pencarian kembali? \n(0 untuk lanjut dan -1 untuk kembali ke menu awal) \n");
				scanf("%d", &num2);
			}
			while (num2 != -1 && num2 == 0);
			
			printf("=============================================================================== \n");
			printf("Program akan kembali dalam 5 detik.... \n"); 
			sleep(5);
			system("cls");
			break;
			
		case 2: // manual instruction
			panduan();
			pilihanPanduan();
			printf("pilih 1/2/3: ");
			scanf("%d", &num);
			printf("=============================================================================== \n");
			printf("Program akan mengulang atau mati dalam 5 detik.... \n"); 
			sleep(5);
			system("cls");
			break;
			
		case 3: // stop
			printf("=============================================================================== \n");
			printf("Program akan mati dalam 5 detik.... \n"); 
			sleep(5);
			system("cls");
			break;	
		}
	}
	while (num != 3);
	
	return 0;
}

int damageCalculate (int base_atk, int weapon_atk, float add_atk, float crit_dmg, float crit_rate) { //komputasi untuk menghitung damage
	int attack = base_atk + weapon_atk + (base_atk * (0.01 * add_atk));
	int critDamage = attack + (attack * (0.01 * crit_dmg));
	int jumlahCritDamage = 0.1 * crit_rate;
	
	printf("Attack                      : %d \n", attack);
	printf("Damage Critical             : %d \n", critDamage);
	printf("Jumlah Damage akan Critical : %d dari 10 serangan \n", jumlahCritDamage);
	
	return 0;
}

void panduan() { //interface
	printf("================================================================================ \n");
	printf("||||                       PANDUAN MANUAL MEMAKAI PROGRAM                  ||||| \n");
	printf("================================================================================ \n");
	printf("Ketika memilih 1, masukkan angka yang dibutuhkan sebagai parameter nilai damage. \n");
	printf("Attack dan damage criticalnya akan memiliki perhitungan sebagai berikut: \n");
	printf("Attack = base attack + weapon base attack + (base attack * (0.01 * additional attack percentage) \n");
	printf("Damage critical = Attack + (Attack * (0.01 * damage critical percentage) \n");
	printf("Jumlah damage akan critical = 0.1 * critical rate percentage \n");
	printf("=============================================================================== \n");
	printf("Pilih 3 jika anda sudah selesai menggunakan program! \n");
	printf("=============================================================================== \n");
}

void pilihan() { //interface
	printf("=============================================================================== \n");
	printf("Masukkan angka untuk memilih menu: \n");
	printf("1. Perhitungan Damage \n");
	printf("2. Panduan \n");
	printf("3. Keluar \n");
	printf("=============================================================================== \n");
}

void pilihanPanduan() { //interface
	printf("=============================================================================== \n");
	printf("Masukkan angka untuk memilih menu: \n");
	printf("1. Kembali ke menu awal \n");
	printf("2. Kembali ke menu awal \n");
	printf("3. keluar \n");
	printf("=============================================================================== \n");
}

