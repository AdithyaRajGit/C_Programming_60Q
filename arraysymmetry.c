#include<stdio.h>
int main(){
int n,symmetric=1;

printf("Enter the numbre of elements: ");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n;i++){
scanf("%d",&arr[i]);
}

for(int i=0;i< n/2; i++){
	   if(arr[i] != arr[n-1-i]){
		printf("Entered array is assymetric.\n");
		symmetric=0;   }
	}
if(symmetric) {  printf("Entered array is symetric.\n");  }

return 0;
}
