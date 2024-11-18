#include<stdio.h>
int main(){
int n,sum;

printf("Enter the Length of array: ");
scanf("%d",&n);

int arr[n];
printf("Enter elements of array: \n");

for(int i=0;i<n;i++){
scanf("%d",&arr[i]);  }

for(int i=0;i<n;i++){
sum +=arr[i]; }

printf("Sum of elements of an array is %d. \n",sum);
return 0;
}
