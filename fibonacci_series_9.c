#include<stdio.h>
int main(){
int n,fib;
int a=0,b=1;
printf("Enter number of fibonacci elements to be print: ");
scanf("%d",&n);
printf("%d  %d  ",a,b);
for(int i=2;i<n;i++){
fib=a+b;
a=b;
b=fib;
printf("%d  ",fib);
}

printf("\n");
return 0;
}

