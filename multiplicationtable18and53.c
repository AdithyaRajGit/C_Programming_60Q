#include<stdio.h>
int main(){
int n;
printf("Enter a number \n");
scanf("%d",&n);
printf("Multiplication table of %d is: \n",n);
for(int i=1; i<=10; i++){
printf("%d x %d  = %d \n",n ,i ,i*n);
}
}