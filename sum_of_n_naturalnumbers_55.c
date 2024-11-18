#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter the number \n");
scanf("%d",&n);
for(int i=0;i<=n;++i){
sum +=i;
}
printf("Sum of %d natural numbers is %d \n",n,sum);
return 0;
}
