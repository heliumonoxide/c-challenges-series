#include <stdio.h>
#include <math.h>

int luasSegitiga (int a, int b, int c) {
	int s = 0.5 * (a + b + c);
	int luasTiga = sqrt(s * (s-a) * (s-b) * (s-c));
	printf ("Luas segitiga adalah %d", luasTiga);
	
	return luasTiga;
}

int main(){
	
	luasSegitiga(2,5,3);
	
	return 0;
}
