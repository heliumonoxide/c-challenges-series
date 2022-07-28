#include <stdio.h>
#include <math.h>

int luasSegitiga (int a, int b, int c) {
	float s = 0.5 * (a + b + c);
	float luasTiga = sqrt(s * (s-a) * (s-b) * (s-c));
	
	return luasTiga;
}

int luasSegiempat (int a, int b) {
	float luasEmpat = a*b;
	
	return luasEmpat;
}

int main(){
	int x, y, z;
	int tinggi;
	float luasPermukaan;
	float volume;
	
	
	while (1) {
		printf("Masukkan sisi segitiga pertama: ");
		scanf("%d", &x);
		printf("Masukkan sisi segitiga kedua: ");
		scanf("%d", &y);
		printf("Masukkan sisi segitiga tiga: ");
		scanf("%d", &z);
		printf("Masukkan tinggi prisma: ");
		scanf("%d", &tinggi);
		
		if (x == 0 || y == 0 || z == 0 || tinggi == 0) {
			break;
		}
	
		luasPermukaan = luasSegitiga(x,y,z)*2 + luasSegiempat(x, tinggi) + luasSegiempat(y, tinggi) + luasSegiempat(z, tinggi);
		volume = luasSegitiga(x, y, z) * tinggi;
	
		printf("Luas Permukaannya adalah %.2f \n", luasPermukaan);
		printf("Volume dari prisma adalah %.2f \n", volume);
	}
	
	return 0;
}





