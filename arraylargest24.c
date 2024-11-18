#include<stdio.h>
int main() {
int n,max=0;
printf("Enter number of elements:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]); }

printf("Entered Array: \n");
for(int i=0;i<n;i++){
  printf("%d  ",arr[i]); }
printf("\n");

for(int i=0;i<n;i++){
  if(arr[i]>max){  max=arr[i]; }
}

printf("Largest element of array is %d, \n",max);
return 0;
}
