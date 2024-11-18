#include<stdio.h>
int main(){

int n;
printf("Enter the number of elements in array. \n");
scanf("%d",&n);

int arr[n],rev[n];
printf("Enter elements of array: \n");

for(int i=0;i<n;i++){
scanf("%d",&arr[i]);  }
printf("Entered Array: \n");
for(int i=0;i<n;i++){ printf("%d  ",arr[i]); }


for (int i=n-1;i>=0;i--){
	rev[i]=arr[n-1-i];  }
printf("Rversed Array: \n");
for(int i=0;i<n;i++){ printf("%d  ",rev[i]); }

printf("\n");
return 0;
}
