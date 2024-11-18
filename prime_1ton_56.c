#include<stdio.h>
int isprime(int x){
if(x<2){return 0;}
else{for(int i=2;i<=x;i++){
	if(x%i==0){
	 return 1;
	}else{
	return 0;
	}
    }
  }
}

int main(){
int n,prime;
printf("Enter upper limit of prime number to be displayed\n");
scanf("%d",&n);
printf("The prime numuber are: \n");
for(int i=1;i<=n;i++){
	 if(isprime(i)){
	 printf("%d, ",i);
	}
   }
printf("\n");
return 0;
}
