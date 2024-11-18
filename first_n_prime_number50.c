#include<stdio.h>
int prime(int n){
 if(n<2)return 0;
 else{
	for(int i=2; i<=n; i++){
	if(n%i==0)return 0;
	else return 1;
	}
     }
}

int main(){
int num,count=0,n=2;
printf("Enter number of prime numbers to be displayed");
scanf("%d",&num);
  while(count<num){
	if(prime(n)){
	printf("%d ,",n);
	count++;
	}
  n++;
  }
printf("\n");
}
