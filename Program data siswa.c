#include <stdio.h>

struct DataMahasiswa { // inisiasi structure DataMahasiswa
 char nama[30], smu[30]; // maksimum nama dan smu 30 unit
 long long int npm, telp; // menggunakan long long int karena int yang dimasukkan besar
};

int main()
{
    int y,i;
    printf("Banyaknya data: "); scanf("%d", &y); // input banyak data mahasiswa
    struct DataMahasiswa datam[y];
 for(i=0; i<y; i++) { // loop untuk input data mahasiswa
  printf("\nData Mahasiswa-%d\n", i+1);
  printf("Nama: "); scanf(" %255[^\n]s", &datam[i].nama); 
  fflush(stdin);// input nama
  printf("NPM: "); scanf("%lld", &datam[i].npm); // input npm
  printf("SMU: "); scanf(" %255[^\n]s", &datam[i].smu); 
  fflush(stdin);// input smu
  printf("TELP: "); scanf("%lld", &datam[i].telp); // input no telpon
 }
 printf("\n=Check Data Mahasiswa=\n");
 printer(y,datam);
    return 0;
}

void printer(int y, struct DataMahasiswa *datam){
 int i=0;
 printf ("\tNama\tNPM\tAsal Sekolah\tTelp");
 for(i=0; i<y; i++) {
  printf("\n%d\t", i+1);
  printf("%s\t", datam[i].nama);
  printf("%lld\t", datam[i].npm);
  printf("%s\t", datam[i].smu);
  printf("\t%lld", datam[i].telp);
 }
}
