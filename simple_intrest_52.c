#include<stdio.h>
int main(){
int p,t,r,si;
printf("Enter the principal amount, Number of Years and Rate of intrest \n");
scanf("%d %d %d",&p ,&t ,&r);
si =(p*t*r)/100;
printf("%d is the simple intrest. %d is the amount to be paid \n",si,si+p);
return 0;
}
