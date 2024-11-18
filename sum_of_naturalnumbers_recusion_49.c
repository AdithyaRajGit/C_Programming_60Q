#include<stdio.h>
int sumofn(int x){
if(x == 0){return 0;}
else {return x+sumofn(x-1);}
}

int main(){
int n, sum;
printf("Enter number to calculate sum of Natural numbers \n");
scanf("%d",&n);
sum=sumofn(n);
printf("Sum of %d Natural numbers is %d \n",n,sum);
}
