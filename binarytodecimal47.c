#include<stdio.h>
#include <math.h>

int main(){
long int bin,org;
int dec=0,base=1,rem;
 printf("Entera a Binary number to convert to Decimal\n");
 scanf("%ld",&bin);
 org = bin;
while(bin!=0){
 rem=bin%10;
 bin /=10;
 dec += rem* base;
 base= base*2;
//dec += rem*pow(2,pos);
//pos++;
}
printf("Binar %ld converted to decimal: %d\n",org,dec);

return 0;
}
