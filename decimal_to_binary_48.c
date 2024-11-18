#include<stdio.h>
int main() {
int dec,rem,org,i=0;
int bin [32];

printf("Enter the decimal number\n");
scanf("%d",&dec);
org = dec;
printf("Binary equivalent is : ");
while(dec!=0){
   bin[i]=dec%2;
   dec/=2;
   i++;
   }
for(int j= i-1; j>=0; j--){
printf("%d",bin[j]);
}
printf("\n");
return 0;
}
