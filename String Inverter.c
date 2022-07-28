#include <stdio.h>
#include <string.h>

int main() {
	int a;
	char kata1[50];
	char kata2[50];
	
	printf("Masukkan nilai string yang akan dibalik: ");
	scanf(" %[^\n]s", &kata1);
	
	a = strlen(kata1);
	int i;
	int j = a - 1;
	
	for(i = 0; i < a; i++){
		kata2[i] = kata1[j];
		j--;
	}
	printf("Nilai string adalah %s\n", kata1);
	printf("Nilai string kebalik adalah %s", kata2);
	
	return 0;
}
