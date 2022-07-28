#include <stdio.h>

int main() {
int key;
char crypt[100], pass;
int i;
printf("Enter The Enryption : \n");
scanf("%s", &crypt);
printf("Enter Key : ");
scanf("%d", &key);
if(key<=26){
for(i=0; crypt[i] != '\0'; i++){
pass = crypt[i];
if(pass>='a' && pass<='z'){
 pass = pass + key;
 if(pass>'z'){
  pass = pass - 'Z' + 'A' - 1;
 }
 crypt[i]=pass - 32;
}
}
printf("Password: %s", crypt);
return 0;
}
else{
 printf("Error!");
 return 0;
}
}
