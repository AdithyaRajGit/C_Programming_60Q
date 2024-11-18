#include<stdio.h>
int main(){

int n,del;
printf("Enter the number of elements in array. \n");
scanf("%d",&n);

int arr[n];
printf("Enter elements of array: \n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);  }

printf("Entered Array: \n");
for(int i=0;i<n;i++){ printf("%d  ",arr[i]); }
printf("\n");

printf("Enter the number you want to delete.\n");
scanf("%d",&del);

for(int i=0;i<n;i++){  if(arr[i]==del) {  for(int j=i;j<n;j++){
	arr[j]=arr[j+1];  }   }   }

printf("Changed Array: \n");
for(int i=0;i<n-1;i++){ printf("%d  ",arr[i]); }
printf("\n");
return 0;
}
