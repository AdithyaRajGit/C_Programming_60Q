#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter two numbers \n");
scanf("%d %d",&n1,&n2);
printf("LCM of %d and %d is %d \n",n1,n2,lcm(n1,n2));
return 0;
}
int lcm(int a,int b){
int max=(a>b)? a:b;

while(1){
	if(max%a==0 && max%b==0)
	{
	return max;
	}
max++;
}
}
