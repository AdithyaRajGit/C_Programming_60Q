#include<stdio.h>
int main() {
int n,temp;
printf("Enter number of elements:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]); }

printf("Entered Array: \n");
for(int i=0;i<n;i++){
  printf("%d  ",arr[i]); }
printf("\n");
//Bubble Sort Algo
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
	  if(arr[i]>arr[j]){
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp; }
 	}
}

printf("Array sorted in ascending order: \n");
for(int i=0;i<n;i++){
  printf("%d  ",arr[i]); }
printf("\n");
return 0;
}
