#include<stdio.h>
int main()
{
int year;
printf("Enter the Year :");
scanf("%d",&year);
if(year%4==0){
printf("The Year %d is a leap year\n",year);
}
else{printf("The Year %d is not a leap year\n",year);
}
return 0;
}
