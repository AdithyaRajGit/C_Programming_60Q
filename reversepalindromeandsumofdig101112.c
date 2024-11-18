#include<stdio.h>
int reverse(int n){
int rev=0,rem;
  while(n!=0){
   rem= n%10;
   n /=10;
   rev=(rev*10)+rem;
   }
 printf("Reversed number is: %d \n",rev);
 return rev;  }


int palindrome(int n,int m){
  if(n==m)printf("Entered Number is Palindrome\n");
  else printf("Entered Number is not Palindrome\n");  }


int sumofdig(int num){
int rem,sum=0,count=0;
   while(num!=0){
    rem=num%10;
    sum=sum+rem;
    num /=10;
    count++;  }
printf("Sum of digits: %d\n",count);
}


int main(){
int n,rev;
 printf("Enter the Number \n");
 scanf("%d",&n);
  sumofdig(n);
  rev=reverse(n);
  palindrome(n,rev);
 return 0;
}
