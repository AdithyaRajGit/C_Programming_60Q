#include<stdio.h>
int main(){
int n, org, rem, rev=0;
printf("Enter a Number to check if a number is Palindrome \n");
scanf("%d",&n);
org = n;
 while(n!=0){
  rem=n%10;
  n /=10;
  rev=(rev*10)+rem;
 }
printf("The reversed number is %d \n",rev);
if(org==rev)printf("The number is Palindrome \n");
else printf("The Number is not Palindrome \n");
return 0;
}
