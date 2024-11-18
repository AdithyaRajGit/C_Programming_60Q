#include<stdio.h>
int main(){
int n;
printf("Enter a number \n");
scanf("%d",&n);
if(n==0){printf("Entered number is Zero \n");}
else if(n>0){printf("Entered number is Positive number \n");}
else{printf("Entered number is Negative number\n");}
return 0;
}
